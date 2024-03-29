//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCADirectSnapSaveBase.h"

@class NSNumber, NSString;

@interface SCAGeofilterDirectSnapSave : SCADirectSnapSaveBase
{
    NSNumber *filterIndexPos;
    NSNumber *filterIndexCount;
    NSNumber *stickerGeoBitmojiCount;
    NSNumber *stickerGeoBitmojiFromRecentsCount;
    NSNumber *deviceScore;
    long long lensSource;
    long long filterSource;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *snapSessionId;
    NSString *stickerGeoBitmojiList;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdsnapPlacementId;
- (long long)getDeviceScore;
- (id)getEncGeoData;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterGeofilterId;
- (id)getFilterGeolensId;
- (long long)getFilterIndexCount;
- (long long)getFilterIndexPos;
- (long long)getFilterSource;
- (id)getLensOptionId;
- (long long)getLensSource;
- (double)getPerUserSamplingRate;
- (id)getSnapSessionId;
- (long long)getStickerGeoBitmojiCount;
- (long long)getStickerGeoBitmojiFromRecentsCount;
- (id)getStickerGeoBitmojiList;
- (id)init;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterIndexCount:(long long)arg1;
- (void)setFilterIndexPos:(long long)arg1;
- (void)setFilterSource:(long long)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setStickerGeoBitmojiCount:(long long)arg1;
- (void)setStickerGeoBitmojiFromRecentsCount:(long long)arg1;
- (void)setStickerGeoBitmojiList:(id)arg1;

@end

