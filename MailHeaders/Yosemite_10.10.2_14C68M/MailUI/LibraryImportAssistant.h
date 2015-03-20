/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "Assistant.h"

#import "MCActivityTarget.h"

@class MCActivityMonitor, NSButton, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView;

@interface LibraryImportAssistant : Assistant <MCActivityTarget>
{
    BOOL _importWasSuccessful;
    NSView *_introView;
    NSView *_patienceView;
    NSView *_doneView;
    NSView *_errorView;
    NSView *_recoveryIntroView;
    NSTextField *_mailboxStatusField;
    NSTextField *_messageStatusField;
    NSTextField *_timeRemainingField;
    NSProgressIndicator *_progressBar;
    NSButton *_showNewFeaturesButton;
    NSTextField *_theNewFeaturesTextField;
    MCActivityMonitor *_activityMonitor;
    NSTimer *_updateTimer;
    long long _state;
}

@property(nonatomic) BOOL importWasSuccessful; // @synthesize importWasSuccessful=_importWasSuccessful;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) __weak MCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(nonatomic) __weak NSTextField *theNewFeaturesTextField; // @synthesize theNewFeaturesTextField=_theNewFeaturesTextField;
@property(nonatomic) __weak NSButton *showNewFeaturesButton; // @synthesize showNewFeaturesButton=_showNewFeaturesButton;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak NSTextField *timeRemainingField; // @synthesize timeRemainingField=_timeRemainingField;
@property(nonatomic) __weak NSTextField *messageStatusField; // @synthesize messageStatusField=_messageStatusField;
@property(nonatomic) __weak NSTextField *mailboxStatusField; // @synthesize mailboxStatusField=_mailboxStatusField;
@property(retain, nonatomic) NSView *recoveryIntroView; // @synthesize recoveryIntroView=_recoveryIntroView;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSView *doneView; // @synthesize doneView=_doneView;
@property(retain, nonatomic) NSView *patienceView; // @synthesize patienceView=_patienceView;
@property(retain, nonatomic) NSView *introView; // @synthesize introView=_introView;
- (void).cxx_destruct;
- (void)showNewFeatures:(id)arg1;
- (void)synchronouslyDoTheImport;
- (id)_formattedTimeForSeconds:(double)arg1;
- (double)_runningAverageWithNewValue:(double)arg1;
- (void)_updateProgress:(id)arg1;
- (id)windowTitle;
- (void)goForward;
- (BOOL)_checkAccountDirectoryPermissions;
- (void)stop;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

