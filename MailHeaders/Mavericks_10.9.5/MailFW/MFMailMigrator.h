/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class MFLibraryUpgrader, NSFileManager, NSMutableDictionary, NSMutableSet, NSString;

@interface MFMailMigrator : NSObject <NSFileManagerDelegate>
{
    NSString *_supportDirectory;
    NSString *_destinationSupportDirectory;
    NSString *_tempSupportDirectoryV2;
    NSString *_supportDirectoryV2;
    NSString *_mailDataDirectoryV2;
    NSString *_migrationSuccessfulFilepath;
    NSString *_v1ItemsToMigrateFilepath;
    NSString *_logDirectory;
    NSMutableDictionary *_lostItems;
    NSString *_lostItemsFilepath;
    NSString *_lostAndFoundDirectory;
    BOOL _isComplex;
    BOOL _isUsingAlternateDestination;
    MFLibraryUpgrader *_progressDelegate;
    unsigned long long _progressChunkSize;
    unsigned long long _messagesProgressCount;
    unsigned long long _v1CleanupCount;
    BOOL _isTrackingCleanupProgress;
    unsigned long long _emlxCountPreMigration;
    unsigned long long _emlxCountPostMigration;
    unsigned long long _lostAndFoundEmlxCount;
    unsigned long long _messageCountPreMigration;
    NSMutableSet *_nonFatalAttachmentErrorLibraryIDs;
    NSFileManager *_fileManager;
}

+ (BOOL)path:(id)arg1 hasPrefixInArray:(id)arg2;
+ (BOOL)isMigrating;
+ (BOOL)migrateFromV1ToV2Layout:(id)arg1 isComplex:(BOOL)arg2 progressDelegate:(id)arg3;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (BOOL)_copyWithCompressionFromPath:(id)arg1 toPath:(id)arg2;
- (void)_savePlistFiles:(id)arg1 destinationPath:(id)arg2;
- (void)_saveSubpathsWithAttributesOfDirectoryAtPath:(id)arg1 destinationPath:(id)arg2 symbolicLinks:(id)arg3 mboxCacheFiles:(id)arg4 infoPlistFiles:(id)arg5 outEmlxCount:(unsigned long long *)arg6 outLostFoundEmlxCount:(unsigned long long *)arg7 shouldPersist:(BOOL)arg8;
- (void)_captureDiagnosticsForMigrationOutEmlxCount:(unsigned long long *)arg1 outLostFoundEmlxCount:(unsigned long long *)arg2;
- (BOOL)_migrateFromV1ToV2Layout;
- (BOOL)_shouldIgnoreFilename:(id)arg1;
- (void)_migrateMailboxesFromDirectory:(id)arg1 toDirectory:(id)arg2 baseDirectory:(id)arg3 usingUUID:(id)arg4 mailboxCacheDictionary:(id)arg5 accountPrefix:(id)arg6;
- (id)_accountPrefixes;
- (id)_mailboxSuffixes;
- (id)_lostItemsForBaseDirectory:(id)arg1;
- (BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)_handleAttachmentsMigrationResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3 libraryID:(long long)arg4;
- (id)_stringByAppendingV2MailboxSuffix:(id)arg1;
- (BOOL)_directoryExistsAtPath:(id)arg1;
- (BOOL)_string:(id)arg1 hasSuffixInSet:(id)arg2;
- (BOOL)_string:(id)arg1 hasPrefixInSet:(id)arg2;
- (id)_prefixOfString:(id)arg1 fromSet:(id)arg2;
- (void)_messageTraceLibraryData;
- (unsigned long long)_numberOfMessagesInDB;
- (unsigned long long)_numberOfEmlxFiles;
- (unsigned long long)_numberOfEmlxFilesInLostAndFound;
- (void)dealloc;
- (id)initWithDestinationPath:(id)arg1 isComplex:(BOOL)arg2 progressDelegate:(id)arg3;

@end

