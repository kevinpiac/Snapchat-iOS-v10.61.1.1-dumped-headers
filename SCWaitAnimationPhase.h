//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAnimationPhase-Protocol.h"

@class NSString;

@interface SCWaitAnimationPhase : NSObject <SCAnimationPhase>
{
    double _waitTime;
}

+ (id)waitPhaseWithWaitTime:(double)arg1;
- (id)initWithWaitTime:(double)arg1;
- (void)performAnimationsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

