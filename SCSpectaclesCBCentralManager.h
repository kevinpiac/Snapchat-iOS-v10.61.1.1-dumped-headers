//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreBluetooth/CBCentralManager.h>

#import "SCSpectaclesCBCentralManagerEventListener-Protocol.h"

@class NSMutableSet, NSString, SCSpectaclesCBCentralManagerEventListenerAnnouncer;
@protocol SCPerforming;

@interface SCSpectaclesCBCentralManager : CBCentralManager <SCSpectaclesCBCentralManagerEventListener>
{
    NSMutableSet *_hitList;
    SCSpectaclesCBCentralManagerEventListenerAnnouncer *_announcer;
    id <SCPerforming> _performer;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_initWithAnnouncer:(id)arg1 performer:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) SCSpectaclesCBCentralManagerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)shutdown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

