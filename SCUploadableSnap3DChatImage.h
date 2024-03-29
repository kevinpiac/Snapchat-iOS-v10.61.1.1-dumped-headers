//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseUploadableChatMedia.h"

@class NSData, NSString, SOJUSnapMetadata;

@interface SCUploadableSnap3DChatImage : SCBaseUploadableChatMedia
{
    NSData *_thumbnailData;
    SOJUSnapMetadata *_snapMetadata;
    NSString *_lensMetadata;
}

- (void).cxx_destruct;
- (id)_archiveMediaData:(id)arg1 imageWithOverlay:(id)arg2 overlayImage:(id)arg3 useWebP:(_Bool)arg4 webPQuality:(double)arg5 snap3DAssetMetadata:(id)arg6 error:(id *)arg7;
- (id)_bakeImageWithOverlay:(id)arg1 overlayImage:(id)arg2;
- (id)_compressImageData:(id)arg1;
- (id)_metadataDictionaryFromMetadata:(id)arg1;
- (id)_thumbnailDataFrom:(id)arg1;
- (_Bool)isZipped;
@property(readonly, copy, nonatomic) NSString *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
- (long long)mediaType;
- (void)setImage:(id)arg1 overlayImage:(id)arg2 useWebP:(_Bool)arg3 webPQuality:(double)arg4 isImageBakedWithOverlay:(_Bool)arg5 snap3DAssetMetadata:(id)arg6;
- (void)setImage:(id)arg1 overlayImage:(id)arg2 useWebP:(_Bool)arg3 webPQuality:(double)arg4 isImageBakedWithOverlay:(_Bool)arg5 snap3DAssetMetadata:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)snapMetadata;
- (void)thumbnailMediaData:(CDUnknownBlockType)arg1;

@end

