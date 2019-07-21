//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataProviderRegistryUpdatable-Protocol.h"
#import "SCLensUserSessionLifeCycleListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensDataProviderRegistryUpdateListenerAnnouncer, SCLensUserSessionLifeCycleNotifier;
@protocol SCLensCameraScreenDataProviderProtocol, SCLensUserSessionProvider;

@interface SCLensDataProviderRegistry : NSObject <SCTraceEnabled, SCLensUserSessionLifeCycleListener, SCLensDataProviderRegistryUpdatable>
{
    id <SCLensUserSessionProvider> _userSessionProvider;
    long long _replyCameraType;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    SCLensDataProviderRegistryUpdateListenerAnnouncer *_updateAnnouncer;
    SCLensUserSessionLifeCycleNotifier *_lensUserSessionLifeCycleNotifier;
}

+ (id)createAllLensesByIdRetrievableWithUserSessionProvider:(id)arg1;
+ (id)createLensDataProviderWithUserSessionProvider:(id)arg1 configuration:(id)arg2;
+ (id)createLensDataProviderWithUserSessionProvider:(id)arg1 ownerContextDescription:(id)arg2;
- (void).cxx_destruct;
- (void)_clearLensDataProvider;
- (void)_notifyUpdateListeners;
- (_Bool)addUpdateListener:(id)arg1;
@property(readonly, nonatomic) long long cameraViewType;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> currentLensDataProvider;
- (id)initWithUserSessionProvider:(id)arg1 lensUserSessionLifeCycleNotifier:(id)arg2;
- (void)lensUserSession:(id)arg1 didChangeIsValidState:(_Bool)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)setLensDataProvider:(id)arg1;
- (void)updateLensDataProvider:(id)arg1;
- (void)updateLensDataProviderWithCameraType:(long long)arg1 bitmojiLinked:(_Bool)arg2 friendBitmojiLinked:(_Bool)arg3 ownerContextDescription:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
