//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStoryLoader-Protocol.h"

@interface SCStoryMediaCacheLoader : NSObject <SCChatStoryLoader>
{
}

+ (void)_loadStoryBundleFromStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_shouldLoadMediaFromStory:(id)arg1 storyId:(id)arg2;
+ (id)findGroupStoryMatchingStoryId:(id)arg1;
+ (id)findStoryMatchingStoryId:(id)arg1 recipient:(id)arg2 sentByUser:(_Bool)arg3;
+ (void)loadChatMedia:(id)arg1 matchingStoryId:(id)arg2 recipient:(id)arg3 sentByUser:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)loadMedia:(id)arg1 fromStory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findGroupStoryMediaForStoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findStoryMediaForStoryId:(id)arg1 recipient:(id)arg2 sentByUser:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

