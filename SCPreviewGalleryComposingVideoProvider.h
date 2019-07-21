//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewGalleryVideoProvider.h"

#import "SCPreviewVideoProvider-Protocol.h"

@class AVAsset, NSArray, NSMutableArray, NSString, SCQueuePerformer;
@protocol SCEncryptedContentManagerDataProviding;

@interface SCPreviewGalleryComposingVideoProvider : SCPreviewGalleryVideoProvider <SCPreviewVideoProvider>
{
    NSArray *_snaps;
    NSArray *_cloudFiles;
    id <SCEncryptedContentManagerDataProviding> _contentDataProvider;
    AVAsset *_composition;
    NSMutableArray *_assets;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_asyncNewVideoAssetFromSnap:(id)arg1 cloudFile:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)_composeAssets;
- (id)_newVideoAssetFromSnap:(id)arg1 cloudFile:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnaps:(id)arg1 cloudFiles:(id)arg2 contentDataProvider:(id)arg3;
- (id)newVideoAsset;
- (void)newVideoAssetForQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (double)videoDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
