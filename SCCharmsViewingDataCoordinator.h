//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSSet, NSString, SCCharmsDataCoordinator, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCCharmsViewingDataCoordinator : NSObject <SCDataCoordinating>
{
    NSSet *_viewedCharmIdentifiers;
    SCCharmsDataCoordinator *_charmsDataCoordinator;
    SCQueuePerformer *_dataUpdatePerformer;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceEventDataWithRequest:(id)arg1;
- (void)_handleDataRequest:(id)arg1;
- (void)_handleFlushCharmViewingsRequest:(id)arg1;
- (void)_handleViewCharmsRequest:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithCharmsDataCoordinator:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (id)viewedCharmIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

