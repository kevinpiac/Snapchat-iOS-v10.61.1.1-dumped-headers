//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, LSADepthMetadata, NSDate, NSString, NSURL, SOJUGallerySnapOverlay, SOJUStoryFrame;

@interface SCGalleryStorySnapBuilder : NSObject
{
    int _mediaType;
    unsigned long long _source;
    NSURL *_originalMediaURL;
    NSURL *_renderedOverlayURL;
    double _duration;
    NSDate *_createTimeUtc;
    long long _orientation;
    SOJUGallerySnapOverlay *_sojuOverlay;
    SOJUStoryFrame *_framing;
    CLLocation *_location;
    _Bool _infiniteDuration;
    NSString *_storySnapId;
    NSString *_attributionString;
    NSDate *_captureTimeUtc;
    NSString *_servletMediaFormat;
    LSADepthMetadata *_lsaDepthMetadata;
}

+ (id)withGalleryStorySnap:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAttributionString:(id)arg1;
- (id)setCaptureTimeUtc:(id)arg1;
- (id)setCreateTimeUtc:(id)arg1;
- (id)setDuration:(double)arg1;
- (id)setFraming:(id)arg1;
- (id)setInfiniteDuration:(_Bool)arg1;
- (id)setLocation:(id)arg1;
- (id)setLsaDepthMetadata:(id)arg1;
- (id)setMediaType:(int)arg1;
- (id)setOrientation:(long long)arg1;
- (id)setOriginalMediaURL:(id)arg1;
- (id)setRenderedOverlayURL:(id)arg1;
- (id)setServletMediaFormat:(id)arg1;
- (id)setSojuOverlay:(id)arg1;
- (id)setSource:(unsigned long long)arg1;
- (id)setStorySnapId:(id)arg1;

@end

