//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSAProfilingEngine : NSObject
{
}

+ (void)beginRuntimeReport;
+ (void)cpuFrameBegin;
+ (void)cpuFrameEnd;
+ (void)disableAllFilters;
+ (void)disableFilter:(id)arg1;
+ (void)enableAllFilters;
+ (void)enableFilter:(id)arg1;
+ (void)endRuntimeReport;
+ (void)endScope:(id)arg1 withFilter:(id)arg2;
+ (void)endSession;
+ (void)frameIncrement;
+ (CDUnknownFunctionPointerType)getEndScope;
+ (CDUnknownFunctionPointerType)getStartScope;
+ (void)gpuFrameBegin;
+ (void)gpuFrameEnd;
+ (id)reportString;
+ (id)reportStringWithSessionId:(long long)arg1;
+ (void)setBackends:(int)arg1;
+ (void)startScope:(id)arg1 withFilter:(id)arg2;
+ (void)startSession;
+ (void)withSCTraceStart:(CDUnknownFunctionPointerType)arg1 withSCTraceEnd:(CDUnknownFunctionPointerType)arg2;

@end

