//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface SCStoryLogger : NSObject
{
    NSString *_currentViewNextStorySnapEventUniqueId;
    NSMutableSet *_viewedStoriesUsernames;
    double _timeOfViewingStories;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_isNextStoryFirstSnap:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;
- (void)logDownloadStoryEnd:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)logEndViewingStory:(id)arg1;
- (void)logPostStory:(id)arg1;
- (void)logStartViewingFriendStories:(id)arg1;
- (void)logStoryReadyToPlay:(id)arg1;
@property(nonatomic) double timeOfViewingStories; // @synthesize timeOfViewingStories=_timeOfViewingStories;
@property(retain, nonatomic) NSMutableSet *viewedStoriesUsernames; // @synthesize viewedStoriesUsernames=_viewedStoriesUsernames;

@end

