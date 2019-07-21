//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMapExploreDataStoreV1, SCMapLoggerSession, SCStopwatch;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapExploreLogger : NSObject
{
    SCMapExploreDataStoreV1 *_exploreDataStore;
    SCMapLoggerSession *_session;
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    SCStopwatch *_stopwatch;
}

- (void).cxx_destruct;
- (void)exploreDidCloseWithExitEvent:(long long)arg1 availableStatusCount:(unsigned long long)arg2 readStatusCount:(unsigned long long)arg3;
- (void)exploreDidDeleteStatus:(id)arg1;
- (void)exploreDidOpenWithSource:(long long)arg1 availableStatusCount:(unsigned long long)arg2 unreadStatusCount:(unsigned long long)arg3 visibleStatus:(id)arg4;
- (void)exploreDidTakeScreenshotOfStatus:(id)arg1;
- (void)exploreDidViewStatus:(id)arg1;
- (id)initWithExploreDataStore:(id)arg1 mapPeopleProvider:(id)arg2 loggerSession:(id)arg3;

@end

