/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@interface MessageDetails : NSObject
{
    long long _libraryID;
    unsigned int _messageFlags;
    unsigned int _uid;
    unsigned int _encoding;
    BOOL _isInvalid;
}

+ (id)searchDetails:(id)arg1 forUid:(unsigned int)arg2 skippingUid:(unsigned int)arg3;
- (id)init;
- (id)description;
@property(nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) unsigned int encoding; // @synthesize encoding=_encoding;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned int messageFlags; // @synthesize messageFlags=_messageFlags;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;

@end

