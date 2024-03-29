//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCShakeTicket, SCShakeUploadThrottleController, SCSnapAirConfiguration;
@protocol SCSnapAirPerformer;

@interface SCShakeTicketUploader : NSObject
{
    SCShakeTicket *_mTicket;
    SCSnapAirConfiguration *_mConfiguration;
    NSString *_mUploadUrl;
    NSString *_mZipFilePath;
    id <SCSnapAirPerformer> _mPerformer;
    CDUnknownBlockType _mOnSuccess;
    CDUnknownBlockType _mOnTransientError;
    CDUnknownBlockType _mOnPermanentError;
    SCShakeUploadThrottleController *_mThrottleController;
    long long _mCurrentStep;
}

- (void).cxx_destruct;
- (void)_compressFiles;
- (void)_onComplete;
- (void)_processNextStep:(long long)arg1;
- (void)_reportShakeError:(id)arg1 shakeSetp:(long long)arg2;
- (void)_reportShakeTicketSend;
- (void)_reportShakeTicketUploadInPath:(id)arg1;
- (void)_uploadFiles;
- (void)_uploadTicket;
- (id)initWithTicket:(id)arg1 configuration:(id)arg2 performer:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onTransientError:(CDUnknownBlockType)arg5 onPermanentError:(CDUnknownBlockType)arg6;
@property long long mCurrentStep; // @synthesize mCurrentStep=_mCurrentStep;
- (void)run;

@end

