//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAOfficialStoriesSettingsSessionEnd : SCAUserTrackedEvent
{
    NSNumber *viewAnalyticsTapCount;
    NSNumber *deeplinkShareCount;
    NSNumber *collaboratorsAddedCount;
    NSNumber *collaboratorsRemovedCount;
    NSNumber *totalOfficialStories;
    NSString *officialAccountUserId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCollaboratorsAddedCount;
- (long long)getCollaboratorsRemovedCount;
- (long long)getDeeplinkShareCount;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getOfficialAccountUserId;
- (double)getPerUserSamplingRate;
- (long long)getTotalOfficialStories;
- (long long)getViewAnalyticsTapCount;
- (void)setCollaboratorsAddedCount:(long long)arg1;
- (void)setCollaboratorsRemovedCount:(long long)arg1;
- (void)setDeeplinkShareCount:(long long)arg1;
- (void)setOfficialAccountUserId:(id)arg1;
- (void)setTotalOfficialStories:(long long)arg1;
- (void)setViewAnalyticsTapCount:(long long)arg1;

@end

