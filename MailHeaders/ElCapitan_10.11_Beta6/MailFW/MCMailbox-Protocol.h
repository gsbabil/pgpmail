/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol MCMailbox <NSCopying, NSObject>
@property(readonly, nonatomic) BOOL useTotalInsteadOfUnseen;
@property BOOL useStatusCounts;
@property(readonly) BOOL unseenCountIsKnown;
@property(readonly) unsigned long long unseenCount;
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, copy, nonatomic) NSString *extendedDisplayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)queueUpdateStatusCountsForTotal:(unsigned long long)arg1 unseen:(unsigned long long)arg2;
@end
