//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCloudSyncTriggerUserContext;

@protocol SCMemoriesDataMutatingStory <NSObject>
- (void)createStoryWithSnaps:(NSArray *)arg1 photoAssets:(NSArray *)arg2 photoAssetMediaURLs:(NSArray *)arg3 photoAssetOrientations:(NSArray *)arg4 storyDisplayName:(NSString *)arg5 isPrivate:(_Bool)arg6 userContext:(SCCloudSyncTriggerUserContext *)arg7 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg8;
- (void)saveStoryWithId:(NSString *)arg1 storyDisplayName:(NSString *)arg2 entrySource:(long long)arg3 storySnaps:(NSArray *)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(NSDictionary *)arg6 userContext:(SCCloudSyncTriggerUserContext *)arg7 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg8;
@end

