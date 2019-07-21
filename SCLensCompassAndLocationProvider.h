//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSACompassDataProviderProtocol-Protocol.h"
#import "LSALocationDataProviderProtocol-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class LSALocationParams, NSString, SCFeatureSettingsManager, SCUserSession;

@interface SCLensCompassAndLocationProvider : NSObject <SCTraceEnabled, SCLocationObserver, LSACompassDataProviderProtocol, LSALocationDataProviderProtocol>
{
    SCUserSession *_userSession;
    _Bool _didRequestHeadingUpdates;
    _Bool _didRequestLocationUpdates;
    SCFeatureSettingsManager *_featureSettingsManager;
    LSALocationParams *_trackingParams;
}

- (void).cxx_destruct;
- (void)_handleLocationPermissionAuthorized:(_Bool)arg1;
- (void)dealloc;
@property _Bool didRequestHeadingUpdates; // @synthesize didRequestHeadingUpdates=_didRequestHeadingUpdates;
@property _Bool didRequestLocationUpdates; // @synthesize didRequestLocationUpdates=_didRequestLocationUpdates;
@property(retain, nonatomic) SCFeatureSettingsManager *featureSettingsManager; // @synthesize featureSettingsManager=_featureSettingsManager;
- (id)heading;
- (id)initWithUserSession:(id)arg1;
- (id)location;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverDispatchQueue;
- (id)locationObserverIdentifier;
- (_Bool)locationObserverWantsActiveHeadingMonitoring;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)requestLocationAndCompassPermission;
@property(retain) LSALocationParams *trackingParams; // @synthesize trackingParams=_trackingParams;
- (void)startCompassUpdates;
- (void)startLocationUpdates:(id)arg1;
- (void)stopCompassUpdates;
- (void)stopLocationUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

