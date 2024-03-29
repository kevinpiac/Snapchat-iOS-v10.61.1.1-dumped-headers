//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesCBCentralManagerEventListener-Protocol.h"

@class NSString;

@interface SCSpectaclesCBCentralManagerEventListenerAnnouncer : NSObject <SCSpectaclesCBCentralManagerEventListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCSpectaclesCBCentralManagerEventListener>, std::__1::allocator<__weak id<SCSpectaclesCBCentralManagerEventListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

