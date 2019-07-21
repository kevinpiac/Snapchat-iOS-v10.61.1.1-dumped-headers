//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSArray, NSString, SCTSingleTaskPerformer;

@interface SCTV3GlobalConfigurationUpdater : NSObject <SCTV3SessionWrapperListener>
{
    NSArray *_configurations;
    SCTSingleTaskPerformer *_performer;
}

- (void).cxx_destruct;
- (void)_refreshStateForWrapper:(id)arg1 state:(id)arg2;
- (void)deregisterSessionWrapper:(id)arg1;
- (id)initWithNetworkServices:(id)arg1;
- (void)registerSessionWrapper:(id)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

