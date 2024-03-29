//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class NSString, SCMyGroupStories, SCNetworkImage, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCGroupUnifiedProfileStoriesDataSource : NSObject <SCStoriesModelUpdateListener, SCUpdateAnnouncing>
{
    NSString *_groupId;
    SCMyGroupStories *_groupStories;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCNetworkImage *_storyThumbnailNetworkImage;
    _Bool _hasUnviewedStories;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_dispatchAnnounceUpdate:(id)arg1;
- (void)_fetchAndUpdateGroupStories;
- (void)_fetchGroupStories;
- (void)_setGroupStoriesThumbnailImage:(id)arg1 hasUnviewedStories:(_Bool)arg2;
- (void)_updateGroupStories:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (_Bool)hasUnviewedStories;
- (id)initWithGroupId:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (id)storyThumbnailNetworkImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

