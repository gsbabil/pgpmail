//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MFMailbox, NSArray, NSError, NSNumber;

@interface MFEWSLocalMessageAction : NSObject
{
    BOOL _userInitiated;
    long long _messageActionID;
    NSNumber *_activityType;
    MFMailbox *_mailbox;
    NSError *_error;
    NSArray *_missedMessages;
}

@property(copy, nonatomic) NSArray *missedMessages; // @synthesize missedMessages=_missedMessages;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(readonly, nonatomic) NSNumber *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long messageActionID; // @synthesize messageActionID=_messageActionID;
//- (void).cxx_destruct;
- (id)init;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;

@end

