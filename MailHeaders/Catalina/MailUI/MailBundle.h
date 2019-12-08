//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MailBundlesDirectory, NSBundle, NSError, NSString, NSURL;

@interface MailBundle : NSObject
{
    BOOL _loaded;
    NSURL *_url;
    MailBundlesDirectory *_directory;
    NSBundle *_bundle;
    long long _state;
    NSError *_loadError;
}

@property(readonly, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) __weak MailBundlesDirectory *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
//- (void).cxx_destruct;
- (BOOL)load;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)description;
- (id)initWithURL:(id)arg1 directory:(id)arg2;

@end

