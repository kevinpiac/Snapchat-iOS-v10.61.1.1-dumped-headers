//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSADepthMetadata, NSData, NSNumber, NSString, SOJUGallerySnapOverlay;

@interface SCGalleryStoryDataBuilder : NSObject
{
    SOJUGallerySnapOverlay *_sojuOverlay;
    NSData *_renderedOverlay;
    NSData *_originalMedia;
    NSNumber *_mediaType;
    NSString *_servletMediaFormat;
    LSADepthMetadata *_lsaDepthMetadata;
}

+ (id)withGalleryStoryData:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setLsaDepthMetadata:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setOriginalMedia:(id)arg1;
- (id)setRenderedOverlay:(id)arg1;
- (id)setServletMediaFormat:(id)arg1;
- (id)setSojuOverlay:(id)arg1;

@end

