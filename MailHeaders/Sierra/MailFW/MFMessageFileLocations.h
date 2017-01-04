//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSDictionary, NSURL;

@interface MFMessageFileLocations : NSObject
{
    BOOL _isPartial;	// 8 = 0x8
    NSURL *_primaryEmlxURL;	// 16 = 0x10
    long long _libraryID;	// 24 = 0x18
    NSURL *_attachmentDirectory;	// 32 = 0x20
}

@property(retain, nonatomic) NSURL *attachmentDirectory; // @synthesize attachmentDirectory=_attachmentDirectory;
@property(readonly, nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(readonly, nonatomic) BOOL isPartial; // @synthesize isPartial=_isPartial;
@property(readonly, nonatomic) NSURL *primaryEmlxURL; // @synthesize primaryEmlxURL=_primaryEmlxURL;
- (void).cxx_destruct;	// IMP=0x00000000001c7dd5
- (BOOL)_transferToNewFileLocation:(id)arg1 renameOrCopyBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000001c7835
- (BOOL)moveToNewFileLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c777c
- (BOOL)copyToNewFileLocation:(id)arg1 replaceIfExists:(BOOL)arg2 error:(id *)arg3;	// IMP=0x00000000001c7583
@property(readonly, copy, nonatomic) NSDictionary *attachmentURLsByPartNumber;
@property(readonly, copy, nonatomic) NSDictionary *emlxPartURLsByPartNumber;
- (id)description;	// IMP=0x00000000001c68b7
- (id)init;	// IMP=0x00000000001c67e8
- (id)initWithPrimaryEmlxURL:(id)arg1;	// IMP=0x00000000001c65c1

@end

