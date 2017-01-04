//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSMenu, NSMenuItem;

@interface ClassicMenuHeaderController : NSObject
{
    NSMenu *_tableHeaderMenu;	// 8 = 0x8
    NSMenu *_sortByMenu;	// 16 = 0x10
    NSMenuItem *_dateReceivedMenuItem;	// 24 = 0x18
    NSMenuItem *_dateSentMenuItem;	// 32 = 0x20
}

@property(nonatomic) __weak NSMenuItem *dateSentMenuItem; // @synthesize dateSentMenuItem=_dateSentMenuItem;
@property(nonatomic) __weak NSMenuItem *dateReceivedMenuItem; // @synthesize dateReceivedMenuItem=_dateReceivedMenuItem;
@property(nonatomic) __weak NSMenu *sortByMenu; // @synthesize sortByMenu=_sortByMenu;
@property(retain, nonatomic) NSMenu *tableHeaderMenu; // @synthesize tableHeaderMenu=_tableHeaderMenu;
- (void).cxx_destruct;	// IMP=0x00000001000ef78a
- (void)updateMenuWithSelectedMailboxes:(id)arg1;	// IMP=0x00000001000ef36b
- (id)init;	// IMP=0x00000001000ef2e3

@end

