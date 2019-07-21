//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SOJUGalleryInfoStickerStyle, SOJUSticker;

@interface SCStickerStateBuilder : NSObject
{
    unsigned long long _type;
    unsigned long long _infoStickerType;
    NSString *_emoji;
    SOJUSticker *_chatSticker;
    struct CGSize _relativeSize;
    struct CGPoint _center;
    double _rotation;
    double _scale;
    _Bool _isTracking;
    NSArray *_trackingTrajectory;
    SOJUGalleryInfoStickerStyle *_infoStickerStyle;
    _Bool _isAnimated;
    long long _uniqueId;
}

+ (id)withStickerState:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCenter:(struct CGPoint)arg1;
- (id)setChatSticker:(id)arg1;
- (id)setEmoji:(id)arg1;
- (id)setInfoStickerStyle:(id)arg1;
- (id)setInfoStickerType:(unsigned long long)arg1;
- (id)setIsAnimated:(_Bool)arg1;
- (id)setIsTracking:(_Bool)arg1;
- (id)setRelativeSize:(struct CGSize)arg1;
- (id)setRotation:(double)arg1;
- (id)setScale:(double)arg1;
- (id)setTrackingTrajectory:(id)arg1;
- (id)setType:(unsigned long long)arg1;
- (id)setUniqueId:(long long)arg1;

@end

