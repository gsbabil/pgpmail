/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class NSData, NSString;

@interface IMAPClientLoginOperation : IMAPSingleClientOperation
{
    NSString *_username;
    NSString *_quotedUsername;
    NSString *_password;
    NSString *_quotedPassword;
    NSData *_literalPassword;
}

- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (void)dealloc;
- (id)commandTypeString;
- (id)debugCommandString;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)executeOnConnection:(id)arg1;
@property(retain) NSData *literalPassword; // @synthesize literalPassword=_literalPassword;
@property(copy) NSString *quotedPassword; // @synthesize quotedPassword=_quotedPassword;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *quotedUsername; // @synthesize quotedUsername=_quotedUsername;
@property(copy) NSString *username; // @synthesize username=_username;

@end

