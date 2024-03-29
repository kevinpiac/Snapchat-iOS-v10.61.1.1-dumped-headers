//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewVideoProvider-Protocol.h"

@class AVAsset, NSNumber, NSString, NSURL;
@protocol OS_dispatch_semaphore, SCActiveVideoPathsProvider;

@interface SCPreviewURLVideoProvider : NSObject <SCPreviewVideoProvider>
{
    NSURL *_videoURL;
    NSURL *_backupURL;
    NSURL *_rawVideoDataFileURL;
    NSObject<OS_dispatch_semaphore> *_urlSemaphore;
    AVAsset *_asset;
    id <SCActiveVideoPathsProvider> _activeVideoPathsProvider;
    double _videoDuration;
    NSNumber *_codecType;
}

- (void).cxx_destruct;
- (id)_videoDataURL;
- (id)cachedWritableURL;
- (long long)codecType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)exportVideoData;
- (void)exportVideoForURL:(id)arg1;
- (id)initWithVideoURL:(id)arg1 rawVideoDataFileURL:(id)arg2 activeVideoPathsProvider:(id)arg3;
- (id)newVideoAsset;
- (void)newVideoAssetForQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removeBackingTemporaryVideo;
- (_Bool)shouldIncludeURLInActiveVideoPaths;
- (double)videoDuration;
- (id)writableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

