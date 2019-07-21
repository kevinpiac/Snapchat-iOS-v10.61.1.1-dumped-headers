//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPTimerProvider, NSOperationQueue, NSTimer;

@interface AMPSingleScheduler : NSObject
{
    NSOperationQueue *_queue;
    AMPTimerProvider *_timerProvider;
    NSTimer *_currentTimer;
    CDUnknownBlockType _scheduledBlock;
}

- (void).cxx_destruct;
- (void)_executeScheduledBlock;
- (void)cancelScheduledBlock;
@property(retain, nonatomic) NSTimer *currentTimer; // @synthesize currentTimer=_currentTimer;
- (id)initWithExecutionQueue:(id)arg1 timerProvider:(id)arg2;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)scheduleBlock:(CDUnknownBlockType)arg1 afterDelayInSec:(double)arg2;
@property(copy, nonatomic) CDUnknownBlockType scheduledBlock; // @synthesize scheduledBlock=_scheduledBlock;
@property(retain, nonatomic) AMPTimerProvider *timerProvider; // @synthesize timerProvider=_timerProvider;

@end

