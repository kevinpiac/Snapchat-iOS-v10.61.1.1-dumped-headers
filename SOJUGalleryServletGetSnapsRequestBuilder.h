//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface SOJUGalleryServletGetSnapsRequestBuilder : NSObject
{
    NSArray *_snapIds;
    NSNumber *_overlayData;
    NSNumber *_mediaUrl;
    NSNumber *_thumbnailUrl;
    NSNumber *_overlayImageUrl;
    NSNumber *_snapTags;
    NSNumber *_snapLocation;
    NSNumber *_encryption;
    NSNumber *_miniThumbnailBytes;
    NSNumber *_gzippedOverlayData;
    NSNumber *_mediaFormat;
    NSNumber *_sensorBlob;
    NSNumber *_spectaclesMetadataUrl;
}

+ (id)withJUGalleryServletGetSnapsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEncryption:(id)arg1;
- (id)setEncryptionValue:(_Bool)arg1;
- (id)setGzippedOverlayData:(id)arg1;
- (id)setGzippedOverlayDataValue:(_Bool)arg1;
- (id)setMediaFormat:(id)arg1;
- (id)setMediaFormatValue:(_Bool)arg1;
- (id)setMediaUrl:(id)arg1;
- (id)setMediaUrlValue:(_Bool)arg1;
- (id)setMiniThumbnailBytes:(id)arg1;
- (id)setMiniThumbnailBytesValue:(_Bool)arg1;
- (id)setOverlayData:(id)arg1;
- (id)setOverlayDataValue:(_Bool)arg1;
- (id)setOverlayImageUrl:(id)arg1;
- (id)setOverlayImageUrlValue:(_Bool)arg1;
- (id)setSensorBlob:(id)arg1;
- (id)setSensorBlobValue:(_Bool)arg1;
- (id)setSnapIds:(id)arg1;
- (id)setSnapLocation:(id)arg1;
- (id)setSnapLocationValue:(_Bool)arg1;
- (id)setSnapTags:(id)arg1;
- (id)setSnapTagsValue:(_Bool)arg1;
- (id)setSpectaclesMetadataUrl:(id)arg1;
- (id)setSpectaclesMetadataUrlValue:(_Bool)arg1;
- (id)setThumbnailUrl:(id)arg1;
- (id)setThumbnailUrlValue:(_Bool)arg1;

@end

