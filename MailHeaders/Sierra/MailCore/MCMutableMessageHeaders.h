//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCMessageHeaders.h>

@class NSMutableArray, NSMutableDictionary;

@interface MCMutableMessageHeaders : MCMessageHeaders
{
    NSMutableDictionary *_headersAdded;	// 8 = 0x8
    NSMutableArray *_headersRemoved;	// 16 = 0x10
}

//- (void).cxx_destruct;	// IMP=0x000000000007b5ec
- (void)addFromSpaceIfMissing;	// IMP=0x000000000007b3ad
- (void)removeHeaderForKey:(id)arg1;	// IMP=0x000000000007b2c9
- (void)setMessageIDList:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007b165
- (void)setAddressList:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007b001
- (void)setHeader:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007ae7f
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;	// IMP=0x000000000007a859
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;	// IMP=0x000000000007a5fe
- (id)encodedHeadersIncludingFromSpace:(BOOL)arg1;	// IMP=0x0000000000079f4c
- (id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000079de1
- (id)messageIDListForKey:(id)arg1;	// IMP=0x0000000000079bc5
- (id)_firstAddressForKey:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000079a5a
- (id)addressListForKey:(id)arg1;	// IMP=0x000000000007983e
- (id)firstHeaderForKey:(id)arg1;	// IMP=0x000000000007955e
- (id)_headersForKey:(id)arg1;	// IMP=0x0000000000079407
- (BOOL)hasHeaderForKey:(id)arg1;	// IMP=0x0000000000079323
- (id)allHeaderKeys;	// IMP=0x000000000007916c
- (id)description;	// IMP=0x00000000000790e8
- (id)debugDescription;	// IMP=0x00000000000790ad
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007900f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000078f8e

@end

