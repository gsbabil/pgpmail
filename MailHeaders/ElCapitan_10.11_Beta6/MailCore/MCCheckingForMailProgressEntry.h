/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MailCore/MCProgressEntry.h>

@interface MCCheckingForMailProgressEntry : MCProgressEntry
{
    unsigned long long _foundMessages;
}

+ (id)keyPathsForValuesAffectingStatusText;
@property(nonatomic) unsigned long long foundMessages; // @synthesize foundMessages=_foundMessages;
- (double)finishDelay;
- (void)refreshValues;
- (id)observedProgressKeypaths;
- (id)progressSlice;
- (BOOL)indeterminate;
- (id)statusText;
- (id)progressName;

@end
