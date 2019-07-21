//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLagunaContentListener-Protocol.h"

@class NSMutableArray, NSString, SCCloudFSFile, SCGalleryLagunaContentListenerAnnouncer, SCSpectaclesContent, SCUserSession;
@protocol SCGallerySnap, SCPerforming;

@interface SCGalleryLagunaContentLoader : NSObject <SCGalleryLagunaContentListener>
{
    id <SCGallerySnap> _snap;
    SCSpectaclesContent *_content;
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    SCCloudFSFile *_cloudFile;
    NSMutableArray *_requests;
    SCGalleryLagunaContentListenerAnnouncer *_contentLoadingAnnouncer;
}

- (void).cxx_destruct;
- (id)_device;
- (void)_ensureAuxiliaryContentStorePopulated;
- (void)_requestAVAssetWithSnap:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 cloudFile:(id)arg3 queue:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)addLagunaContentListener:(id)arg1;
- (_Bool)canBeTransferredFromLagunaDeviceForContentComponent:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *contentUUID;
@property(readonly, copy) NSString *description;
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(id)arg2;
- (id)downloadThumbnailWithQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithSnap:(id)arg1 content:(id)arg2 performer:(id)arg3 userSession:(id)arg4;
- (_Bool)isAvailableLocallyForContentComponent:(unsigned long long)arg1;
- (double)loadingProgressForContentComponent:(unsigned long long)arg1;
- (void)removeLagunaContentListener:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void)requestAVAssetWithAutomaticallyLoadedAssetKeys:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)requestImageForContentComponent:(unsigned long long)arg1;
- (_Bool)showTransferProgressForComponents:(unsigned long long)arg1;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(readonly, nonatomic) NSString *snapId;
- (double)transferProgressForComponents:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
