/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArrayController, NSDictionary, NSMutableDictionary, NSString, NSTableView;

@interface MTMMessageColumnController : NSObject
{
    NSMutableDictionary *_columnConfigurations;
    NSString *_activeConfiguration;
    NSDictionary *_activeAttributes;
    NSTableView *_messageTableView;
    NSArrayController *_messagesController;
}

+ (void)initialize;
@property(nonatomic) __weak NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) __weak NSTableView *messageTableView; // @synthesize messageTableView=_messageTableView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *activeAttributes;
- (void)_updateActiveAttributes;
- (id)_tableColumnForSortName:(id)arg1;
@property(retain, nonatomic) NSString *activeConfiguration;
- (void)_updateActiveConfiguration;
- (id)_configDictForConfiguration:(id)arg1;
- (void)_removeAllColumns;
- (id)_tableColumnWithIdentifier:(id)arg1 columnDict:(id)arg2;
- (id)init;

@end

