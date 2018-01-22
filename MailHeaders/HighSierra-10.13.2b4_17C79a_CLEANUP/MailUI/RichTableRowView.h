//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSTableRowView.h"

@class NSTableView;

@interface RichTableRowView : NSTableRowView
{
    long long _rowStyle;
    BOOL _shouldAnimateContentChanges;
    NSTableView *_tableView;
}

@property(nonatomic) BOOL shouldAnimateContentChanges; // @synthesize shouldAnimateContentChanges=_shouldAnimateContentChanges;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
//- (void).cxx_destruct;
@property(nonatomic) long long rowStyle;
- (void)setEmphasized:(BOOL)arg1;
- (void)setNextRowSelected:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)_backgroundColorForMargin;
- (void)_drawBasicSeparatorInRect:(struct CGRect)arg1 withMargin:(BOOL)arg2;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (BOOL)_isChildOfThread;
- (BOOL)_isLastThreadChild;
- (BOOL)_isExpandedThreadParent;
- (id)_rowBelow;
- (id)_rowAbove;
- (id)_threadBackgroundColor;
- (id)_separatorColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (void)_richTableRowViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

