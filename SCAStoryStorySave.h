//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryStorySave : SCAUserTrackedEvent
{
    NSNumber *snapCount;
    NSNumber *withGallery;
    NSNumber *newSave;
    NSNumber *totalSnapCount;
    long long source;
    long long storyTypeSpecific;
    NSString *groupStoryId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGroupStoryId;
- (_Bool)getNewSave;
- (double)getPerUserSamplingRate;
- (long long)getSnapCount;
- (long long)getSource;
- (long long)getStoryTypeSpecific;
- (long long)getTotalSnapCount;
- (_Bool)getWithGallery;
- (id)init;
- (void)setGroupStoryId:(id)arg1;
- (void)setNewSave:(_Bool)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setTotalSnapCount:(long long)arg1;
- (void)setWithGallery:(_Bool)arg1;

@end
