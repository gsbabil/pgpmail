//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandler.h"

@class MFEWSConnection;

@interface MFEWSNetworkTaskHandler : MCTaskHandler
{
    MFEWSConnection *_connection;	// 8 = 0x8
}

@property(readonly, nonatomic) MFEWSConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;	// IMP=0x00000000000ada32
- (id)init;	// IMP=0x00000000000ad952
- (id)initWithEWSConnection:(id)arg1;	// IMP=0x00000000000ad8da

@end

