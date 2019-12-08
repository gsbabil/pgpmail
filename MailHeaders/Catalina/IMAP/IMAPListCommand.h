//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAPSingleCommand.h>

@class NSDictionary, NSString;

@interface IMAPListCommand : IMAPSingleCommand
{
    NSString *_mailboxName;
    NSString *_referenceName;
    long long _options;
    NSDictionary *_listing;
    NSString *_separator;
}

@property(copy) NSString *separator; // @synthesize separator=_separator;
@property(copy) NSDictionary *listing; // @synthesize listing=_listing;
@property long long options; // @synthesize options=_options;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
@property(readonly, copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
//- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithMailboxName:(id)arg1 options:(long long)arg2;
- (id)initWithMailboxName:(id)arg1 referenceName:(id)arg2 options:(long long)arg3;

@end

