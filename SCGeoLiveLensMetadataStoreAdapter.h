//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilteredMetadataStore-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnlockablesControllerListener-Protocol.h"

@class NSArray, NSString, SCGenericLensMetadataStore, SCLocationManager, SCLocationServicesDataStore, SCUnlockablesController;

@interface SCGeoLiveLensMetadataStoreAdapter : NSObject <SCTraceEnabled, SCUnlockablesControllerListener, SCLensFilteredMetadataStore>
{
    SCGenericLensMetadataStore *_genericStore;
    SCLocationServicesDataStore *_locationServicesDataStore;
    SCUnlockablesController *_unlockablesController;
    SCLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)didUpdateGeoLens:(id)arg1;
- (id)initWithLocationServicesDataStore:(id)arg1 announcerPerformer:(id)arg2 unlockablesController:(id)arg3 locationManager:(id)arg4;
@property(readonly, nonatomic) NSArray *lenses;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
- (void)removeListener:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (_Bool)supportsFilteringForAttribute:(unsigned long long)arg1;
- (void)synchronize;
- (void)warmUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
