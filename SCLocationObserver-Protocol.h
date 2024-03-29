//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, NSArray, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCLocationObserver <NSObject>
- (NSObject<OS_dispatch_queue> *)locationObserverDispatchQueue;
- (NSString *)locationObserverIdentifier;
- (_Bool)locationObserverWantsActiveLocationMonitoring;

@optional
- (double)locationObserverDesiredAccuracy;
- (_Bool)locationObserverWantsActiveHeadingMonitoring;
- (_Bool)locationObserverWantsBackgroundLocationMonitoring;
- (NSArray *)locationObserverWantsToMonitorBeaconRegions;
- (void)onLocationAuthorizationStatusChange:(int)arg1;
- (void)onLocationError:(NSError *)arg1;
- (void)onLocationHeadingChange:(CLHeading *)arg1;
- (void)onLocationMonitoredBeaconRegionsUpdated;
- (void)onLocationUpdate:(CLLocation *)arg1;
@end

