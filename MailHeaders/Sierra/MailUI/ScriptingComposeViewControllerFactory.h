//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class ComposeBackEnd, NSPort, NSSet;

@interface ScriptingComposeViewControllerFactory : NSObject
{
    BOOL _showEditor;	// 8 = 0x8
    BOOL _editorHasInitialized;	// 9 = 0x9
    ComposeBackEnd *_backEnd;	// 16 = 0x10
    long long _editedMessageType;	// 24 = 0x18
    NSSet *_targetMessages;	// 32 = 0x20
    NSPort *_initializationPort;	// 40 = 0x28
}

+ (id)fullyInitalizedComposeControllerWithBackEnd:(id)arg1 type:(long long)arg2 targetMessages:(id)arg3 showEditor:(BOOL)arg4;	// IMP=0x0000000100290e87
@property(nonatomic) BOOL editorHasInitialized; // @synthesize editorHasInitialized=_editorHasInitialized;
@property(readonly, nonatomic) NSPort *initializationPort; // @synthesize initializationPort=_initializationPort;
@property(readonly, nonatomic) BOOL showEditor; // @synthesize showEditor=_showEditor;
@property(readonly, copy, nonatomic) NSSet *targetMessages; // @synthesize targetMessages=_targetMessages;
@property(readonly, nonatomic) long long editedMessageType; // @synthesize editedMessageType=_editedMessageType;
@property(readonly, nonatomic) ComposeBackEnd *backEnd; // @synthesize backEnd=_backEnd;
- (void).cxx_destruct;	// IMP=0x000000010029142e
- (void)_editorHasInitialized:(id)arg1;	// IMP=0x00000001002912fc
- (void)dealloc;	// IMP=0x0000000100291271
- (id)_fullyInitalizedComposeController;	// IMP=0x0000000100290f35
- (id)init;	// IMP=0x0000000100290db8
- (id)initWithBackEnd:(id)arg1 editedMessageType:(long long)arg2 targetMessages:(id)arg3 showEditor:(BOOL)arg4;	// IMP=0x0000000100290cb9

@end

