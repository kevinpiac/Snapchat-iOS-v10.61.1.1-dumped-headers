//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesMySnapClusterInfo, SCStoriesMyStorySnapInfo;

@interface SCStoriesMyLiveStorySnapInfo : NSObject <NSCopying>
{
    SCStoriesMyStorySnapInfo *_myStorySnapInfo;
    SCStoriesMySnapClusterInfo *_storySnapClusterInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMyStorySnapInfo:(id)arg1 storySnapClusterInfo:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCStoriesMyStorySnapInfo *myStorySnapInfo; // @synthesize myStorySnapInfo=_myStorySnapInfo;
@property(readonly, copy, nonatomic) SCStoriesMySnapClusterInfo *storySnapClusterInfo; // @synthesize storySnapClusterInfo=_storySnapClusterInfo;

@end

