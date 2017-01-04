//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "AccountStatusDataSourceDelegate.h"
#import "NSTableViewDataSource.h"

@class AccountStatusDataSource, MFSMTPAccount, NSArray, NSArrayController, NSMutableDictionary, NSOperationQueue, NSPopUpButton, NSSegmentedControl, NSString, NSTableView;

@interface SMTPSettings : NSWindowController <AccountStatusDataSourceDelegate, NSTableViewDataSource>
{
    NSMutableDictionary *_cachedAccountEmployment;	// 80 = 0x50
    NSMutableDictionary *_cachedAccountEmploymentStrings;	// 88 = 0x58
    NSArray *_deliveryAccounts;	// 96 = 0x60
    NSArrayController *_deliveryAccountsController;	// 104 = 0x68
    NSTableView *_accountTable;	// 112 = 0x70
    NSSegmentedControl *_addRemoveAccountControl;	// 120 = 0x78
    NSPopUpButton *_tlsCertificatePopUp;	// 128 = 0x80
    NSOperationQueue *_keychainQueue;	// 136 = 0x88
    MFSMTPAccount *_selectedDeliveryAccount;	// 144 = 0x90
    AccountStatusDataSource *_deliveryASDS;	// 152 = 0x98
}

+ (void)initialize;	// IMP=0x00000001002a5171
@property(readonly, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(retain, nonatomic) MFSMTPAccount *selectedDeliveryAccount; // @synthesize selectedDeliveryAccount=_selectedDeliveryAccount;
@property(readonly, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatePopUp; // @synthesize tlsCertificatePopUp=_tlsCertificatePopUp;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(nonatomic) __weak NSTableView *accountTable; // @synthesize accountTable=_accountTable;
@property(retain, nonatomic) NSArrayController *deliveryAccountsController; // @synthesize deliveryAccountsController=_deliveryAccountsController;
@property(copy, nonatomic) NSArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
- (void).cxx_destruct;	// IMP=0x00000001002a7656
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x00000001002a73fb
- (void)_restoreMailAccountDefaultAccounts;	// IMP=0x00000001002a6fd2
- (void)_recacheAccountEmployment;	// IMP=0x00000001002a6cce
- (void)_removeInvalidAccounts;	// IMP=0x00000001002a6bcc
- (id)_defaultColumnSortDescriptor;	// IMP=0x00000001002a6b27
- (void)_updateTLSCertificateForOldAccount:(id)arg1 newAccount:(id)arg2;	// IMP=0x00000001002a6a0f
- (void)dismissPanel:(id)arg1;	// IMP=0x00000001002a67a0
- (void)addRemoveAccountClicked:(id)arg1;	// IMP=0x00000001002a653c
- (void)runSheetRelativeToWindow:(id)arg1 selectedAccount:(id)arg2;	// IMP=0x00000001002a5e80
- (void)_updateEnableRemoveAccountControl;	// IMP=0x00000001002a5d8a
- (void)_updateEnableAddAccountControl;	// IMP=0x00000001002a5c94
- (void)_selectionDidChange;	// IMP=0x00000001002a5bb6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002a5ab4
- (void)windowDidLoad;	// IMP=0x00000001002a561e
- (id)windowNibName;	// IMP=0x00000001002a55ff
- (void)dealloc;	// IMP=0x00000001002a54fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002a542c
- (id)initWithWindow:(id)arg1;	// IMP=0x00000001002a535d
- (id)init;	// IMP=0x00000001002a51ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

