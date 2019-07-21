//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"
#import "SCObserving-Protocol.h"

@class NSString, SCLocationManager;
@protocol SCLocationRequest;

@interface SCLocationManagerProviderObserver : NSObject <SCLocationObserver, SCObserving>
{
    SCLocationManager *_locationManager;
    id <SCLocationRequest> _locationRequest;
    _Bool _isObserving;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithLocationManager:(id)arg1 locationRequest:(id)arg2;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (id)locationObserverIdentifier;
- (_Bool)locationObserverWantsActiveHeadingMonitoring;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (_Bool)locationObserverWantsBackgroundLocationMonitoring;
- (id)locationObserverWantsToMonitorBeaconRegions;
- (void)unobserve;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

