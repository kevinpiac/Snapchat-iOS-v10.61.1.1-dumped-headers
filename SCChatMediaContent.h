//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaContent-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, SCBoltContentObject, SOJUMediaUrl, SOJUSnapMetadata;

@interface SCChatMediaContent : NSObject <SCChatMediaContent>
{
    _Bool _isBroadcast;
    _Bool _hidesBroadcastTimer;
    _Bool _isZipped;
    _Bool _isCustomSticker;
    _Bool _isInfiniteDuration;
    NSString *_mediaId;
    NSString *_key;
    NSString *_iv;
    NSString *_mediaUrl;
    SOJUMediaUrl *_directUploadMediaUrl;
    SOJUMediaUrl *_directDownloadMediaUrl;
    NSString *_broadcastMediaUrl;
    NSString *_broadcastActionText;
    NSString *_broadcastSecondaryText;
    NSString *_broadcastUrl;
    NSString *_creatorAttribution;
    long long _mediaType;
    long long _mediaLoadState;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSArray *_snapAttachments;
    NSString *_venueId;
    NSString *_sourceId;
    SOJUSnapMetadata *_snapMetadata;
    long long _mediaUploadState;
    SCBoltContentObject *_contentObject;
    NSData *_miniThumbnailData;
}

+ (void)_handleFetchDataForKeyCompletion:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)_handleFetchGifForKeyCompletion:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)_handleFetchImageForKeyCompletion:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)contains:(id)arg1;
+ (id)dataToImage:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (void)fetchDataForKey:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)fetchGifForKey:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)fetchImageForKey:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)mediaIdForCacheId:(id)arg1;
+ (void)purgeAllMediaFromCacheMemory;
+ (void)purgeMedia:(id)arg1;
+ (void)saveToCache:(id)arg1 contentId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)saveToCache:(id)arg1 contentId:(id)arg2 expirationIntervalFromNow:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)saveZippedDataToCache:(id)arg1 mediaMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_generateAVURLAssetWithContentData:(id)arg1;
- (void)_handleFetchMediaBundleFromCacheWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isMediaInCacheForType:(long long)arg1;
- (_Bool)_isMediaReadyToDisplayThumbnailOptional:(_Bool)arg1;
- (void)_overlayImageWithCompletionQueue:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_saveUnzippedDataToDisk:(id)arg1 overlayData:(id)arg2 metadataDict:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (long long)_thumbnailCacheItemType;
- (id)allCacheIds;
@property(readonly, copy, nonatomic) NSString *broadcastActionText; // @synthesize broadcastActionText=_broadcastActionText;
@property(readonly, copy, nonatomic) NSString *broadcastMediaUrl; // @synthesize broadcastMediaUrl=_broadcastMediaUrl;
@property(readonly, copy, nonatomic) NSString *broadcastSecondaryText; // @synthesize broadcastSecondaryText=_broadcastSecondaryText;
@property(readonly, copy, nonatomic) NSString *broadcastUrl; // @synthesize broadcastUrl=_broadcastUrl;
- (id)cacheIdForCacheItemType:(long long)arg1;
- (id)checkAndCorrectMediaStateWithCache:(id)arg1;
- (_Bool)containsSpectacles;
- (_Bool)containsVideo;
@property(readonly, copy, nonatomic) SCBoltContentObject *contentObject; // @synthesize contentObject=_contentObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)deleteMediaFromCache;
- (void)deleteVideoFileIfNecessary;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadMediaUrl; // @synthesize directDownloadMediaUrl=_directDownloadMediaUrl;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directUploadMediaUrl; // @synthesize directUploadMediaUrl=_directUploadMediaUrl;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (void)fetchDataFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchImageFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fileManager;
- (void)generateThumbnailWithOverlayImage:(id)arg1 contentData:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)gifWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) _Bool hidesBroadcastTimer; // @synthesize hidesBroadcastTimer=_hidesBroadcastTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 key:(id)arg2 iv:(id)arg3 mediaUrl:(id)arg4 directUploadMediaUrl:(id)arg5 directDownloadMediaUrl:(id)arg6 broadcastMediaUrl:(id)arg7 broadcastActionText:(id)arg8 broadcastSecondaryText:(id)arg9 broadcastUrl:(id)arg10 creatorAttribution:(id)arg11 isBroadcast:(_Bool)arg12 hidesBroadcastTimer:(_Bool)arg13 mediaType:(long long)arg14 mediaLoadState:(long long)arg15 width:(id)arg16 height:(id)arg17 isZipped:(_Bool)arg18 isCustomSticker:(_Bool)arg19 duration:(id)arg20 isInfiniteDuration:(_Bool)arg21 snapAttachments:(id)arg22 venueId:(id)arg23 sourceId:(id)arg24 snapMetadata:(id)arg25 mediaUploadState:(long long)arg26 contentObject:(id)arg27 miniThumbnailData:(id)arg28;
@property(readonly, nonatomic) _Bool isBroadcast; // @synthesize isBroadcast=_isBroadcast;
- (_Bool)isBroadcastAndFromGCS;
@property(readonly, nonatomic) _Bool isCustomSticker; // @synthesize isCustomSticker=_isCustomSticker;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGif;
- (_Bool)isImage;
@property(readonly, nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
- (_Bool)isLaguna;
- (_Bool)isMediaLoadedInCache;
- (_Bool)isMediaOverlayLoadedInCache;
- (_Bool)isMediaReadyToDisplay;
- (_Bool)isMediaReadyToDisplayThumbnailOptional;
- (_Bool)isVideo;
- (_Bool)isVideoWithSound;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long mediaLoadState; // @synthesize mediaLoadState=_mediaLoadState;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long mediaUploadState; // @synthesize mediaUploadState=_mediaUploadState;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSData *miniThumbnailData; // @synthesize miniThumbnailData=_miniThumbnailData;
- (void)overlayImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)preferFasterCoding;
- (void)readMetadataDictWithHandler:(CDUnknownBlockType)arg1;
- (void)saveDataToCache:(id)arg1 mediaCategory:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveMetadataDict:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *snapAttachments; // @synthesize snapAttachments=_snapAttachments;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata; // @synthesize snapMetadata=_snapMetadata;
@property(readonly, copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)trackingId;
- (void)unarchiveBundleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unzipMediaDataWithCompletion:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (_Bool)videoExistsOnDisk;
- (id)videoFilename;
- (id)videoURL;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (id)zipMetadataDedupeKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

