//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MessageListFilter-Protocol.h"

@class MFMailbox, NSImage, NSPredicate, NSString;

@interface MessageListMailboxFilter : NSObject <MessageListFilter>
{
    MFMailbox *_mailbox;
}

@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
//- (void).cxx_destruct;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSPredicate *predicate;
@property(readonly, copy, nonatomic) NSImage *icon;
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;
- (id)initWithMailbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

