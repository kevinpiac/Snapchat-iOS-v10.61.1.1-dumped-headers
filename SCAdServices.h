//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCAdServices : NSObject
{
    SCLazy *_adMediaMetadataCoordinator;
    SCLazy *_adLifecycleWatermarkEventsTracker;
    SCLazy *_adShake2ReportLogger;
    SCLazy *_adContentDelivery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *adContentDelivery; // @synthesize adContentDelivery=_adContentDelivery;
@property(readonly, nonatomic) SCLazy *adLifecycleWatermarkEventsTracker; // @synthesize adLifecycleWatermarkEventsTracker=_adLifecycleWatermarkEventsTracker;
@property(readonly, nonatomic) SCLazy *adMediaMetadataCoordinator; // @synthesize adMediaMetadataCoordinator=_adMediaMetadataCoordinator;
@property(readonly, nonatomic) SCLazy *adShake2ReportLogger; // @synthesize adShake2ReportLogger=_adShake2ReportLogger;
- (id)initWithAdMediaMetadataCoordinator:(id)arg1 adLifecycleWatermarkEventsTracker:(id)arg2 adShake2ReportLogger:(id)arg3 adContentDelivery:(id)arg4;

@end

