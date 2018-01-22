//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUICollectionCellView.h"

//#import "NSAccessibilityGroup-Protocol.h"

@class CALayer, MessageWebDocumentView, NSScrollView, NSString;

@interface MessageView : MUICollectionCellView <NSAccessibilityGroup>
{
    BOOL _performingRedundantTextExpansion;
    NSScrollView *_bodyScrollView;
    MessageWebDocumentView *_webDocumentView;
    CALayer *_borderLayer;
    CALayer *_shadowLayer;
}

@property(nonatomic) __weak CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) __weak CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSScrollView *bodyScrollView; // @synthesize bodyScrollView=_bodyScrollView;
@property(nonatomic) BOOL performingRedundantTextExpansion; // @synthesize performingRedundantTextExpansion=_performingRedundantTextExpansion;
//- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2;
- (BOOL)_isSelected;
- (id)_borderColor;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)_createShadowLayer;
- (id)_createBorderLayer;
- (id)makeBackingLayer;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)keyDown:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (double)_redundantExpansionDurationWithOldHeight:(double)arg1;
- (void)performRedundantTextExpansion:(id)arg1;
- (void)setFocused:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (void)setCellIndex:(unsigned long long)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

