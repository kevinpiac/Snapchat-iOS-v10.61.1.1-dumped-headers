//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCStoriesSnapPlaybackInfo;

@interface SCStoriesMyStoriesUpdateRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoriesSnapPlaybackInfo *_postRegularStorySnap_storySnap;
    NSString *_postCustomStorySnap_storyId;
    SCStoriesSnapPlaybackInfo *_postCustomStorySnap_storySnap;
    NSArray *_deleteRegularStorySnaps_storySnapClientIds;
    NSString *_deleteCustomStorySnaps_storyId;
    NSArray *_deleteCustomStorySnaps_storySnapClientIds;
}

+ (id)deleteCustomStorySnapsWithStoryId:(id)arg1 storySnapClientIds:(id)arg2;
+ (id)deleteRegularStorySnapsWithStorySnapClientIds:(id)arg1;
+ (id)postCustomStorySnapWithStoryId:(id)arg1 storySnap:(id)arg2;
+ (id)postRegularStorySnapWithStorySnap:(id)arg1;
+ (id)syncMyStories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSyncMyStories:(CDUnknownBlockType)arg1 postRegularStorySnap:(CDUnknownBlockType)arg2 postCustomStorySnap:(CDUnknownBlockType)arg3 deleteRegularStorySnaps:(CDUnknownBlockType)arg4 deleteCustomStorySnaps:(CDUnknownBlockType)arg5;

@end

