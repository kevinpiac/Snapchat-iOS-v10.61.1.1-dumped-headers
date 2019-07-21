//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSDate, NSString, SCCloudSyncTriggerUserContext, SCLensSnap3DAssetMetadata, SCOverlayFormat, SOJUGallerySnapOverlay, UIImage;
@protocol SCPreviewVideoProvider;

@protocol SCMemoriesDataMutatingAutoSave <NSObject>
- (void)addAutosavedMobPhoto:(UIImage *)arg1 captureTimeUtc:(NSDate *)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(SCOverlayFormat *)arg5 overlay:(SOJUGallerySnapOverlay *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(SCCloudSyncTriggerUserContext *)arg10 externalId:(NSString *)arg11 displayName:(NSString *)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 snap3DAssetMetadata:(SCLensSnap3DAssetMetadata *)arg15 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg16;
- (void)addAutosavedMobVideoProvider:(id <SCPreviewVideoProvider>)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(NSDate *)arg3 orientation:(long long)arg4 overlayFormat:(SCOverlayFormat *)arg5 overlay:(SOJUGallerySnapOverlay *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(SCCloudSyncTriggerUserContext *)arg10 externalId:(NSString *)arg11 displayName:(NSString *)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg15;
- (void)addAutosavedMyStoryPhoto:(UIImage *)arg1 captureTimeUtc:(NSDate *)arg2 orientation:(long long)arg3 duration:(double)arg4 overlayFormat:(SCOverlayFormat *)arg5 overlay:(SOJUGallerySnapOverlay *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 snap3DAssetMetadata:(SCLensSnap3DAssetMetadata *)arg11 userContext:(SCCloudSyncTriggerUserContext *)arg12 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg13;
- (void)addAutosavedMyStoryVideoProvider:(id <SCPreviewVideoProvider>)arg1 sojuMediaType:(int)arg2 captureTimeUtc:(NSDate *)arg3 orientation:(long long)arg4 overlayFormat:(SCOverlayFormat *)arg5 overlay:(SOJUGallerySnapOverlay *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacing:(_Bool)arg10 userContext:(SCCloudSyncTriggerUserContext *)arg11 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg12;
@end

