//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilesystemEmailImporter.h"

@interface EudoraEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;	// IMP=0x0000000100173419
+ (id)name;	// IMP=0x00000001001733ac
- (BOOL)isAttachmentBeingSearchedFor:(id)arg1;	// IMP=0x0000000100173f12
- (id)_attachmentsInEudoraMessage:(id)arg1;	// IMP=0x0000000100173bfc
- (void)_stripTag:(char *)arg1 fromData:(id)arg2;	// IMP=0x0000000100173a70
- (struct _NSRange)_rangeOfDataContainedByTag:(char *)arg1 endTag:(char *)arg2 inData:(id)arg3;	// IMP=0x00000001001739b8
- (id)preProcessSourceData:(id)arg1;	// IMP=0x0000000100173561
- (BOOL)isValidMailbox:(id)arg1;	// IMP=0x0000000100173493
- (char *)fromString;	// IMP=0x0000000100173486

@end
