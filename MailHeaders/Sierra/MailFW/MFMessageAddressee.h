//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString;

@interface MFMessageAddressee : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_address;	// 16 = 0x10
    id <MFScriptingMessage> _message;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) id <MFScriptingMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x00000000001b9efb
- (id)objectSpecifier;	// IMP=0x00000000001b9cd8
@property(copy, nonatomic) NSString *address;
@property(copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *formattedAddress;
- (unsigned long long)hash;	// IMP=0x00000000001b9973
- (BOOL)isEqual:(id)arg1;	// IMP=0x00000000001b98ac
- (id)init;	// IMP=0x00000000001b9890
- (id)initWithDisplayName:(id)arg1 address:(id)arg2 type:(id)arg3 message:(id)arg4;	// IMP=0x00000000001b9757

@end

