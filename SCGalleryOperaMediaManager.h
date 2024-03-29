//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLagunaContentListener-Protocol.h"
#import "SCOperaGLCommandsProvider-Protocol.h"
#import "SCOperaMediaManager-Protocol.h"

@class NSMutableDictionary, NSString, SCGalleryGeolocationIndexer, SCGalleryOperaConfiguration, SCGalleryOperaLoadingProgressProvider, SCUserSession;
@protocol SCPerforming;

@interface SCGalleryOperaMediaManager : NSObject <SCGalleryLagunaContentListener, SCOperaMediaManager, SCOperaGLCommandsProvider>
{
    SCGalleryOperaConfiguration *_configuration;
    SCUserSession *_userSession;
    id <SCPerforming> _performer;
    NSMutableDictionary *_snapIdToDownloadRequest;
    NSMutableDictionary *_snapIdToCachingMediaRequest;
    NSMutableDictionary *_mediaIdToImageCallbackNumMap;
    NSMutableDictionary *_loadedImages;
    NSMutableDictionary *_loadedVideoAssets;
    NSMutableDictionary *_loadedGLCommands;
    NSMutableDictionary *_loadedAudioProcessorMix;
    NSMutableDictionary *_loadedReverseAudioData;
    NSMutableDictionary *_contentLoaders;
    SCGalleryGeolocationIndexer *_geoLocationIndexer;
    SCGalleryOperaLoadingProgressProvider *_loadingProgressProvider;
}

- (void).cxx_destruct;
- (id)_cacheAudioMixAndGeneratePagePropertiesForSnap:(id)arg1 audioProcessorMix:(id)arg2 reverseAudioData:(id)arg3;
- (id)_cacheGLCommandsAndGeneratePagePropertiesForSnap:(id)arg1 intermediateGLCommands:(id)arg2 midOutputGLCommand:(id)arg3 outputGLCommands:(id)arg4;
- (id)_cacheOverlayAndGeneratePagePropertiesForSnap:(id)arg1 screenOverlayImage:(id)arg2 mediaOverlayImage:(id)arg3;
- (void)_cancelAllPendingGallerySnapRequests;
- (void)_cancelPendingGallerySnapRequestsIfNecessary:(id)arg1;
- (_Bool)_checkMediaIsUnencrypted:(id)arg1;
- (void)_clearContentLoaders;
- (id)_extractUnlockableSnapInfo:(id)arg1 snapDetail:(id)arg2;
- (void)_fetchStreamingPackageForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fullMediaDownloadForGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_galleryCroppingIsIdentity:(id)arg1;
- (id)_generateGLVideoPagePropertiesFromSnapOverlay:(id)arg1 gallerySnapSize:(struct CGSize)arg2;
- (id)_generateSpectaclesOnlyPagePropertiesForSnap:(id)arg1;
- (void)_loadAddressForCameraRollAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadGalleryAnimatedImageSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadGalleryImageSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadGallerySnap3DMetadata:(id)arg1 detail:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadGallerySnapAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadGallerySnapContext:(id)arg1 detail:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadGallerySnapFirstFrame:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadGallerySnapLoadingBackgroundFrame:(id)arg1 snapDetail:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadGallerySnapPublisherLogo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadGallerySnapStreamingVideo:(id)arg1 snapDetail:(id)arg2 streamingPackage:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadGalleryVideoSnap:(id)arg1 snapDetail:(id)arg2 missingVideoTrackRetryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadMetaDataForGallerySnap:(id)arg1 snapDetail:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadVideoFastStartStatusForGallerySnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_loadedPropertyForImageSnap:(id)arg1 snapDetail:(id)arg2 image:(id)arg3 outputCommands:(id)arg4 midOutputGLCommand:(id)arg5 isFullResolution:(_Bool)arg6 mediaOverlay:(id)arg7 screenOverlay:(id)arg8 firstFrameImage:(id)arg9;
- (void)_logDidLoadImageForSnap:(id)arg1 sourceLevel:(long long)arg2;
- (void)_logFailedToRequestPlaybackVideForSnap:(id)arg1 playableRawContent:(_Bool)arg2 assetGenerated:(_Bool)arg3 error:(id)arg4;
- (id)_refetchVideoSnapDetailIfNeeded:(id)arg1;
- (void)_removeExistingLoadedGallerySnapMedias:(id)arg1;
- (_Bool)_requireDirectAccessToCloudFileForSnap:(id)arg1;
- (unsigned long long)_rotateDirectionForVideoSnap:(id)arg1;
- (_Bool)_shouldRotateLandscapeSnap:(id)arg1 snapDetail:(id)arg2;
- (void)_updateSpectaclesTransferProgress:(id)arg1;
- (void)attachPresentationTransitionFrame:(id)arg1 phAsset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attachPresentationTransitionFrame:(id)arg1 snap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (id)glAudioProcessorMixForKey:(id)arg1;
- (id)glCommandsForKey:(id)arg1;
- (id)glReverseAudioDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) SCGalleryOperaLoadingProgressProvider *loadingProgressProvider; // @synthesize loadingProgressProvider=_loadingProgressProvider;
- (_Bool)mediaExistLocallyForGallerySnap:(id)arg1;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)startToLoadCameraRollAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startToLoadGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startToLoadThumbnailForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startToLoadTransferringSpectaclesSnap:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unloadCameraRollAsset:(id)arg1;
- (void)unloadGallerySnap:(id)arg1;
- (void)unloadTransferringSpectaclesSnap:(id)arg1;
- (id)videoAssetForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

