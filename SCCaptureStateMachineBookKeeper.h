//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SCCaptureStateMachineBookKeeper : NSObject
{
    NSDate *_lastStateStartTime;
}

- (void).cxx_destruct;
- (void)logAPICalled:(id)arg1 context:(id)arg2;
- (void)state:(unsigned long long)arg1 illegalAPIcalled:(id)arg2 callStack:(id)arg3 context:(id)arg4;
- (void)stateTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 context:(id)arg3;

@end

