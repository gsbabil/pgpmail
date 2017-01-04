//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessageDataSource-Protocol.h"
#import "IMAPAccount-Protocol.h"

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPLocalMessageAction, IMAPMessage, IMAPMessageDetails, IMAPServerInterface, NSArray, NSDictionary, NSError, NSIndexSet, NSMutableDictionary, NSNumber, NSSet, NSString;

@protocol IMAPMessageDataSource <MCMessageDataSource>
@property(readonly, copy, nonatomic) NSArray *duplicateRemoteIDs;
@property(nonatomic) unsigned int uidValidityStatus;
@property BOOL supportsModificationSequences;
@property(nonatomic) unsigned long long allegedHighestModificationSequence;
@property(nonatomic) unsigned int uidNextStatus;
@property(readonly, nonatomic) unsigned int maximumUID;
@property(readonly, nonatomic) IMAPDownloadCache *downloadCache;
@property(readonly, nonatomic) IMAPCommandPipeline *fetchPipeline;
@property(readonly, nonatomic) unsigned long long syncedMessageCount;
@property(readonly, nonatomic) unsigned long long totalCountOfMessages;
@property(readonly, nonatomic) unsigned int permanentFlags;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly, nonatomic) BOOL isAllMailMailbox;
@property(readonly, nonatomic) BOOL isInbox;
@property(readonly, copy) NSString *mailboxName;
@property(readonly, nonatomic) id <IMAPAccount> account;
- (void)fixMessagesAndResetIMAPMessages;
- (BOOL)mailboxHasInconsistencies;
- (void)imapActionReceivedError:(IMAPLocalMessageAction *)arg1 imapError:(NSError *)arg2 missedMessages:(NSArray *)arg3;
- (void)moveMessagesToRecoveredMail:(NSArray *)arg1;
- (void)addMessageDetails:(IMAPMessageDetails *)arg1;
- (void)setResultsForLabelChangeAction:(long long)arg1;
- (void)setResultsForFlagChangeAction:(long long)arg1 uids:(NSIndexSet *)arg2 flags:(long long)arg3 mask:(long long)arg4;
- (void)setResultsForAppendAction:(long long)arg1 newMessageDetails:(IMAPMessageDetails *)arg2;
- (void)createAppendActionForMessageFromFailedCopy:(id <IMAPPersistedMessage>)arg1 activityType:(NSNumber *)arg2 userInitiated:(BOOL)arg3;
- (void)setResultsForCopyAction:(long long)arg1 newMessageDetails:(NSArray *)arg2 lastBatch:(BOOL)arg3;
- (NSArray *)messagesWithRemoteIDs:(NSArray *)arg1;
- (NSArray *)messagesWithRowIDs:(NSArray *)arg1;
- (id <IMAPPersistedMessage>)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
- (void)setUidNextStatusIfNeeded:(unsigned int)arg1;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
- (NSDictionary *)newDictionaryForLocalFlags:(long long)arg1 serverFlags:(long long)arg2 existingDictionary:(NSDictionary *)arg3;
- (void)reflectGmailLabelsFromDictionary:(NSDictionary *)arg1 forMessages:(NSArray *)arg2;
- (void)reflectFlagChanges:(NSDictionary *)arg1 forMessages:(NSArray *)arg2 withUIDs:(NSIndexSet *)arg3;
- (void)undeleteMessagesWithDetails:(NSArray *)arg1;
- (BOOL)messageHasBeenDeleted:(id <IMAPPersistedMessage>)arg1;
- (void)reflectDeletedIMAPMessagesWithUIDs:(NSIndexSet *)arg1;
- (NSSet *)fetchAndCacheBodyDataForMessages:(NSSet *)arg1 withServerInterface:(IMAPServerInterface *)arg2;
- (void)reflectAddedIMAPMessages:(NSArray *)arg1 oldMessagesByNewMessage:(NSMutableDictionary *)arg2;
- (BOOL)hasValidCacheFileForMessage:(IMAPMessage *)arg1;
- (BOOL)hasCacheFileForMessage:(id <IMAPPersistedMessage>)arg1;
- (NSArray *)copyIncompleteMessages;
- (NSArray *)getDetailsForMessagesWithUIDs:(NSIndexSet *)arg1 waitForWrites:(BOOL)arg2;
- (unsigned long long)totalCountAndUnseenCount:(unsigned long long *)arg1 adjustedUnreadCount:(unsigned long long *)arg2;
@end

