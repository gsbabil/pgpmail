//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "NSPasteboardItemDataProvider.h"

@class NSMapTable, NSString;

@interface MessageDragHelper : NSObject <NSPasteboardItemDataProvider>
{
    NSMapTable *_messagesByPasteboardItem;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000b01b8
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001f72b6
- (void).cxx_destruct;	// IMP=0x00000001001f86b7
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;	// IMP=0x00000001001f7900
- (id)messagesTargetedByItems:(id)arg1;	// IMP=0x00000001001f770f
- (id)pasteboardWriterForMessages:(id)arg1;	// IMP=0x00000001001f74f0
- (void)dealloc;	// IMP=0x00000001001f7401
- (id)init;	// IMP=0x00000001001f737c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

