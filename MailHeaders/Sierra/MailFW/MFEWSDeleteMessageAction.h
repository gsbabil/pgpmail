//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSLocalMessageAction.h>

@class NSArray;

@interface MFEWSDeleteMessageAction : MFEWSLocalMessageAction
{
    NSArray *_itemIDs;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void).cxx_destruct;	// IMP=0x000000000008251f
- (id)newSyncOperation;	// IMP=0x00000000000824d4
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;	// IMP=0x0000000000082405
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 itemIDs:(id)arg5;	// IMP=0x0000000000082336

@end

