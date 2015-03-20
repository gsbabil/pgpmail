/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSArray, NSDictionary, NSOpenPanel, NSPopUpButton, NSURL;

@interface DefaultWebAppPopUpController : NSObject <NSMenuDelegate>
{
    NSPopUpButton *_defaultWebApp;
    NSOpenPanel *_selectAppPanel;
    NSDictionary *_webApp;
    long long _webIndex;
    NSArray *_schemes;
    NSArray *_fileExtensions;
    unsigned int _OSType;
    NSURL *_sampleURL;
}

- (struct __CFURL *)urlForEntry:(id)arg1;
- (long long)indexOfItemInPopUp:(id)arg1 closestToValue:(id)arg2;
- (void)setAppPopUp:(id)arg1 toValue:(id)arg2;
- (BOOL)populateSchemeHandlerPopupWithURL:(id)arg1 forPopup:(id)arg2;
- (void)populateWebPopUpWithDefault;
- (id)dictionaryForScheme:(id)arg1;
- (void)setHandler:(id)arg1 forScheme:(id)arg2;
- (void)setDefaultLSWeakBindingsForApp:(id)arg1;
- (void)setNewWebApplication;
- (void)webApplicationSelected:(id)arg1;
- (void)populatePopUp;
- (void)showDefaultInPopUp;
- (id)initWithPopUp:(id)arg1 schemes:(id)arg2 fileExtensions:(id)arg3 OSType:(unsigned int)arg4 sampleURL:(id)arg5;
- (void)dealloc;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;

@end

