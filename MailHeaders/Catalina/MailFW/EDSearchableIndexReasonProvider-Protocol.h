//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <Mail/NSObject-Protocol.h>

@class NSSet;

@protocol EDSearchableIndexReasonProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *currentReasons;
@property(readonly, copy, nonatomic) NSSet *exclusionReasons;
@property(readonly, copy, nonatomic) NSSet *purgeReasons;
@property(readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
@end

