//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAGeofilterGeofilterAction.h"

@class NSNumber, NSString;

@interface SCAGeofilterVenueFeedback : SCAGeofilterGeofilterAction
{
    NSNumber *suggestedVenueRank;
    NSString *venueFeedbackType;
    NSString *suggestedVenueId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSuggestedVenueId;
- (long long)getSuggestedVenueRank;
- (id)getVenueFeedbackType;
- (void)setSuggestedVenueId:(id)arg1;
- (void)setSuggestedVenueRank:(long long)arg1;
- (void)setVenueFeedbackType:(id)arg1;

@end

