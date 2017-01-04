//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString, NSURL;

@interface MFJunkMailFilter : NSObject
{
    struct __LSMMap *_map;	// 8 = 0x8
    BOOL _isDirty;	// 16 = 0x10
    BOOL _useCleanMap;	// 17 = 0x11
    BOOL _isInTraining;	// 18 = 0x12
    NSURL *_oldMapFileURL;	// 24 = 0x18
    NSURL *_mapFileURL;	// 32 = 0x20
    NSString *_mapFilePath;	// 40 = 0x28
}

+ (id)junkStringForMessage:(id)arg1 withRecorder:(id)arg2;	// IMP=0x00000000000f5b78
+ (void)resetJunkMailUsageCounters;	// IMP=0x00000000000f559d
+ (void)resetJunkMailTrainingBalance;	// IMP=0x00000000000f5536
+ (void)incrementJunkMailTrainingCreditBy:(long long)arg1;	// IMP=0x00000000000f5494
+ (void)incrementJunkMailTrainingDebtBy:(long long)arg1;	// IMP=0x00000000000f53f2
+ (BOOL)shouldUpdateTrainingDebt;	// IMP=0x00000000000f53e7
+ (id)_junkFilterUsageCounterKeys;	// IMP=0x00000000000f51b5
+ (id)sharedInstance;	// IMP=0x00000000000f4fc4
@property(nonatomic) BOOL isInTraining; // @synthesize isInTraining=_isInTraining;
@property(copy, nonatomic) NSString *mapFilePath; // @synthesize mapFilePath=_mapFilePath;
@property(retain, nonatomic) NSURL *mapFileURL; // @synthesize mapFileURL=_mapFileURL;
@property(retain, nonatomic) NSURL *oldMapFileURL; // @synthesize oldMapFileURL=_oldMapFileURL;
@property(nonatomic) BOOL useCleanMap; // @synthesize useCleanMap=_useCleanMap;
- (void).cxx_destruct;	// IMP=0x00000000000f7685
- (void)_saveTrainingWithDelay;	// IMP=0x00000000000f7483
@property(nonatomic) BOOL isDirty;
- (void)userDidReplyToMessage:(id)arg1;	// IMP=0x00000000000f6ec2
- (id)trainOnMessages:(id)arg1 junkMailLevel:(long long)arg2;	// IMP=0x00000000000f6703
- (long long)junkMailLevelForMessage:(id)arg1 junkRecorder:(id)arg2;	// IMP=0x00000000000f5926
- (long long)junkMailLevelForMessage:(id)arg1;	// IMP=0x00000000000f5912
- (id)_usageCounter;	// IMP=0x00000000000f58d3
@property(readonly, nonatomic) BOOL gatherUsageCounts;
@property(readonly, copy, nonatomic) NSString *state;
@property(readonly, nonatomic) BOOL isEnabled;
@property(readonly, nonatomic) long long junkMailTrainingCredit;
@property(readonly, nonatomic) long long junkMailTrainingDebt;
@property(readonly, nonatomic) long long junkMailTrainingBalance;
- (void)saveTraining;	// IMP=0x00000000000f571c
- (void)reset;	// IMP=0x00000000000f5712
@property(readonly, nonatomic) unsigned long long manuallyMarkedAsNotJunkMessageCount;
@property(readonly, nonatomic) unsigned long long manuallyMarkedAsJunkMessageCount;
@property(readonly, nonatomic) unsigned long long evaluatedAsJunkMessageCount;
@property(readonly, nonatomic) unsigned long long evaluatedMessageCount;
- (void)setMap:(struct __LSMMap *)arg1;	// IMP=0x00000000000f516d
- (struct __LSMMap *)map;	// IMP=0x00000000000f515c
- (void)dealloc;	// IMP=0x00000000000f508f

@end

