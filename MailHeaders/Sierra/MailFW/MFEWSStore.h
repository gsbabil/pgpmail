//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFRemoteStore.h>

#import "MFEWSErrorHandler.h"

@class MFEWSAccount, NSLock, NSMutableSet, NSString;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler>
{
    NSString *_syncState;	// 16 = 0x10
    NSLock *_syncLock;	// 24 = 0x18
    NSMutableSet *_flagsToSetDuringSync;	// 32 = 0x20
    NSString *_folderIdString;	// 40 = 0x28
}

@property(copy) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (void).cxx_destruct;	// IMP=0x00000000000bd2db
- (void)handleEWSError:(id)arg1;	// IMP=0x00000000000bd0f1
- (BOOL)_loadFolderId;	// IMP=0x00000000000bcf23
- (void)_setSyncState:(id)arg1 persistToLibrary:(BOOL)arg2;	// IMP=0x00000000000bcdb8
@property(copy) NSString *syncState;
- (id)_gateway;	// IMP=0x00000000000bccf9
@property(readonly, nonatomic) MFEWSAccount *account;
- (void)_fetchChangesFromServer;	// IMP=0x00000000000bcab8
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bc831
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1;	// IMP=0x00000000000bc6da
- (void)deleteMessageWithEWSItemIdString:(id)arg1;	// IMP=0x00000000000bc52a
- (id)updateWithSyncState:(id)arg1 newMessages:(id)arg2 updatedMessages:(id)arg3 updatedLibraryIdStrings:(id)arg4 deletedMessages:(id)arg5 flagsByMessages:(id)arg6 isFinalBatch:(BOOL)arg7;	// IMP=0x00000000000bba3d
- (long long)_addMessages:(id)arg1 fromStore:(id)arg2 missedMessages:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 appendReason:(long long)arg7 userInitiated:(BOOL)arg8 error:(id *)arg9;	// IMP=0x00000000000bada9
- (BOOL)_copyMessagesByID:(id)arg1 toStore:(id)arg2 appendReason:(long long)arg3 userInitiated:(BOOL)arg4 settingFlags:(id)arg5 newMessages:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000ba92f
- (void)forceResync;	// IMP=0x00000000000ba8ff
- (long long)undoAppendOfLibraryIDs:(id)arg1;	// IMP=0x00000000000ba810
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000000b9e22
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000000000b9ad6
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3 options:(id)arg4;	// IMP=0x00000000000b9686
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;	// IMP=0x00000000000b9423
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x00000000000b8fa4
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000000000b8e35
- (void)startSynchronization;	// IMP=0x00000000000b8dfe
- (void)fetchSynchronously;	// IMP=0x00000000000b8dc7
- (void)openSynchronouslyIfWaitingToOpen;	// IMP=0x00000000000b8d8f
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;	// IMP=0x00000000000b8d14
- (BOOL)allowsDeleteInPlace;	// IMP=0x00000000000b8d0c
- (BOOL)allowsOverwrite;	// IMP=0x00000000000b8d04
- (BOOL)canRebuild;	// IMP=0x00000000000b8cbf
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;	// IMP=0x00000000000b8bff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
