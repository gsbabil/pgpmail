//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class FlaggedStatusToolbarItem;

@protocol FlaggedStatusToolbarItemDelegate <NSObject>

@optional
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (BOOL)validateFlaggedStatusToolbarItem:(FlaggedStatusToolbarItem *)arg1;
@end

