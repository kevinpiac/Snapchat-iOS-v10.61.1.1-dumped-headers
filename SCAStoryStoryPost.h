//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryStoryPost : SCAUserTrackedEvent
{
    NSNumber *withSearch;
    NSNumber *snapCount;
    NSNumber *snapTimeSec;
    long long snapSource;
    long long galleryContextMenuSource;
    long long storyType;
    long long storyTypeSpecific;
    NSString *galleryCollectionCategory;
    NSString *galleryCollectionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGalleryCollectionCategory;
- (id)getGalleryCollectionId;
- (long long)getGalleryContextMenuSource;
- (double)getPerUserSamplingRate;
- (long long)getSnapCount;
- (long long)getSnapSource;
- (double)getSnapTimeSec;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (_Bool)getWithSearch;
- (id)init;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setWithSearch:(_Bool)arg1;

@end

