//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSArray, NSDate, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry;

@protocol SCMemoriesDataMutatingMultiSnap <NSObject>
- (void)addMobMultiSnapWithVideoUrls:(NSArray *)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(NSString *)arg3 orientation:(long long)arg4 overlayFormats:(NSArray *)arg5 overlays:(NSArray *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 userContext:(SCCloudSyncTriggerUserContext *)arg10 externalId:(NSString *)arg11 displayName:(NSString *)arg12 entrySource:(long long)arg13 cameraFrontFacing:(_Bool)arg14 createTimeOfFirstSnap:(NSDate *)arg15 timeRanges:(NSArray *)arg16 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg17;
- (void)addMultiSnapWithVideoUrls:(NSArray *)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(NSString *)arg3 orientation:(long long)arg4 overlayFormats:(NSArray *)arg5 overlays:(NSArray *)arg6 location:(CLLocation *)arg7 isPrivate:(_Bool)arg8 isAutosave:(_Bool)arg9 isInfiniteDuration:(_Bool)arg10 cameraFrontFacing:(_Bool)arg11 createTimeOfFirstSnap:(NSDate *)arg12 timeRanges:(NSArray *)arg13 userContext:(SCCloudSyncTriggerUserContext *)arg14 currentEntry:(id <SCGalleryEntry>)arg15 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg16;
@end

