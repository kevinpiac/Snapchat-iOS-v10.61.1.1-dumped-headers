//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString, SCAMultiSnapInfo;

@interface SCAGeofilterStorySnapPost : SCAUserTrackedEvent
{
    NSNumber *animatedStickerCount;
    NSNumber *animatedFilterCount;
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *viewTimeSec;
    NSNumber *filterIndexPos;
    NSNumber *filterIndexCount;
    NSNumber *recipientCount;
    NSNumber *withGallery;
    NSNumber *flash;
    NSNumber *drawing;
    NSNumber *camera;
    NSNumber *caption;
    NSNumber *captionDeletionCount;
    NSNumber *captionTracking;
    NSNumber *captionHasStyling;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *handsFree;
    NSNumber *deviceScore;
    NSNumber *withZooming;
    NSNumber *lightSensorValue;
    NSNumber *stickerCount;
    NSNumber *stickerDeletionCount;
    NSNumber *stickerTrackingCount;
    NSNumber *stickerBitmojiCount;
    NSNumber *stickerSnapchatCount;
    NSNumber *stickerEmojiCount;
    NSNumber *stickerCustomCount;
    NSNumber *stickerBitmojiFromRecentsCount;
    NSNumber *stickerSnapchatFromRecentsCount;
    NSNumber *stickerEmojiFromRecentsCount;
    NSNumber *stickerCustomFromRecentsCount;
    NSNumber *stickerUserEnterSearchCount;
    NSNumber *stickerFromSearchCount;
    NSNumber *stickerCustomCreateCount;
    NSNumber *stickerCustomDeleteCount;
    NSNumber *stickerAutoGeneratedUsageCount;
    NSNumber *stickerInfoCount;
    NSNumber *stickerInfoTapCount;
    NSNumber *stickerContextualCount;
    NSNumber *stickerUnlockedCount;
    NSNumber *stickerGiphyCount;
    NSNumber *filterReverse;
    NSNumber *swipeCount;
    NSNumber *stickerGeoBitmojiCount;
    NSNumber *stickerGeoBitmojiFromRecentsCount;
    NSNumber *brushResizeCount;
    NSNumber *pretypeStickerTagSelectCount;
    NSNumber *prefixMatchStickerTagSelectCount;
    NSNumber *magicTotalEditCount;
    NSNumber *magicFinalEditCount;
    NSNumber *magicCancelCount;
    NSNumber *magicSessionCount;
    NSNumber *magicHasMagicImage;
    NSNumber *brushTotalTintCount;
    NSNumber *brushFinalTintCount;
    NSNumber *brushCancelCount;
    NSNumber *brushSessionCount;
    NSNumber *brushHasTint;
    NSNumber *eraserTotalEraseCount;
    NSNumber *eraserLastEraseCount;
    NSNumber *eraserCancelCount;
    NSNumber *eraserSessionCount;
    NSNumber *eraserIsInpainted;
    NSNumber *purikuraTotalEditCount;
    NSNumber *purikuraLastDrawCount;
    NSNumber *purikuraCancelCount;
    NSNumber *purikuraSessionCount;
    NSNumber *withPurikura;
    NSNumber *contextFilterGeneratedCount;
    NSNumber *contextFilterIsSeen;
    NSNumber *withContextFilterHighEndModelEnabled;
    NSNumber *visualFilterIsSeen;
    NSNumber *withContextFilterEnabled;
    NSNumber *withSearch;
    NSNumber *withFraming;
    NSNumber *cachedTimeSec;
    NSNumber *isCached;
    NSNumber *venueTapIndex;
    NSNumber *withGeofilterTransition;
    NSNumber *withAttachment;
    NSNumber *withCropping;
    NSNumber *withGeolocation;
    NSNumber *friendLinkHop;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    NSNumber *lensIndexPos;
    NSNumber *lensIndexCount;
    long long deletedSegments;
    long long mediaType;
    long long storyType;
    long long source;
    long long filterVisual;
    long long filterInfo;
    long long captureSource;
    long long lowLightStatus;
    long long nightModeState;
    long long cameraApi;
    long long lensSource;
    long long filterMotion;
    long long storyTypeSpecific;
    long long galleryContextMenuSource;
    long long filterSource;
    long long roleType;
    NSString *geoFence;
    NSString *filterSponsor;
    NSString *posterId;
    NSString *snapSessionId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeofilterIdList;
    NSString *filterGeolensId;
    NSString *lensOptionId;
    NSString *stickerEmojiList;
    NSString *stickerSnapchatList;
    NSString *stickerBitmojiList;
    NSString *stickerInfoList;
    NSString *stickerContextualList;
    NSString *stickerUnlockedList;
    NSString *stickerGiphyList;
    NSString *adsnapPlacementId;
    NSString *snapEditingAngleList;
    NSString *lagunaUserAgent;
    NSString *lagunaDeviceId;
    NSString *specsContentId;
    NSString *stickerGeoBitmojiList;
    NSString *stickerPackIds;
    NSString *brushStroke;
    NSString *drawingV2BrushStrokes;
    NSString *purikuraResourceId;
    NSString *audioToolName;
    NSString *contextFilterId;
    NSString *contextFilterSkyType;
    NSString *contextFilterPortraitType;
    NSString *filterVenueId;
    NSString *snapcraftStyleId;
    NSString *facecraftStyleId;
    NSString *dynamicContextSourceList;
    NSString *groupStoryId;
    NSString *lensBundleUrl;
    NSString *lensInfo;
    NSString *widgetValueList;
    NSString *topsnapAdId;
    NSString *topsnapRequestId;
    NSString *ghost_poster_id;
    NSDate *cachedDate;
    SCAMultiSnapInfo *multiSnapInfo;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdsnapPlacementId;
- (long long)getAnimatedFilterCount;
- (long long)getAnimatedStickerCount;
- (id)getAudioToolName;
- (long long)getBrushCancelCount;
- (long long)getBrushFinalTintCount;
- (_Bool)getBrushHasTint;
- (long long)getBrushResizeCount;
- (long long)getBrushSessionCount;
- (id)getBrushStroke;
- (long long)getBrushTotalTintCount;
- (id)getCachedDate;
- (double)getCachedTimeSec;
- (long long)getCamera;
- (long long)getCameraApi;
- (long long)getCaption;
- (long long)getCaptionDeletionCount;
- (_Bool)getCaptionHasStyling;
- (_Bool)getCaptionTracking;
- (long long)getCaptureSource;
- (long long)getContextFilterGeneratedCount;
- (id)getContextFilterId;
- (_Bool)getContextFilterIsSeen;
- (id)getContextFilterPortraitType;
- (id)getContextFilterSkyType;
- (long long)getDeletedSegments;
- (long long)getDeviceScore;
- (_Bool)getDrawing;
- (id)getDrawingV2BrushStrokes;
- (id)getDynamicContextSourceList;
- (id)getEncGeoData;
- (long long)getEraserCancelCount;
- (_Bool)getEraserIsInpainted;
- (long long)getEraserLastEraseCount;
- (long long)getEraserSessionCount;
- (long long)getEraserTotalEraseCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFaceBackCameraCount;
- (long long)getFaceFrontCameraCount;
- (id)getFacecraftStyleId;
- (id)getFilterGeofilterId;
- (id)getFilterGeofilterIdList;
- (id)getFilterGeolensId;
- (long long)getFilterIndexCount;
- (long long)getFilterIndexPos;
- (long long)getFilterInfo;
- (long long)getFilterMotion;
- (_Bool)getFilterReverse;
- (long long)getFilterSource;
- (id)getFilterSponsor;
- (id)getFilterVenueId;
- (long long)getFilterVisual;
- (_Bool)getFlash;
- (long long)getFriendLinkHop;
- (long long)getGalleryContextMenuSource;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (id)getGroupStoryId;
- (_Bool)getHandsFree;
- (_Bool)getIsCached;
- (id)getLagunaDeviceId;
- (id)getLagunaUserAgent;
- (id)getLensBundleUrl;
- (long long)getLensIndexCount;
- (long long)getLensIndexPos;
- (id)getLensInfo;
- (id)getLensOptionId;
- (long long)getLensSource;
- (double)getLightSensorValue;
- (long long)getLowLightStatus;
- (long long)getMagicCancelCount;
- (long long)getMagicFinalEditCount;
- (_Bool)getMagicHasMagicImage;
- (long long)getMagicSessionCount;
- (long long)getMagicTotalEditCount;
- (long long)getMediaType;
- (long long)getMultiSnapCount;
- (long long)getMultiSnapIndex;
- (id)getMultiSnapInfo;
- (long long)getNightModeState;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (long long)getPrefixMatchStickerTagSelectCount;
- (long long)getPretypeStickerTagSelectCount;
- (long long)getPurikuraCancelCount;
- (long long)getPurikuraLastDrawCount;
- (id)getPurikuraResourceId;
- (long long)getPurikuraSessionCount;
- (long long)getPurikuraTotalEditCount;
- (long long)getRecipientCount;
- (long long)getRoleType;
- (id)getSnapEditingAngleList;
- (id)getSnapSessionId;
- (_Bool)getSnapTimeIsLoop;
- (double)getSnapTimeSec;
- (id)getSnapcraftStyleId;
- (long long)getSource;
- (id)getSpecsContentId;
- (long long)getStickerAutoGeneratedUsageCount;
- (long long)getStickerBitmojiCount;
- (long long)getStickerBitmojiFromRecentsCount;
- (id)getStickerBitmojiList;
- (long long)getStickerContextualCount;
- (id)getStickerContextualList;
- (long long)getStickerCount;
- (long long)getStickerCustomCount;
- (long long)getStickerCustomCreateCount;
- (long long)getStickerCustomDeleteCount;
- (long long)getStickerCustomFromRecentsCount;
- (long long)getStickerDeletionCount;
- (long long)getStickerEmojiCount;
- (long long)getStickerEmojiFromRecentsCount;
- (id)getStickerEmojiList;
- (long long)getStickerFromSearchCount;
- (long long)getStickerGeoBitmojiCount;
- (long long)getStickerGeoBitmojiFromRecentsCount;
- (id)getStickerGeoBitmojiList;
- (long long)getStickerGiphyCount;
- (id)getStickerGiphyList;
- (long long)getStickerInfoCount;
- (id)getStickerInfoList;
- (long long)getStickerInfoTapCount;
- (id)getStickerPackIds;
- (long long)getStickerSnapchatCount;
- (long long)getStickerSnapchatFromRecentsCount;
- (id)getStickerSnapchatList;
- (long long)getStickerTrackingCount;
- (long long)getStickerUnlockedCount;
- (id)getStickerUnlockedList;
- (long long)getStickerUserEnterSearchCount;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (long long)getSwipeCount;
- (id)getTopsnapAdId;
- (id)getTopsnapRequestId;
- (long long)getVenueTapIndex;
- (double)getViewTimeSec;
- (_Bool)getVisualFilterIsSeen;
- (id)getWidgetValueList;
- (_Bool)getWithAnimated;
- (_Bool)getWithAttachment;
- (_Bool)getWithContextFilterEnabled;
- (_Bool)getWithContextFilterHighEndModelEnabled;
- (_Bool)getWithCropping;
- (_Bool)getWithFraming;
- (_Bool)getWithGallery;
- (_Bool)getWithGeofilterTransition;
- (_Bool)getWithGeolocation;
- (_Bool)getWithPurikura;
- (_Bool)getWithSearch;
- (_Bool)getWithZooming;
- (id)init;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAnimatedFilterCount:(long long)arg1;
- (void)setAnimatedStickerCount:(long long)arg1;
- (void)setAudioToolName:(id)arg1;
- (void)setBrushCancelCount:(long long)arg1;
- (void)setBrushFinalTintCount:(long long)arg1;
- (void)setBrushHasTint:(_Bool)arg1;
- (void)setBrushResizeCount:(long long)arg1;
- (void)setBrushSessionCount:(long long)arg1;
- (void)setBrushStroke:(id)arg1;
- (void)setBrushTotalTintCount:(long long)arg1;
- (void)setCachedDate:(id)arg1;
- (void)setCachedTimeSec:(double)arg1;
- (void)setCamera:(long long)arg1;
- (void)setCameraApi:(long long)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCaptionDeletionCount:(long long)arg1;
- (void)setCaptionHasStyling:(_Bool)arg1;
- (void)setCaptionTracking:(_Bool)arg1;
- (void)setCaptureSource:(long long)arg1;
- (void)setContextFilterGeneratedCount:(long long)arg1;
- (void)setContextFilterId:(id)arg1;
- (void)setContextFilterIsSeen:(_Bool)arg1;
- (void)setContextFilterPortraitType:(id)arg1;
- (void)setContextFilterSkyType:(id)arg1;
- (void)setDeletedSegments:(long long)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setDrawingV2BrushStrokes:(id)arg1;
- (void)setDynamicContextSourceList:(id)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setEraserCancelCount:(long long)arg1;
- (void)setEraserIsInpainted:(_Bool)arg1;
- (void)setEraserLastEraseCount:(long long)arg1;
- (void)setEraserSessionCount:(long long)arg1;
- (void)setEraserTotalEraseCount:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFacecraftStyleId:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setFilterGeofilterIdList:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterIndexCount:(long long)arg1;
- (void)setFilterIndexPos:(long long)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterMotion:(long long)arg1;
- (void)setFilterReverse:(_Bool)arg1;
- (void)setFilterSource:(long long)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterVenueId:(id)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setFriendLinkHop:(long long)arg1;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setGroupStoryId:(id)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setIsCached:(_Bool)arg1;
- (void)setLagunaDeviceId:(id)arg1;
- (void)setLagunaUserAgent:(id)arg1;
- (void)setLensBundleUrl:(id)arg1;
- (void)setLensIndexCount:(long long)arg1;
- (void)setLensIndexPos:(long long)arg1;
- (void)setLensInfo:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setMagicCancelCount:(long long)arg1;
- (void)setMagicFinalEditCount:(long long)arg1;
- (void)setMagicHasMagicImage:(_Bool)arg1;
- (void)setMagicSessionCount:(long long)arg1;
- (void)setMagicTotalEditCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMultiSnapCount:(long long)arg1;
- (void)setMultiSnapIndex:(long long)arg1;
- (void)setMultiSnapInfo:(id)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setPrefixMatchStickerTagSelectCount:(long long)arg1;
- (void)setPretypeStickerTagSelectCount:(long long)arg1;
- (void)setPurikuraCancelCount:(long long)arg1;
- (void)setPurikuraLastDrawCount:(long long)arg1;
- (void)setPurikuraResourceId:(id)arg1;
- (void)setPurikuraSessionCount:(long long)arg1;
- (void)setPurikuraTotalEditCount:(long long)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setRoleType:(long long)arg1;
- (void)setSnapEditingAngleList:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapcraftStyleId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSpecsContentId:(id)arg1;
- (void)setStickerAutoGeneratedUsageCount:(long long)arg1;
- (void)setStickerBitmojiCount:(long long)arg1;
- (void)setStickerBitmojiFromRecentsCount:(long long)arg1;
- (void)setStickerBitmojiList:(id)arg1;
- (void)setStickerContextualCount:(long long)arg1;
- (void)setStickerContextualList:(id)arg1;
- (void)setStickerCount:(long long)arg1;
- (void)setStickerCustomCount:(long long)arg1;
- (void)setStickerCustomCreateCount:(long long)arg1;
- (void)setStickerCustomDeleteCount:(long long)arg1;
- (void)setStickerCustomFromRecentsCount:(long long)arg1;
- (void)setStickerDeletionCount:(long long)arg1;
- (void)setStickerEmojiCount:(long long)arg1;
- (void)setStickerEmojiFromRecentsCount:(long long)arg1;
- (void)setStickerEmojiList:(id)arg1;
- (void)setStickerFromSearchCount:(long long)arg1;
- (void)setStickerGeoBitmojiCount:(long long)arg1;
- (void)setStickerGeoBitmojiFromRecentsCount:(long long)arg1;
- (void)setStickerGeoBitmojiList:(id)arg1;
- (void)setStickerGiphyCount:(long long)arg1;
- (void)setStickerGiphyList:(id)arg1;
- (void)setStickerInfoCount:(long long)arg1;
- (void)setStickerInfoList:(id)arg1;
- (void)setStickerInfoTapCount:(long long)arg1;
- (void)setStickerPackIds:(id)arg1;
- (void)setStickerSnapchatCount:(long long)arg1;
- (void)setStickerSnapchatFromRecentsCount:(long long)arg1;
- (void)setStickerSnapchatList:(id)arg1;
- (void)setStickerTrackingCount:(long long)arg1;
- (void)setStickerUnlockedCount:(long long)arg1;
- (void)setStickerUnlockedList:(id)arg1;
- (void)setStickerUserEnterSearchCount:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setSwipeCount:(long long)arg1;
- (void)setTopsnapAdId:(id)arg1;
- (void)setTopsnapRequestId:(id)arg1;
- (void)setVenueTapIndex:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setVisualFilterIsSeen:(_Bool)arg1;
- (void)setWidgetValueList:(id)arg1;
- (void)setWithAnimated:(_Bool)arg1;
- (void)setWithAttachment:(_Bool)arg1;
- (void)setWithContextFilterEnabled:(_Bool)arg1;
- (void)setWithContextFilterHighEndModelEnabled:(_Bool)arg1;
- (void)setWithCropping:(_Bool)arg1;
- (void)setWithFraming:(_Bool)arg1;
- (void)setWithGallery:(_Bool)arg1;
- (void)setWithGeofilterTransition:(_Bool)arg1;
- (void)setWithGeolocation:(_Bool)arg1;
- (void)setWithPurikura:(_Bool)arg1;
- (void)setWithSearch:(_Bool)arg1;
- (void)setWithZooming:(_Bool)arg1;

@end

