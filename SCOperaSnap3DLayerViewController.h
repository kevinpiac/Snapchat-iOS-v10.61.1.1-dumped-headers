//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensDataFetcherListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class CADisplayLink, CIContext, LSAComponentManager, NSMutableSet, NSString, SCLensSnap3DAssetMetadata, SCLensSnap3DManiphestAdapter, SCOperaSnap3DLayerView, SCPreviewDepthDisplayRemoteAssetsProvider, SCQueuePerformer, SCSocialLensUnlocker, SCTimeProvider, SCUserSession;
@protocol SCLensByIdRetrievable;

@interface SCOperaSnap3DLayerViewController : SCOperaLayerViewController <LSAEffectComponentListener, SCLensDataFetcherListener, SCTraceEnabled>
{
    LSAComponentManager *_componentManager;
    CADisplayLink *_displayLink;
    SCUserSession *_userSession;
    SCTimeProvider *_currentDateProvider;
    SCLensSnap3DManiphestAdapter *_maniphestAdapter;
    SCPreviewDepthDisplayRemoteAssetsProvider *_remoteAssetsProvider;
    id <SCLensByIdRetrievable> _lensByIdRetrievable;
    SCQueuePerformer *_lensProviderQueuePerformer;
    SCSocialLensUnlocker *_socialLensUnlocker;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
    struct __CVBuffer *_inputPixelBuffer;
    _Bool _isInputPixelBufferReady;
    _Bool _lensFetched;
    NSMutableSet *_assetIdsToFetch;
    CIContext *_ciContext;
    struct mutex _pixelBufferMutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activateLens:(id)arg1;
- (_Bool)_computeInputPixelBufferFromImage:(id)arg1;
- (void)_fetchLens:(id)arg1 withUserSession:(id)arg2;
- (id)_getAssetIdsToFetch;
- (id)_getSnappableMessage;
- (id)_getSocialLensUnlocker:(id)arg1;
- (_Bool)_isFromMemories;
- (id)_lensIdFromMetadata;
- (void)_processPixelBufferAndRender;
- (void)_render;
- (void)_setupRendering;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 snap3DAssetMetadata:(id)arg5;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)loadView;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCOperaSnap3DLayerView *view; // @dynamic view;

@end
