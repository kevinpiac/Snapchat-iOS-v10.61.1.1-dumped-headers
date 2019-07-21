//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedDataStoreSection;

@protocol SCDiscoverFeedDataMutating <NSObject, SCUpdateAnnouncing>
- (void)appendSection:(SCDiscoverFeedDataStoreSection *)arg1;
- (void)prependStories:(NSArray *)arg1 forFeedType:(unsigned long long)arg2;
- (void)removeStories:(NSArray *)arg1;
- (void)saveSections:(NSArray *)arg1;
- (void)updateStories:(NSArray *)arg1;
- (void)updateStoryWithCreator:(NSString *)arg1 isPublisher:(_Bool)arg2 isSubscribed:(_Bool)arg3 isOptedInNotification:(_Bool)arg4 isHidden:(_Bool)arg5;
@end
