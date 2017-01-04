//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "EKViewWindowController.h"

@class CalUIDayViewGadgetController, EKEventViewController, NSArray, NSLayoutConstraint, NSStackView, NSString, NSView, SGRealtimeEvent, SuggestedEventDayViewAppearanceDelegate;

@interface SuggestedEventPopoverController : NSViewController <EKViewWindowController>
{
    BOOL _showingDetails;	// 100 = 0x64
    BOOL _isNewEvent;	// 101 = 0x65
    EKEventViewController *_eventViewController;	// 104 = 0x68
    CalUIDayViewGadgetController *_dayViewGadgedController;	// 112 = 0x70
    EKEventViewController *_detailedViewController;	// 120 = 0x78
    id <SuggestedEventPopoverControllerDelegate> _delegate;	// 128 = 0x80
    SuggestedEventDayViewAppearanceDelegate *_dayViewAppearanceDelegate;	// 136 = 0x88
    NSStackView *_summaryStackView;	// 144 = 0x90
    NSView *_divider;	// 152 = 0x98
    NSView *_detailsContainer;	// 160 = 0xa0
    NSView *_detailsDivider;	// 168 = 0xa8
    NSLayoutConstraint *_stackWidthInitialConstraint;	// 176 = 0xb0
    NSView *_eventClipView;	// 184 = 0xb8
    NSStackView *_detailsStackView;	// 192 = 0xc0
    NSView *_summaryNavigationView;	// 200 = 0xc8
    NSView *_detailNavigationView;	// 208 = 0xd0
    unsigned long long _currentEventIndex;	// 216 = 0xd8
    NSLayoutConstraint *_detailsWidthConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_eventHeaderHeightConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_stackWidthFixedConstraint;	// 240 = 0xf0
    NSArray *_realtimeEvents;	// 248 = 0xf8
}

+ (double)_detailsAnimationDuration;	// IMP=0x00000001002da842
+ (id)keyPathsForValuesAffectingHasMultipleEvents;	// IMP=0x00000001002d91cc
+ (id)keyPathsForValuesAffectingHasNextEvent;	// IMP=0x00000001002d9139
+ (id)keyPathsForValuesAffectingHasPreviousEvent;	// IMP=0x00000001002d90fd
+ (id)keyPathsForValuesAffectingPagingTitle;	// IMP=0x00000001002d8f85
@property(copy, nonatomic) NSArray *realtimeEvents; // @synthesize realtimeEvents=_realtimeEvents;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthFixedConstraint; // @synthesize stackWidthFixedConstraint=_stackWidthFixedConstraint;
@property(nonatomic) unsigned long long currentEventIndex; // @synthesize currentEventIndex=_currentEventIndex;
@property(nonatomic) BOOL isNewEvent; // @synthesize isNewEvent=_isNewEvent;
@property(nonatomic) BOOL showingDetails; // @synthesize showingDetails=_showingDetails;
@property(nonatomic) __weak NSView *detailNavigationView; // @synthesize detailNavigationView=_detailNavigationView;
@property(nonatomic) __weak NSView *summaryNavigationView; // @synthesize summaryNavigationView=_summaryNavigationView;
@property(nonatomic) __weak NSStackView *detailsStackView; // @synthesize detailsStackView=_detailsStackView;
@property(nonatomic) __weak NSView *eventClipView; // @synthesize eventClipView=_eventClipView;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthInitialConstraint; // @synthesize stackWidthInitialConstraint=_stackWidthInitialConstraint;
@property(nonatomic) __weak NSView *detailsDivider; // @synthesize detailsDivider=_detailsDivider;
@property(retain, nonatomic) NSView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
@property(nonatomic) __weak NSView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak NSStackView *summaryStackView; // @synthesize summaryStackView=_summaryStackView;
@property(nonatomic) __weak id <SuggestedEventPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001002daf02
@property(readonly, nonatomic) NSLayoutConstraint *eventHeaderHeightConstraint; // @synthesize eventHeaderHeightConstraint=_eventHeaderHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsWidthConstraint; // @synthesize detailsWidthConstraint=_detailsWidthConstraint;
- (void)didCommitItem;	// IMP=0x00000001002dab12
- (void)didSaveItem;	// IMP=0x00000001002daad3
- (void)_cleanupEventViewController;	// IMP=0x00000001002daa18
- (void)viewDidDisappear;	// IMP=0x00000001002da915
- (void)_updateDayViewGadgetEvent;	// IMP=0x00000001002da686
- (void)viewWillAppear;	// IMP=0x00000001002da674
- (void)_collapseDetails;	// IMP=0x00000001002d9fd8
- (void)_expandDetails;	// IMP=0x00000001002d9760
- (void)toggleShowDetails:(id)arg1;	// IMP=0x00000001002d970b
- (void)ignoreEvent:(id)arg1;	// IMP=0x00000001002d968c
- (void)commitEvent:(id)arg1;	// IMP=0x00000001002d945d
- (void)dismissController:(id)arg1;	// IMP=0x00000001002d9411
- (void)selectNextEvent:(id)arg1;	// IMP=0x00000001002d9317
- (void)selectPreviousEvent:(id)arg1;	// IMP=0x00000001002d923a
@property(readonly, nonatomic) BOOL hasMultipleEvents;
@property(readonly, nonatomic) BOOL hasNextEvent;
@property(readonly, nonatomic) BOOL hasPreviousEvent;
@property(readonly, nonatomic) NSString *pagingTitle;
- (void)viewDidLoad;	// IMP=0x00000001002d8a10
- (void)_updateCurrentEventIndex;	// IMP=0x00000001002d8970
@property(retain) SGRealtimeEvent *representedObject;
@property(readonly, nonatomic) SuggestedEventDayViewAppearanceDelegate *dayViewAppearanceDelegate; // @synthesize dayViewAppearanceDelegate=_dayViewAppearanceDelegate;
@property(readonly, nonatomic) CalUIDayViewGadgetController *dayViewGadgedController; // @synthesize dayViewGadgedController=_dayViewGadgedController;
- (id)_detailedViewControllerSettings;	// IMP=0x00000001002d8434
@property(readonly, nonatomic) EKEventViewController *detailedViewController; // @synthesize detailedViewController=_detailedViewController;
- (id)_eventViewControllerSettings;	// IMP=0x00000001002d82bd
@property(readonly, nonatomic) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

