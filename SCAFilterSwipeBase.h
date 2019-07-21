//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASwipeBase.h"

@class NSDate, NSNumber, NSString;

@interface SCAFilterSwipeBase : SCASwipeBase
{
    NSNumber *tapCount;
    long long swipeDirection;
    NSString *carouselConfigId;
    NSString *carouselVersionId;
    NSDate *snapTakenTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCarouselConfigId;
- (id)getCarouselVersionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSnapTakenTs;
- (long long)getSwipeDirection;
- (long long)getTapCount;
- (id)init;
- (void)setCarouselConfigId:(id)arg1;
- (void)setCarouselVersionId:(id)arg1;
- (void)setSnapTakenTs:(id)arg1;
- (void)setSwipeDirection:(long long)arg1;
- (void)setTapCount:(long long)arg1;

@end

