/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSBundle, NSDictionary, NSImage, NSMutableDictionary, NSString;

@interface Stationery : NSObject
{
    NSString *_html;
    NSMutableDictionary *_imageData;
    NSImage *_thumbnailImage;
    NSArray *_colors;
    NSString *_defaultColor;
    BOOL _isCustom;
    NSString *_uniqueIDForBaseURL;
    NSDictionary *_descriptionDictionary;
    NSDictionary *_localizedDescriptionDictionary;
    NSBundle *_bundle;
}

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy, nonatomic) NSDictionary *localizedDescriptionDictionary; // @synthesize localizedDescriptionDictionary=_localizedDescriptionDictionary;
@property(copy, nonatomic) NSDictionary *descriptionDictionary; // @synthesize descriptionDictionary=_descriptionDictionary;
@property(copy, nonatomic) NSString *uniqueIDForBaseURL; // @synthesize uniqueIDForBaseURL=_uniqueIDForBaseURL;
@property(readonly, nonatomic) BOOL isCustom; // @synthesize isCustom=_isCustom;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (id)bundlePath;
- (void)_addValueToDescription:(id)arg1 forKey:(id)arg2;
- (BOOL)saveToPath:(id)arg1 error:(id *)arg2;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)addImageWithData:(id)arg1 name:(id)arg2;
- (void)setHTML:(id)arg1;
- (void)setStationeryName:(id)arg1;
- (void)setMinimumWidth:(double)arg1;
- (id)headers;
- (id)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (id)thumbnailImagePath;
- (id)displayName;
- (id)folderName;
- (id)stationeryID;
- (void)changeFolderAndDisplayNameTo:(id)arg1;
- (id)fontsForColor:(id)arg1;
- (id)imagesInCompositeImagesForColor:(id)arg1;
- (id)backgroundImagePathsForColor:(id)arg1 previousColor:(id)arg2;
- (id)imagePathsForColor:(id)arg1;
- (id)nextColorAfterColor:(id)arg1;
- (double)letterWidth;
- (double)letterTopMargin;
- (id)defaultColor;
- (id)colors;
- (id)backgroundTile;
- (id)pathToBackgroundTile;
- (BOOL)hasImages;
- (id)_localizeHtml:(id)arg1 withTable:(id)arg2;
- (id)_html;
- (id)_attachmentsForImages:(id)arg1 typeIsBackground:(BOOL)arg2;
- (id)parsedMessage;
- (void)markAsUserCreatedCustomStationery;
- (BOOL)isUserCreatedCustomStationery;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

