//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraImageCaptureLogger-Protocol.h"

@class SCLogger;

@interface SCCoreCameraImageCaptureLogger : NSObject <SCCameraImageCaptureLogger>
{
    SCLogger *_logger;
}

- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1;
- (void)logCameraSnapCreateStepWithCaptureSessionId:(id)arg1 stepName:(id)arg2 stepDescription:(id)arg3;
- (void)logDirectSnapActionEventWithCaptureSessionId:(id)arg1 actionType:(long long)arg2 pageName:(id)arg3 buttonName:(long long)arg4 lensesActive:(_Bool)arg5;

@end

