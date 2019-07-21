//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaMediaManager-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCQueuePerformer, SCStreamingResourceLoader, SCUserSession;
@protocol SCStoriesMediaCoordinating, SCStreamingURLProviding;

@interface SCFriendStoryOperaMediaManager : NSObject <SCOperaMediaManager>
{
    SCUserSession *_userSession;
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    NSMutableDictionary *_loadedImages;
    NSMutableDictionary *_loadedVideoAssets;
    NSMutableDictionary *_preparingVideoAssets;
    NSMutableSet *_shouldBePreparedStoryClientIds;
    NSMutableDictionary *_storyClientIDToError;
    id <SCStreamingURLProviding> _streamingURLProvider;
    SCStreamingResourceLoader *_streamingResourceLoader;
    SCQueuePerformer *_queuePerformer;
    NSString *_tempDirectory;
    NSMutableDictionary *_preparedStoryPageProperties;
    NSMutableDictionary *_loadingBackgroundImagePreparedStoryPageProperties;
}

+ (id)firstFrameKeyForStorySnap:(id)arg1;
+ (id)imageKeyForStorySnap:(id)arg1;
+ (id)loadingScreenImageKeyForStorySnap:(id)arg1;
+ (id)overlayImageKeyForStorySnap:(id)arg1;
+ (id)processFirstFrameImage:(id)arg1 forAudioStitchInfo:(id)arg2;
+ (id)videoAssetKeyForStorySnap:(id)arg1;
- (void).cxx_destruct;
- (id)_buildLoadedPropertiesForStorySnap:(id)arg1 storiesContent:(id)arg2 firstFrameImage:(id)arg3 overlayImage:(id)arg4;
- (id)_extractFirstImageFromVideoAsset:(id)arg1;
- (id)_loadVideoAssetPropertiesFuture:(id)arg1 storySnap:(id)arg2;
- (void)_prepareImageMediaForStorySnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_prepareOperaPropertiesForStorySnap:(id)arg1;
- (id)_prepareVideoAssetAfterWritingVideoToDisk:(id)arg1 data:(id)arg2;
- (id)_prepareVideoAssetForInMemoryPlaybackUsingData:(id)arg1;
- (id)_prepareVideoAssetForProgressiveDownloadOfStorySnap:(id)arg1 data:(id)arg2;
- (void)_prepareVideoMediaForStorySnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_preparedPagePropertiesForStorySnap:(id)arg1;
- (id)_queryMediaCoordinatorForStorySnap:(id)arg1;
- (void)_setPreparedPageProperties:(id)arg1 forStorySnap:(id)arg2;
- (id)_tempVideoPathForStorySnap:(id)arg1;
- (id)_videoAssetFutureForData:(id)arg1 storySnap:(id)arg2;
- (id)_videoAssetFutureForStoriesContent:(id)arg1 storySnap:(id)arg2;
- (void)_writeVideoData:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)errorForStorySnap:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 storiesMediaCoordinator:(id)arg2 streamingResourceLoader:(id)arg3;
@property(readonly, nonatomic) NSMutableDictionary *loadingBackgroundImagePreparedStoryPageProperties; // @synthesize loadingBackgroundImagePreparedStoryPageProperties=_loadingBackgroundImagePreparedStoryPageProperties;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)prepareToViewStorySnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSMutableDictionary *preparedStoryPageProperties; // @synthesize preparedStoryPageProperties=_preparedStoryPageProperties;
- (void)removeImageForKey:(id)arg1;
- (id)removePreparedStorySnap:(id)arg1;
- (id)removeStoryLoadingLayerImageForStorySnap:(id)arg1;
- (void)removeVideoForKey:(id)arg1 storySnap:(id)arg2;
- (void)setError:(id)arg1 forStorySnap:(id)arg2;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setVideoAsset:(id)arg1 forKey:(id)arg2;
- (_Bool)shouldPrepareToViewStorySnap:(id)arg1;
- (_Bool)storySnapIsPrepared:(id)arg1;
- (id)updateStoryLoadingLayerImageForStorySnap:(id)arg1 loadedImageKey:(id)arg2;
- (id)videoAssetForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

