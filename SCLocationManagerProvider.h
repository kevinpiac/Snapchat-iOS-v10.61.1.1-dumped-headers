//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"
#import "SCLocationProvider-Protocol.h"

@class NSString, SCLocationListenerAnnouncer, SCLocationManager;
@protocol SCPerforming;

@interface SCLocationManagerProvider : NSObject <SCLocationObserver, SCLocationProvider>
{
    SCLocationManager *_locationManager;
    SCLocationListenerAnnouncer *_locationAnnouncer;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (id)beacons;
- (_Bool)hasAuthorizationStatus;
- (_Bool)hasRecentAuthorizationStatus;
- (id)heading;
- (id)initWithLocationManager:(id)arg1;
- (int)lastAuthorizationStatus;
- (_Bool)lastAuthorized;
- (id)location;
- (id)locationAnnouncer;
- (id)locationObserverDispatchQueue;
- (id)locationObserverIdentifier;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)onLocationAuthorizationStatusChange:(int)arg1;
- (void)onLocationError:(id)arg1;
- (void)onLocationHeadingChange:(id)arg1;
- (void)onLocationMonitoredBeaconRegionsUpdated;
- (void)onLocationUpdate:(id)arg1;
- (id)requestActiveLocationUpdatesWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

