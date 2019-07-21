//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCAdEagerSwipeExperimentContext : SCExperimentContext
{
    _Bool _delayLoadUntilWebviewScheduledToTakeOver;
    _Bool _eagerSwipeEnabledForNonWebviewAds;
    _Bool _eagerSwipeEnabledForWebviewAds;
    double _eagerSwipeDistanceThresholdForNonWebviewAds;
    double _eagerSwipeVelocityThresholdForNonWebviewAds;
    NSString *_eagerSwipeLogicalConnectiveForNonWebviewAds;
    double _eagerSwipeDistanceThresholdForWebviewAds;
    double _eagerSwipeVelocityThresholdForWebviewAds;
    NSString *_eagerSwipeLogicalConnectiveForWebviewAds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool delayLoadUntilWebviewScheduledToTakeOver; // @synthesize delayLoadUntilWebviewScheduledToTakeOver=_delayLoadUntilWebviewScheduledToTakeOver;
@property(readonly, nonatomic) double eagerSwipeDistanceThresholdForNonWebviewAds; // @synthesize eagerSwipeDistanceThresholdForNonWebviewAds=_eagerSwipeDistanceThresholdForNonWebviewAds;
@property(readonly, nonatomic) double eagerSwipeDistanceThresholdForWebviewAds; // @synthesize eagerSwipeDistanceThresholdForWebviewAds=_eagerSwipeDistanceThresholdForWebviewAds;
@property(readonly, nonatomic) _Bool eagerSwipeEnabledForNonWebviewAds; // @synthesize eagerSwipeEnabledForNonWebviewAds=_eagerSwipeEnabledForNonWebviewAds;
@property(readonly, nonatomic) _Bool eagerSwipeEnabledForWebviewAds; // @synthesize eagerSwipeEnabledForWebviewAds=_eagerSwipeEnabledForWebviewAds;
@property(readonly, nonatomic) NSString *eagerSwipeLogicalConnectiveForNonWebviewAds; // @synthesize eagerSwipeLogicalConnectiveForNonWebviewAds=_eagerSwipeLogicalConnectiveForNonWebviewAds;
@property(readonly, nonatomic) NSString *eagerSwipeLogicalConnectiveForWebviewAds; // @synthesize eagerSwipeLogicalConnectiveForWebviewAds=_eagerSwipeLogicalConnectiveForWebviewAds;
@property(readonly, nonatomic) double eagerSwipeVelocityThresholdForNonWebviewAds; // @synthesize eagerSwipeVelocityThresholdForNonWebviewAds=_eagerSwipeVelocityThresholdForNonWebviewAds;
@property(readonly, nonatomic) double eagerSwipeVelocityThresholdForWebviewAds; // @synthesize eagerSwipeVelocityThresholdForWebviewAds=_eagerSwipeVelocityThresholdForWebviewAds;
- (id)experimentName;
- (void)setupParameters;

@end

