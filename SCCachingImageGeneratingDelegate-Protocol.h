//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCCachingImageGenerating;

@protocol SCCachingImageGeneratingDelegate <NSObject>
- (void)cachingImageGenerating:(SCCachingImageGenerating *)arg1 sourceLevel:(long long)arg2 imagesGenerated:(NSDictionary *)arg3 saveToDisk:(_Bool)arg4;
- (void)cachingImageGeneratingIsAccessed:(SCCachingImageGenerating *)arg1;
@end

