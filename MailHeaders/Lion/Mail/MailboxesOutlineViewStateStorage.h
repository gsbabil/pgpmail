/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSArray, NSConditionLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface MailboxesOutlineViewStateStorage : NSObject
{
    NSConditionLock *_shouldShowVariablesLock;
    unsigned long long _shouldShowVariablesToUpdate;
    unsigned long long _shouldShowVariablesToReset;
    BOOL _shouldShowOutbox;
    BOOL _shouldShowDrafts;
    BOOL _shouldShowTrash;
    BOOL _shouldShowJunk;
    BOOL _shouldShowNotes;
    BOOL _shouldShowFlags;
    id _firstUpdateLock;
    BOOL _firstUpdate;
    id _isListeningForVariablesLock;
    BOOL _isListeningForDocumentEditorNotifications;
    BOOL _isListeningForMessagesAdded;
    BOOL _isListeningForFlagUpdates;
    id _sectionItemsLock;
    NSArray *_sectionItems;
    NSArray *_visibleSectionItems;
    NSArray *_visibleMailboxes;
    NSArray *_visibleReminders;
    id _defaultSectionItemsLock;
    NSSet *_observedTaskNames;
    id _activityMonitorMailboxMapsLock;
    NSMutableDictionary *_mailboxesPerActivityMonitor;
    NSMutableDictionary *_activityMonitorsPerMailbox;
    NSMutableDictionary *_finishedActivityMonitorCountPerMailbox;
    NSConditionLock *_changedMailboxesLock;
    NSMutableSet *_changedMailboxes;
    NSArray *_draggedMailboxes;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (void)_triggerShouldShowVariablesUpdate;
- (void)_setShouldShowVariablesNeedUpdateWithUpdateMask:(unsigned long long)arg1 resetMask:(unsigned long long)arg2;
- (void)_setNeedsToUpdateShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_setNeedsToResetShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_updateShouldShowVariables;
- (void)_updateIsListeningForVariables;
- (BOOL)_draftsHasMessageWithNoWindow;
- (id)_sectionItemsFromDefaultSectionItems:(id)arg1;
- (void)_readSectionItemsFromDefaults;
- (void)_writeSectionItems:(id)arg1 toDefaultsWithKey:(id)arg2;
- (void)_writeSectionItemsToDefaults;
- (void)_readVisibleFlagsMailboxesFromDefaults;
- (void)_writeVisibleFlagsMailboxesToDefaults;
- (void)_updateSectionItems;
- (void)moveSectionItem:(id)arg1 beforeItem:(id)arg2;
- (void)_messagesWereAddedToMailboxes:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_deliveryFailureHappened:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (void)_editorClosed:(id)arg1;
- (void)_editorUserSaved:(id)arg1;
- (void)_mailboxListingDidChange:(id)arg1;
- (void)_allViewersDidClose:(id)arg1;
@property BOOL shouldShowOutbox;
@property BOOL shouldShowDrafts;
@property BOOL shouldShowTrash;
@property BOOL shouldShowJunk;
@property BOOL shouldShowNotes;
@property BOOL shouldShowFlags;
@property(readonly) NSArray *sectionItems;
@property(readonly) NSArray *visibleSectionItems;
@property(readonly) NSArray *visibleMailboxes;
@property(readonly) NSArray *visibleReminders;
- (void)_setShouldShowVariable:(char *)arg1 withMask:(unsigned long long)arg2 to:(BOOL)arg3;
- (id)_copyKeyForObject:(id)arg1;
- (void)_monitoredActivityChanged:(id)arg1;
- (id)_copyMailboxesForActivityMonitor:(id)arg1;
- (BOOL)_addActivityMonitor:(id)arg1 toMailbox:(id)arg2;
- (BOOL)_removeActivityMonitor:(id)arg1 fromMailbox:(id)arg2;
- (void)_triggerChangedMailboxesNotification;
- (void)_setNeedsToNotifyChangedMailboxes:(id)arg1;
- (void)_notifyChangedMailboxes;
- (void)_postChangedMailboxesNotification;
- (id)copyActivityMonitorsForMailboxes:(id)arg1 finishedCount:(unsigned long long *)arg2;
- (void)_accountInitializedMailboxList:(id)arg1;
- (BOOL)draftsExist;
- (BOOL)notesExist;
- (BOOL)flagsExist;
@property(retain) NSArray *draggedMailboxes; // @synthesize draggedMailboxes=_draggedMailboxes;

@end

