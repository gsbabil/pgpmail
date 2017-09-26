/* MCMemoryDataSource+GPGMail.m created by Lukas Pitschl (@lukele) on Thursday 21-Sep-2017 */

/*
 * Copyright (c) 2017, GPGTools <team@gpgtools.org>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of GPGTools nor the names of GPGMail
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY GPGTools ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL GPGTools BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "MCMemoryDataSource+GPGMail.h"
#import "MCMimePart.h"
#import "MCMessage.h"
#import "NSObject+LPDynamicIvars.h"
#import "MimePart+GPGMail.h"

extern NSString * const kLibraryMimeBodyReturnCompleteBodyDataForComposeBackendKey;
extern NSString * const kLibraryMimeBodyReturnCompleteBodyDataForMessageKey;
extern NSString * const kLibraryMimeBodyReturnCompleteBodyDataKey;
extern NSString * const kMimePartAllowPGPProcessingKey;
extern NSString * const kMessageSecurityFeaturesKey;

// This class is responsible for fetching the body data of messages when the message
// is contained in an .eml file.
@implementation MCMemoryDataSource_GPGMail

- (void)MAGetTopLevelMimePart:(MCMimePart **)topLevelMimePart headers:(id *)headers body:(MCMessageBody **)body forMessage:(MCMessage *)currentMessage fetchIfNotAvailable:(BOOL)fetchIfNotAvailable updateFlags:(BOOL)updateFlags allowPartial:(BOOL)allowPartial {
    BOOL wantsCompleteBodyData = ([[[[NSThread currentThread] threadDictionary] valueForKey:kLibraryMimeBodyReturnCompleteBodyDataKey] boolValue] &&
                                  [[[NSThread currentThread] threadDictionary] valueForKey:kLibraryMimeBodyReturnCompleteBodyDataForMessageKey] == currentMessage) || [[[[NSThread currentThread] threadDictionary] valueForKey:kLibraryMimeBodyReturnCompleteBodyDataForComposeBackendKey] boolValue];
    if(!wantsCompleteBodyData) {
        [self MAGetTopLevelMimePart:topLevelMimePart headers:headers body:body forMessage:currentMessage fetchIfNotAvailable:fetchIfNotAvailable updateFlags:updateFlags allowPartial:allowPartial];
        return;
    }
    
    MCMimePart *temporaryMimePart = nil;
    [self MAGetTopLevelMimePart:&temporaryMimePart headers:headers body:body forMessage:currentMessage fetchIfNotAvailable:fetchIfNotAvailable updateFlags:updateFlags allowPartial:allowPartial];
    if(body != NULL) {
        // If a
        [temporaryMimePart setIvar:kMimePartAllowPGPProcessingKey value:@(YES)];
        MCMessageBody *messageBody = [temporaryMimePart messageBody];
        [currentMessage setIvar:kMessageSecurityFeaturesKey value:[(MimePart_GPGMail *)temporaryMimePart securityFeatures]];
        *body = messageBody;
    }
}

@end
