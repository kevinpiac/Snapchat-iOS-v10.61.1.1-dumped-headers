//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADirectSnapSendBase.h"

@class NSDate, NSNumber, NSString;

@interface SCAGeofilterGallerySnapSend : SCADirectSnapSendBase
{
    NSNumber *filterIndexPos;
    NSNumber *filterIndexCount;
    NSNumber *stickerGeoBitmojiCount;
    NSNumber *stickerGeoBitmojiFromRecentsCount;
    NSNumber *cachedTimeSec;
    NSNumber *isCached;
    long long lensSource;
    long long playerVersion;
    long long mediaFormat;
    long long galleryMediaType;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *snapSessionId;
    NSString *stickerGeoBitmojiList;
    NSString *specsContentId;
    NSDate *cachedDate;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdsnapPlacementId;
- (id)getCachedDate;
- (double)getCachedTimeSec;
- (id)getEncGeoData;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeofilterId;
- (id)getFilterGeolensId;
- (long long)getFilterIndexCount;
- (long long)getFilterIndexPos;
- (long long)getGalleryMediaType;
- (_Bool)getIsCached;
- (id)getLensOptionId;
- (long long)getLensSource;
- (long long)getMediaFormat;
- (double)getPerUserSamplingRate;
- (long long)getPlayerVersion;
- (id)getSnapSessionId;
- (id)getSpecsContentId;
- (long long)getStickerGeoBitmojiCount;
- (long long)getStickerGeoBitmojiFromRecentsCount;
- (id)getStickerGeoBitmojiList;
- (id)init;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setCachedDate:(id)arg1;
- (void)setCachedTimeSec:(double)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterIndexCount:(long long)arg1;
- (void)setFilterIndexPos:(long long)arg1;
- (void)setGalleryMediaType:(long long)arg1;
- (void)setIsCached:(_Bool)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setMediaFormat:(long long)arg1;
- (void)setPlayerVersion:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSpecsContentId:(id)arg1;
- (void)setStickerGeoBitmojiCount:(long long)arg1;
- (void)setStickerGeoBitmojiFromRecentsCount:(long long)arg1;
- (void)setStickerGeoBitmojiList:(id)arg1;

@end

