/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSTabViewDelegate.h"
#import "NSWindowDelegate.h"

@class AccountSummary, IMAPMailboxes, MFMailAccount, NSMutableSet, NSPopUpButton, NSTabView, NSTabViewItem, NSView, NSWindow, OofPanelController, Quota, SpecialMailboxes;

@interface AccountInfo : NSObject <NSTabViewDelegate, NSWindowDelegate>
{
    NSTabView *_tabView;
    NSPopUpButton *_accountPopup;
    NSTabViewItem *_mailboxListTab;
    NSTabViewItem *_outOfOfficeTab;
    AccountSummary *_summary;
    SpecialMailboxes *_specialMailboxes;
    NSView *_specialMailboxesView;
    Quota *_quota;
    OofPanelController *_oofController;
    IMAPMailboxes *_mailboxes;
    MFMailAccount *_account;
    NSMutableSet *_tabViewItemsThatHaveBeenSetup;
    struct CGRect _oldFrame;
    struct CGRect _newFrame;
    NSWindow *_window;
    NSView *_topView;
}

+ (void)showForAccount:(id)arg1 withTab:(id)arg2;
@property(retain, nonatomic) NSView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void)windowWillClose:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)_handleOofError:(id)arg1;
- (void)accountPopupChanged:(id)arg1;
- (void)_showWithTab:(id)arg1;
- (void)_specialMailboxesDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)_commitSpecialMailboxesChanges;
- (void)_setupTabViewItem:(id)arg1 oldTabViewItem:(id)arg2;
- (id)_getOwnerFromIdentifier:(id)arg1;
- (void)_setAccount:(id)arg1 setupSelectedTab:(BOOL)arg2;
- (id)_selectedAccount;
- (void)_configureAccountPopupSelectingAccount:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMailAccount:(id)arg1;

@end

