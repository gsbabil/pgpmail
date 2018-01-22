//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCMessageDataSource-Protocol.h"

@class MCActivityMonitor, MCInvocationQueue, MFMailAccount, MFMailbox, NSArray, NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, NSTimer;

@interface MFMessageStore : NSObject <MCMessageDataSource>
{
    id _retainCountLock;
    BOOL _haveOpenLockFile;
    BOOL _isWritingChangesToDisk;
    BOOL _isTryingToClose;
    id _cacheLock;
    NSCache *_headerCache;
    NSCache *_bodyCache;
    // Error parsing type: Ai, name: _storeState
    NSTimer *_timer;
    MFMailbox *_mailbox;
    NSMutableArray *_allMessages;
    MFMailAccount *_account;
    NSMutableSet *_uniqueStrings;
    BOOL _isReadOnly;
    BOOL _compactOnClose;
    BOOL _hasUnsavedChangesToMessageData;
    BOOL _forceInvalidation;
    MCActivityMonitor *_openMonitor;
    NSOperationQueue *_deleteQueue;
    MCInvocationQueue *_openAndCloseMailboxQueue;
}

+ (void)_autosaveMessageStore:(id)arg1;
+ (long long)copyMessages:(id)arg1 toMailbox:(id)arg2 shouldDelete:(BOOL)arg3;
+ (id)succesfulMessagesFromMessages:(id)arg1 missedMessages:(id)arg2;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1 notIndexable:(BOOL)arg2;
+ (void)removeStoreFromCache:(id)arg1;
+ (void)registerAvailableStore:(id)arg1 forMailbox:(id)arg2;
+ (id)currentlyAvailableStoresForAccount:(id)arg1;
+ (id)currentlyAvailableStoreForMailbox:(id)arg1;
+ (id)_copyRawAvailableStoreForMailbox:(id)arg1 wantsCreate:(BOOL)arg2 shouldCreate:(char *)arg3;
+ (id)_storeCreationMarker;
+ (id)descriptionOfOpenStores;
+ (unsigned long long)numberOfCurrentlyOpenStores;
+ (void)initialize;
@property BOOL forceInvalidation; // @synthesize forceInvalidation=_forceInvalidation;
@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) MCInvocationQueue *openAndCloseMailboxQueue; // @synthesize openAndCloseMailboxQueue=_openAndCloseMailboxQueue;
@property(readonly, nonatomic) NSOperationQueue *deleteQueue; // @synthesize deleteQueue=_deleteQueue;
@property(retain) MCActivityMonitor *openMonitor; // @synthesize openMonitor=_openMonitor;
@property BOOL hasUnsavedChangesToMessageData; // @synthesize hasUnsavedChangesToMessageData=_hasUnsavedChangesToMessageData;
//- (void).cxx_destruct;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (BOOL)_updateFlagColor:(BOOL)arg1 forMessage:(id)arg2;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)updateMessages:(id)arg1 updateColor:(BOOL)arg2 updateNumberOfAttachments:(BOOL)arg3;
- (void)updateMessageColorsSynchronouslyForMessages:(id)arg1 postingNotification:(BOOL)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;
- (void)_invalidateObjectCachesForKey:(id)arg1;
- (void)_flushAllMessageData;
- (void)flushAllCaches;
- (void)_removeLockFile;
- (BOOL)_acquireLockFile;
@property(readonly, copy, nonatomic) NSString *lockFilePath;
- (void)_invalidateInBackground;
- (void)_invalidate;
@property(readonly) int storeState;
- (BOOL)setStoreState:(int)arg1 fromState:(int)arg2;
- (BOOL)_isReadyToBeInvalidated;
@property(readonly, nonatomic) BOOL shouldCallCompactWhenClosing;
- (void)_setNeedsAutosave;
- (void)_cancelAutosave;
- (BOOL)shouldSendUserNotificationForMessage:(id)arg1;
- (void)invalidateMessages:(id)arg1;
- (void)invalidateMessage:(id)arg1;
@property(readonly) BOOL isSortedAscending;
@property(readonly, copy, nonatomic) NSString *sortOrder;
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;
- (void)invalidateSyncEngine;
- (void)fetchSynchronouslyForKnownChanges;
@property(readonly, copy, nonatomic) NSString *status;
//- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setLocalFlagsForMessages:(id)arg1;
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setPrimitiveFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)snippetsForMessages:(id)arg1;
@property(readonly, nonatomic) BOOL supportsSnippets;
- (id)colorForMessage:(id)arg1;
- (void)addUniquedStrings:(id)arg1;
- (void)setUniquedStrings:(id)arg1;
- (id)uniquedString:(id)arg1;
- (void)updateBodyFlagsForMessage:(id)arg1 topLevelMimePart:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
- (unsigned long long)_numberOfMessagesToCache;
- (id)messageForMessageID:(id)arg1;
- (id)messagesForDocumentID:(id)arg1;
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;
- (long long)updateMessages:(id)arg1 withLibraryIDs:(id)arg2 newMessages:(id)arg3;
- (long long)undoAppendOfLibraryIDs:(id)arg1;
@property(readonly, nonatomic) BOOL allowsDeleteInPlace;
@property(readonly, nonatomic) BOOL allowsOverwrite;
@property(readonly, nonatomic) BOOL allowsAppend;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)async_deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)doCompact;
@property(readonly, nonatomic) BOOL canCompact;
- (void)rebuildTableOfContentsAsynchronously;
@property(readonly) BOOL canRebuild;
- (id)routeMessages:(id)arg1 isUserAction:(BOOL)arg2 fetchingBodies:(BOOL)arg3 messagesNeedingBodies:(id)arg4;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (id)_defaultRouterDestination;
- (void)removeMessageFromAllMessages:(id)arg1;
- (void)removeAllMessagesAtIndexes:(id)arg1;
- (void)addMessagesToAllMessages:(id)arg1;
- (unsigned long long)indexOfMessageInAllMessages:(id)arg1;
- (void)setAllMessages:(id)arg1;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)mutableCopyOfAllMessages;
- (id)copyOfAllMessages;
@property(readonly) unsigned long long totalCount;
- (void)messagesWereUpdated:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)structureDidChange;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
@property(readonly) NSDate *lastSyncDate;
@property BOOL isFirstTimeSync;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) const char *displayNameForLogging;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL isOpened;
@property(readonly, copy, nonatomic) NSArray *allMailboxRepresentations;
- (void)createDummyMailboxIfNecessary;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFMailAccount *account;
- (void)invalidateSavingChanges:(BOOL)arg1;
- (void)saveChanges;
- (void)cancelOpen;
- (void)didOpenWithMessages:(id)arg1;
- (void)willOpen;
- (void)cleanupSynchronously;
- (void)_cleanupSynchronouslyIfCancelOpenPosted;
- (void)cleanupAsynchronously;
- (void)updateMetadataAsynchronously;
- (void)openSynchronously;
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;
- (void)openAsynchronously;
- (void)resetAllMessages;
- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_messageStoreCommonInit;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithAccount:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (id)init;
- (id)willDeallocPerformingInStoreCacheLock:(char *)arg1;
- (void)queueSaveChangesInvocation;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)objectSpecifierForMessage:(id)arg1;
- (id)objectSpecifier;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

