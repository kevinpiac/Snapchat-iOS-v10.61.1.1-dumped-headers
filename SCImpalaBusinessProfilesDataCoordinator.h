//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSMutableArray, NSString, SCDataHandler;
@protocol SCCanceling;

@interface SCImpalaBusinessProfilesDataCoordinator : NSObject <SCDataCoordinating>
{
    NSMutableArray *_listeners;
    SCDataHandler *_dataHandler;
    id <SCCanceling> _observer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_appendListener:(id)arg1;
- (void)_notifyChange;
- (void)_removeListener:(id)arg1;
- (void)_setUpObserver;
- (void)addDataUpdateListener:(id)arg1;
- (void)dealloc;
- (void)fetchBusinessProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithDataHandler:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
