//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSTextField;

@interface CertificateBannerViewController : BannerViewController
{
    BannerImageView *_certificateImage;	// 104 = 0x68
    NSTextField *_messageField;	// 112 = 0x70
    NSButton *_helpButton;	// 120 = 0x78
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak BannerImageView *certificateImage; // @synthesize certificateImage=_certificateImage;
- (void).cxx_destruct;	// IMP=0x00000001000eecb3
- (void)showDetails:(id)arg1;	// IMP=0x00000001000ee8a1
- (void)updateBannerContents;	// IMP=0x00000001000ee5c4
- (void)updateWantsDisplay;	// IMP=0x000000010004aca9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010004d018
- (void)setRepresentedObject:(id)arg1;	// IMP=0x000000010004abbe
- (void)dealloc;	// IMP=0x00000001000b5f5c

@end

