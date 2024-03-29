//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SCCroppingState, SCDrawingMetadata, SCFiltersState, SCInfoStickerDataProvider, SCLensSnap3DAssetMetadata, SOJUGalleryBounceState, SOJUGalleryCropping, UIImage;
@protocol SCPreviewVideoProvider;

@interface SCPreviewBlob : NSObject
{
    _Bool _infiniteDuration;
    _Bool _audioEnabled;
    _Bool _hasAnimatedContent;
    unsigned long long _mediaType;
    long long _mediaOrientation;
    NSArray *_renderedOverlays;
    NSArray *_mediaOverlays;
    double _mediaAspectRatioForDisplay;
    id <SCPreviewVideoProvider> _videoProvider;
    id <SCPreviewVideoProvider> _originalVideoProvider;
    SOJUGalleryBounceState *_bounceState;
    UIImage *_image;
    double _mediaDuration;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    SOJUGalleryCropping *_serverGalleryCropping;
    NSArray *_captionsState;
    SCDrawingMetadata *_drawingMetadata;
    SCFiltersState *_filtersState;
    NSString *_liveCameraLensId;
    NSString *_previewLensId;
    NSNumber *_magicMomentFrameTime;
    NSArray *_stickersState;
    NSString *_snapCraftStyleId;
    NSString *_snapAttachmentUrl;
    NSString *_audioFilterStyleId;
    SCInfoStickerDataProvider *_infoStickerDataProvider;
    NSString *_bitmojiAvatarId;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(copy, nonatomic) NSString *audioFilterStyleId; // @synthesize audioFilterStyleId=_audioFilterStyleId;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) SOJUGalleryBounceState *bounceState; // @synthesize bounceState=_bounceState;
@property(retain, nonatomic) NSArray *captionsState; // @synthesize captionsState=_captionsState;
@property(nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(retain, nonatomic) SCDrawingMetadata *drawingMetadata; // @synthesize drawingMetadata=_drawingMetadata;
@property(retain, nonatomic) SCFiltersState *filtersState; // @synthesize filtersState=_filtersState;
@property(nonatomic) _Bool hasAnimatedContent; // @synthesize hasAnimatedContent=_hasAnimatedContent;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
@property(retain, nonatomic) SCInfoStickerDataProvider *infoStickerDataProvider; // @synthesize infoStickerDataProvider=_infoStickerDataProvider;
@property(copy, nonatomic) NSString *liveCameraLensId; // @synthesize liveCameraLensId=_liveCameraLensId;
@property(retain, nonatomic) NSNumber *magicMomentFrameTime; // @synthesize magicMomentFrameTime=_magicMomentFrameTime;
@property(nonatomic) double mediaAspectRatioForDisplay; // @synthesize mediaAspectRatioForDisplay=_mediaAspectRatioForDisplay;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) long long mediaOrientation; // @synthesize mediaOrientation=_mediaOrientation;
@property(copy, nonatomic) NSArray *mediaOverlays; // @synthesize mediaOverlays=_mediaOverlays;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) id <SCPreviewVideoProvider> originalVideoProvider; // @synthesize originalVideoProvider=_originalVideoProvider;
@property(copy, nonatomic) NSString *previewLensId; // @synthesize previewLensId=_previewLensId;
@property(copy, nonatomic) NSArray *renderedOverlays; // @synthesize renderedOverlays=_renderedOverlays;
@property(retain, nonatomic) SOJUGalleryCropping *serverGalleryCropping; // @synthesize serverGalleryCropping=_serverGalleryCropping;
@property(retain, nonatomic) SCLensSnap3DAssetMetadata *snap3DAssetMetadata; // @synthesize snap3DAssetMetadata=_snap3DAssetMetadata;
@property(copy, nonatomic) NSString *snapAttachmentUrl; // @synthesize snapAttachmentUrl=_snapAttachmentUrl;
@property(copy, nonatomic) NSString *snapCraftStyleId; // @synthesize snapCraftStyleId=_snapCraftStyleId;
@property(copy, nonatomic) NSArray *stickersState; // @synthesize stickersState=_stickersState;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;

@end

