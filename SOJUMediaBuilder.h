//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl;

@interface SOJUMediaBuilder : NSObject
{
    NSString *_mediaId;
    NSString *_mediaType;
    NSString *_mediaUrl;
    NSDictionary *_mediaAttributes;
    NSString *_key;
    NSString *_iv;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_owner;
    NSNumber *_timerSec;
    NSNumber *_isZipped;
    NSString *_venueId;
    NSArray *_snapAttachments;
    NSNumber *_isInfiniteDuration;
    NSString *_sourceId;
    NSString *_animatedSnapType;
    NSString *_creatorAttribution;
    SOJUMediaUrl *_directDownloadUrl;
    NSString *_miniThumbnailData;
    NSString *_lensMetadata;
    NSString *_contextClientInfo;
}

+ (id)withJUMedia:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAnimatedSnapType:(id)arg1;
- (id)setAnimatedSnapTypeEnum:(long long)arg1;
- (id)setContextClientInfo:(id)arg1;
- (id)setCreatorAttribution:(id)arg1;
- (id)setDirectDownloadUrl:(id)arg1;
- (id)setHeight:(id)arg1;
- (id)setHeightValue:(int)arg1;
- (id)setIsInfiniteDuration:(id)arg1;
- (id)setIsInfiniteDurationValue:(_Bool)arg1;
- (id)setIsZipped:(id)arg1;
- (id)setIsZippedValue:(_Bool)arg1;
- (id)setIv:(id)arg1;
- (id)setKey:(id)arg1;
- (id)setLensMetadata:(id)arg1;
- (id)setMediaAttributes:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setMediaUrl:(id)arg1;
- (id)setMiniThumbnailData:(id)arg1;
- (id)setOwner:(id)arg1;
- (id)setSnapAttachments:(id)arg1;
- (id)setSourceId:(id)arg1;
- (id)setTimerSec:(id)arg1;
- (id)setTimerSecValue:(float)arg1;
- (id)setVenueId:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setWidthValue:(int)arg1;

@end

