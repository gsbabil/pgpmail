//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class IMAPFlagsFetchResult, NSIndexSet;

@interface IMAPInternalUidFlagsResponse : IMAPResponse
{
    BOOL _flagChangeType;	// 8 = 0x8
    NSIndexSet *_uids;	// 16 = 0x10
    IMAPFlagsFetchResult *_flagsFetchResult;	// 24 = 0x18
}

@property(nonatomic) BOOL flagChangeType; // @synthesize flagChangeType=_flagChangeType;
@property(retain, nonatomic) IMAPFlagsFetchResult *flagsFetchResult; // @synthesize flagsFetchResult=_flagsFetchResult;
@property(copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
- (void).cxx_destruct;	// IMP=0x000000000002e698
- (id)description;	// IMP=0x000000000002e4d7

@end

