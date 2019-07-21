//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString, SCAMultiSnapInfo, SCAUserTags;

@interface SCADirectSnapSendBase : SCAUserTrackedEvent
{
    NSNumber *animatedStickerCount;
    NSNumber *animatedFilterCount;
    NSNumber *withAnimated;
    NSNumber *multiSnapCount;
    NSNumber *multiSnapIndex;
    NSNumber *correspondentCount;
    NSNumber *captionTracking;
    NSNumber *captionHasStyling;
    NSNumber *drawing;
    NSNumber *filterReverse;
    NSNumber *flash;
    NSNumber *handsFree;
    NSNumber *withGallery;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    NSNumber *altitudeMeter;
    NSNumber *inviteRecipientCount;
    NSNumber *inviteRecipientShown;
    NSNumber *viewTimeSec;
    NSNumber *camera;
    NSNumber *caption;
    NSNumber *captionAddCount;
    NSNumber *captionDeletionCount;
    NSNumber *captionUseCount;
    NSNumber *recipientCount;
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
    NSNumber *swipeCount;
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
    NSNumber *withMyStory;
    NSNumber *withOurStory;
    NSNumber *storyPostCount;
    NSNumber *reply;
    NSNumber *withSearch;
    NSNumber *galleryMediaSync;
    NSNumber *withAttachment;
    NSNumber *withCropping;
    NSNumber *withRecoveredMedia;
    NSNumber *withSnapReplySticker;
    NSNumber *faceFrontCameraCount;
    NSNumber *faceBackCameraCount;
    NSNumber *lensIndexPos;
    NSNumber *lensIndexCount;
    NSNumber *groupNonUniqueUserRecipientCount;
    NSNumber *groupUniqueUserRecipientCount;
    NSNumber *totalUniqueUserRecipientCount;
    NSNumber *withMagicWandApplied;
    long long deletedSegments;
    long long filterInfo;
    long long filterMotion;
    long long filterVisual;
    long long galleryContextMenuSource;
    long long mediaType;
    long long source;
    long long videoMode;
    long long roleType;
    NSString *subpageName;
    NSString *correspondentId;
    NSString *filterWeatherTemperatureUnit;
    NSString *filterWeatherViewTypeInfo;
    NSString *venueId;
    NSString *stickerEmojiList;
    NSString *stickerSnapchatList;
    NSString *stickerBitmojiList;
    NSString *stickerInfoList;
    NSString *stickerContextualList;
    NSString *stickerUnlockedList;
    NSString *stickerGiphyList;
    NSString *captionStyleList;
    NSString *lagunaUserAgent;
    NSString *lagunaDeviceId;
    NSString *specsContentId;
    NSString *brushStroke;
    NSString *drawingV2BrushStrokes;
    NSString *purikuraResourceId;
    NSString *audioToolName;
    NSString *contextFilterId;
    NSString *contextFilterSkyType;
    NSString *contextFilterPortraitType;
    NSString *galleryMediaId;
    NSString *mischiefId;
    NSString *snapcraftStyleId;
    NSString *facecraftStyleId;
    NSString *lensBundleUrl;
    NSString *lensInfo;
    NSString *widgetValueList;
    NSString *stickerPackIds;
    NSString *inviteIdHash;
    NSString *ghost_correspondent_id;
    NSDate *snapCreateTs;
    SCAMultiSnapInfo *multiSnapInfo;
    SCAUserTags *userTags;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAltitudeMeter;
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
- (long long)getCamera;
- (long long)getCaption;
- (long long)getCaptionAddCount;
- (long long)getCaptionDeletionCount;
- (_Bool)getCaptionHasStyling;
- (id)getCaptionStyleList;
- (_Bool)getCaptionTracking;
- (long long)getCaptionUseCount;
- (long long)getContextFilterGeneratedCount;
- (id)getContextFilterId;
- (_Bool)getContextFilterIsSeen;
- (id)getContextFilterPortraitType;
- (id)getContextFilterSkyType;
- (long long)getCorrespondentCount;
- (id)getCorrespondentId;
- (long long)getDeletedSegments;
- (_Bool)getDrawing;
- (id)getDrawingV2BrushStrokes;
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
- (long long)getFilterInfo;
- (long long)getFilterMotion;
- (_Bool)getFilterReverse;
- (long long)getFilterVisual;
- (id)getFilterWeatherTemperatureUnit;
- (id)getFilterWeatherViewTypeInfo;
- (_Bool)getFlash;
- (long long)getGalleryContextMenuSource;
- (id)getGalleryMediaId;
- (_Bool)getGalleryMediaSync;
- (id)getGhost_correspondent_id;
- (long long)getGroupNonUniqueUserRecipientCount;
- (long long)getGroupUniqueUserRecipientCount;
- (_Bool)getHandsFree;
- (id)getInviteIdHash;
- (long long)getInviteRecipientCount;
- (long long)getInviteRecipientShown;
- (id)getLagunaDeviceId;
- (id)getLagunaUserAgent;
- (id)getLensBundleUrl;
- (long long)getLensIndexCount;
- (long long)getLensIndexPos;
- (id)getLensInfo;
- (long long)getMagicCancelCount;
- (long long)getMagicFinalEditCount;
- (_Bool)getMagicHasMagicImage;
- (long long)getMagicSessionCount;
- (long long)getMagicTotalEditCount;
- (long long)getMediaType;
- (id)getMischiefId;
- (long long)getMultiSnapCount;
- (long long)getMultiSnapIndex;
- (id)getMultiSnapInfo;
- (double)getPerUserSamplingRate;
- (long long)getPrefixMatchStickerTagSelectCount;
- (long long)getPretypeStickerTagSelectCount;
- (long long)getPurikuraCancelCount;
- (long long)getPurikuraLastDrawCount;
- (id)getPurikuraResourceId;
- (long long)getPurikuraSessionCount;
- (long long)getPurikuraTotalEditCount;
- (long long)getRecipientCount;
- (_Bool)getReply;
- (long long)getRoleType;
- (id)getSnapCreateTs;
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
- (long long)getStoryPostCount;
- (id)getSubpageName;
- (long long)getSwipeCount;
- (long long)getTotalUniqueUserRecipientCount;
- (id)getUserTags;
- (id)getVenueId;
- (long long)getVideoMode;
- (double)getViewTimeSec;
- (_Bool)getVisualFilterIsSeen;
- (id)getWidgetValueList;
- (_Bool)getWithAnimated;
- (_Bool)getWithAttachment;
- (_Bool)getWithContextFilterEnabled;
- (_Bool)getWithContextFilterHighEndModelEnabled;
- (_Bool)getWithCropping;
- (_Bool)getWithGallery;
- (_Bool)getWithMagicWandApplied;
- (_Bool)getWithMyStory;
- (_Bool)getWithOurStory;
- (_Bool)getWithPurikura;
- (_Bool)getWithRecoveredMedia;
- (_Bool)getWithSearch;
- (_Bool)getWithSnapReplySticker;
- (id)init;
- (void)setAltitudeMeter:(long long)arg1;
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
- (void)setCamera:(long long)arg1;
- (void)setCaption:(long long)arg1;
- (void)setCaptionAddCount:(long long)arg1;
- (void)setCaptionDeletionCount:(long long)arg1;
- (void)setCaptionHasStyling:(_Bool)arg1;
- (void)setCaptionStyleList:(id)arg1;
- (void)setCaptionTracking:(_Bool)arg1;
- (void)setCaptionUseCount:(long long)arg1;
- (void)setContextFilterGeneratedCount:(long long)arg1;
- (void)setContextFilterId:(id)arg1;
- (void)setContextFilterIsSeen:(_Bool)arg1;
- (void)setContextFilterPortraitType:(id)arg1;
- (void)setContextFilterSkyType:(id)arg1;
- (void)setCorrespondentCount:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setDeletedSegments:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setDrawingV2BrushStrokes:(id)arg1;
- (void)setEraserCancelCount:(long long)arg1;
- (void)setEraserIsInpainted:(_Bool)arg1;
- (void)setEraserLastEraseCount:(long long)arg1;
- (void)setEraserSessionCount:(long long)arg1;
- (void)setEraserTotalEraseCount:(long long)arg1;
- (void)setFaceBackCameraCount:(long long)arg1;
- (void)setFaceFrontCameraCount:(long long)arg1;
- (void)setFacecraftStyleId:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterMotion:(long long)arg1;
- (void)setFilterReverse:(_Bool)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFilterWeatherTemperatureUnit:(id)arg1;
- (void)setFilterWeatherViewTypeInfo:(id)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setGalleryMediaId:(id)arg1;
- (void)setGalleryMediaSync:(_Bool)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setGroupNonUniqueUserRecipientCount:(long long)arg1;
- (void)setGroupUniqueUserRecipientCount:(long long)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)setInviteIdHash:(id)arg1;
- (void)setInviteRecipientCount:(long long)arg1;
- (void)setInviteRecipientShown:(long long)arg1;
- (void)setLagunaDeviceId:(id)arg1;
- (void)setLagunaUserAgent:(id)arg1;
- (void)setLensBundleUrl:(id)arg1;
- (void)setLensIndexCount:(long long)arg1;
- (void)setLensIndexPos:(long long)arg1;
- (void)setLensInfo:(id)arg1;
- (void)setMagicCancelCount:(long long)arg1;
- (void)setMagicFinalEditCount:(long long)arg1;
- (void)setMagicHasMagicImage:(_Bool)arg1;
- (void)setMagicSessionCount:(long long)arg1;
- (void)setMagicTotalEditCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setMultiSnapCount:(long long)arg1;
- (void)setMultiSnapIndex:(long long)arg1;
- (void)setMultiSnapInfo:(id)arg1;
- (void)setPrefixMatchStickerTagSelectCount:(long long)arg1;
- (void)setPretypeStickerTagSelectCount:(long long)arg1;
- (void)setPurikuraCancelCount:(long long)arg1;
- (void)setPurikuraLastDrawCount:(long long)arg1;
- (void)setPurikuraResourceId:(id)arg1;
- (void)setPurikuraSessionCount:(long long)arg1;
- (void)setPurikuraTotalEditCount:(long long)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setReply:(_Bool)arg1;
- (void)setRoleType:(long long)arg1;
- (void)setSnapCreateTs:(id)arg1;
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
- (void)setStoryPostCount:(long long)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setSwipeCount:(long long)arg1;
- (void)setTotalUniqueUserRecipientCount:(long long)arg1;
- (void)setUserTags:(id)arg1;
- (void)setVenueId:(id)arg1;
- (void)setVideoMode:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setVisualFilterIsSeen:(_Bool)arg1;
- (void)setWidgetValueList:(id)arg1;
- (void)setWithAnimated:(_Bool)arg1;
- (void)setWithAttachment:(_Bool)arg1;
- (void)setWithContextFilterEnabled:(_Bool)arg1;
- (void)setWithContextFilterHighEndModelEnabled:(_Bool)arg1;
- (void)setWithCropping:(_Bool)arg1;
- (void)setWithGallery:(_Bool)arg1;
- (void)setWithMagicWandApplied:(_Bool)arg1;
- (void)setWithMyStory:(_Bool)arg1;
- (void)setWithOurStory:(_Bool)arg1;
- (void)setWithPurikura:(_Bool)arg1;
- (void)setWithRecoveredMedia:(_Bool)arg1;
- (void)setWithSearch:(_Bool)arg1;
- (void)setWithSnapReplySticker:(_Bool)arg1;

@end

