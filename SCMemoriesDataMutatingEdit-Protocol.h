//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCCloudFSFile, SCCloudSyncTriggerUserContext, SCOverlayFormat, SOJUGallerySnapOverlay;
@protocol SCGalleryEntry, SCGallerySnap;

@protocol SCMemoriesDataMutatingEdit <NSObject>
- (void)replacePhoto:(id <SCGallerySnap>)arg1 cloudFile:(SCCloudFSFile *)arg2 entry:(id <SCGalleryEntry>)arg3 duration:(double)arg4 isInfiniteDuration:(_Bool)arg5 overlayFormat:(SCOverlayFormat *)arg6 overlay:(SOJUGallerySnapOverlay *)arg7 userContext:(SCCloudSyncTriggerUserContext *)arg8 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg9;
- (void)replaceVideo:(id <SCGallerySnap>)arg1 cloudFile:(SCCloudFSFile *)arg2 entry:(id <SCGalleryEntry>)arg3 overlayFormat:(SCOverlayFormat *)arg4 overlay:(SOJUGallerySnapOverlay *)arg5 isInfiniteDuration:(_Bool)arg6 userContext:(SCCloudSyncTriggerUserContext *)arg7 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg8;
- (void)updateEntry:(id <SCGalleryEntry>)arg1 addSnaps:(NSArray *)arg2 addPhotoAssets:(NSArray *)arg3 photoAssetMediaURLs:(NSArray *)arg4 photoAssetOrientations:(NSArray *)arg5 userContext:(SCCloudSyncTriggerUserContext *)arg6 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg7;
- (void)updateEntry:(id <SCGalleryEntry>)arg1 title:(NSString *)arg2 userContext:(SCCloudSyncTriggerUserContext *)arg3 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg4;
@end

