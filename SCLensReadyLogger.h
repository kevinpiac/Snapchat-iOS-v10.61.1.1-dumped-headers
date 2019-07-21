//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensEffectActivatorListener-Protocol.h"

@class NSLock, NSMutableDictionary, NSString, SCLensReadyEvent;

@interface SCLensReadyLogger : NSObject <SCLensEffectActivatorListener>
{
    NSString *_lensSessionId;
    SCLensReadyEvent *_lensReadyEvent;
    NSMutableDictionary *_applyDelayTimes;
    NSLock *_applyDelayTimesLock;
}

- (void).cxx_destruct;
- (void)_saveUpdateDelayTime:(id)arg1;
- (id)applyDelayForLensId:(id)arg1;
- (id)init;
- (void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3;
- (void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)updateLensSessionId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

