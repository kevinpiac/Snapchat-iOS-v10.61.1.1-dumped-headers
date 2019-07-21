//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedDeviceCapacityAnalyzerListener-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"

@class NSArray, NSString, SCQueuePerformer, SCSnapScanner, SCUserSession;
@protocol OS_dispatch_semaphore;

@interface SCManagedVideoScanner : NSObject <SCManagedVideoDataSourceListener, SCManagedDeviceCapacityAnalyzerListener>
{
    SCSnapScanner *_snapScanner;
    NSObject<OS_dispatch_semaphore> *_activeSemaphore;
    double _maxFrameDuration;
    double _maxFrameDefaultDuration;
    double _maxFramePassiveDuration;
    float _restCycleOfBusyCycle;
    double _scanStartTime;
    _Bool _active;
    _Bool _shouldEmitEvent;
    CDUnknownBlockType _completionHandler;
    double _scanTimeout;
    unsigned long long _devicePosition;
    SCQueuePerformer *_performer;
    NSArray *_codeTypes;
    NSArray *_codeTypesOld;
    CDUnknownBlockType _scanResultsHandler;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_handleSnapScanResult:(id)arg1;
- (id)_scanCodeTypes;
- (id)initWithMaxFrameDefaultDuration:(double)arg1 maxFramePassiveDuration:(double)arg2 restCycle:(float)arg3;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
- (void)startScanAsynchronouslyWithScanConfiguration:(id)arg1;
- (void)stopScanAsynchronously;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

