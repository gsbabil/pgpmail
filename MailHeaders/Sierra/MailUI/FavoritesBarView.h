//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SlidingViewsBar.h"

#import "ClippedItemsIndicatorDelegate.h"

@class MailBarContainerView, MessageViewer, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface FavoritesBarView : SlidingViewsBar <ClippedItemsIndicatorDelegate>
{
    NSMutableArray *_clippedMenuItems;	// 152 = 0x98
    NSMutableDictionary *_favoriteButtonsByMailboxes;	// 160 = 0xa0
    NSMutableArray *_mailboxProperties;	// 168 = 0xa8
    BOOL _isForSearch;	// 176 = 0xb0
    BOOL _windowDidClose;	// 177 = 0xb1
    BOOL _shouldCheckForDuplicates;	// 178 = 0xb2
    id <MFUIMailbox> _selectedMailbox;	// 184 = 0xb8
    MessageViewer *_messageViewer;	// 192 = 0xc0
    MailBarContainerView *_mailBarContainerView;	// 200 = 0xc8
    NSSet *_duplicateMailboxesSet;	// 208 = 0xd0
    double _lastWidth;	// 216 = 0xd8
}

+ (id)mailboxForFavoritesBarPosition:(unsigned long long)arg1;	// IMP=0x000000010009536f
+ (id)_favoriteMailboxPropertiesFromPreferences;	// IMP=0x0000000100010c73
+ (id)_mailboxForMailboxProperties:(id)arg1;	// IMP=0x0000000100011d0a
+ (id)_mailboxPropertiesFromMailbox:(id)arg1;	// IMP=0x000000010017a2df
+ (double)buttonBottomOffset;	// IMP=0x000000010001461e
+ (id)_menuItemForMailboxProperties:(id)arg1;	// IMP=0x0000000100178502
@property(nonatomic) BOOL shouldCheckForDuplicates; // @synthesize shouldCheckForDuplicates=_shouldCheckForDuplicates;
@property(nonatomic) BOOL windowDidClose; // @synthesize windowDidClose=_windowDidClose;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(copy, nonatomic) NSSet *duplicateMailboxesSet; // @synthesize duplicateMailboxesSet=_duplicateMailboxesSet;
@property(nonatomic) __weak MailBarContainerView *mailBarContainerView; // @synthesize mailBarContainerView=_mailBarContainerView;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(retain, nonatomic) id <MFUIMailbox> selectedMailbox; // @synthesize selectedMailbox=_selectedMailbox;
- (void).cxx_destruct;	// IMP=0x000000010017b1df
- (void)flashButtonAtPosition:(unsigned long long)arg1;	// IMP=0x000000010017af97
- (struct CGPoint)centerOfButtonForFavoritesBarPosition:(unsigned long long)arg1;	// IMP=0x000000010017ac96
- (id)_mailboxPropertiesForFavoritesBarPosition:(unsigned long long)arg1;	// IMP=0x0000000100095864
- (void)setFavoritesBarIsForSearch:(BOOL)arg1;	// IMP=0x0000000100097a00
- (BOOL)_havePreviouslyAddedMailbox:(id)arg1;	// IMP=0x000000010004cf56
- (void)_setFavoriteMailboxAddedDefaultForMailbox:(id)arg1;	// IMP=0x000000010017ac05
- (void)_getDefaultSetOfMailboxes;	// IMP=0x000000010017a875
- (void)_finishedGettingDefaultMailboxes;	// IMP=0x000000010017a51d
- (void)_writeFavoriteMailboxPropertiesToPreferences;	// IMP=0x000000010009cbdd
- (void)saveFavoritesBar;	// IMP=0x000000010009cb79
- (void)_upgradeFavoritesBar;	// IMP=0x0000000100011080
- (BOOL)_favoritesPreferenceExists;	// IMP=0x00000001000100b8
- (id)_primaryMailboxes;	// IMP=0x0000000100035a79
- (id)_activeMailboxes;	// IMP=0x000000010009833e
- (void)_insertMailboxPropertiesFromMailbox:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010017a482
- (void)_addMailboxPropertiesFromMailbox:(id)arg1;	// IMP=0x000000010017a3f2
- (void)updateButtonSelectionWithPreferredProperties:(id)arg1;	// IMP=0x0000000100013374
- (void)_VIPSendersChanged:(id)arg1;	// IMP=0x000000010004cd02
- (void)clearButtons;	// IMP=0x000000010017a100
- (BOOL)isMailboxInFavoritesBar:(id)arg1;	// IMP=0x0000000100098289
- (double)_rightEdgeOfFavoritesViewSubviews;	// IMP=0x0000000100179f3d
- (void)_resetClippedItems;	// IMP=0x0000000100014404
- (void)_refreshButtonsSoon;	// IMP=0x0000000100179ee6
@property(readonly, nonatomic) double minButtonX;
- (void)layOutButtons;	// IMP=0x0000000100013a8e
- (void)_favoritesViewFrameChanged:(id)arg1;	// IMP=0x0000000100014c9f
- (void)_mailboxSelectionChanged:(id)arg1;	// IMP=0x0000000100033de4
- (void)_favoritesBarDidChanged:(id)arg1;	// IMP=0x000000010009ce5c
- (void)_mailAccountWillBeDeleted:(id)arg1;	// IMP=0x0000000100179cb4
- (void)_mailboxesChanged:(id)arg1;	// IMP=0x0000000100036332
- (void)_mailboxListingDidChange:(id)arg1;	// IMP=0x00000001000356ba
- (void)_registerForNotifications;	// IMP=0x00000001000147b1
- (id)_selectedButton;	// IMP=0x0000000100033f6d
- (void)deleteMailbox:(id)arg1;	// IMP=0x0000000100179a2f
- (void)deleteDraggedMailbox:(id)arg1;	// IMP=0x000000010017974f
- (id)_buttonAtMouseLocation:(struct CGPoint)arg1;	// IMP=0x0000000100179678
- (BOOL)addDroppedMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100179510
- (void)favoriteButtonClicked:(id)arg1;	// IMP=0x000000010009dda8
- (id)_addButtonForMailboxProperties:(id)arg1;	// IMP=0x0000000100011b58
- (void)windowWillClose;	// IMP=0x0000000100179440
- (double)widthOfDraggingInfo:(id)arg1;	// IMP=0x00000001001790bb
- (unsigned long long)updateDropTarget:(id)arg1;	// IMP=0x0000000100178b3b
- (void)reorderedSlidingView:(id)arg1;	// IMP=0x0000000100178a72
- (void)refreshButtons;	// IMP=0x000000010001131e
- (void)_refreshMailboxProperties;	// IMP=0x00000001000363a4
- (double)_paddingForSidebar;	// IMP=0x000000010001184f
- (double)paddingBetweenButtons;	// IMP=0x00000001000145fd
- (double)maxButtonXWithoutClipIndicator;	// IMP=0x00000001000144a0
- (double)maxButtonXWithClipIndicator;	// IMP=0x00000001000144f8
- (double)minSlidingViewX;	// IMP=0x000000010017893c
- (unsigned long long)lastNonSlidingViewIndex;	// IMP=0x000000010017892c
- (void)finishedSlidingAnimation:(id)arg1;	// IMP=0x0000000100178918
- (id)menuItemsForClippedItemsIndicator:(id)arg1;	// IMP=0x0000000100178365
- (void)_favoritesBarViewCommonInit;	// IMP=0x000000010000d2cd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100178320
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000cf04
- (void)draggingExited:(id)arg1;	// IMP=0x00000001001781be
- (unsigned long long)draggingUpdated:(id)arg1;	// IMP=0x00000001001780d6
- (unsigned long long)draggingEntered:(id)arg1;	// IMP=0x0000000100177efd
- (BOOL)performDragOperation:(id)arg1;	// IMP=0x0000000100177ca8
- (void)awakeFromNib;	// IMP=0x000000010000d7f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

