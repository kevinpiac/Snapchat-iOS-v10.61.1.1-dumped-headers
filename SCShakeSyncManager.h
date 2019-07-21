//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCShakeTicket, SCShakeUploadThrottleController, SCSnapAirConfiguration;

@interface SCShakeSyncManager : NSObject
{
    SCShakeUploadThrottleController *_mThrottleController;
    _Bool _mIsCanceled;
    SCShakeTicket *_mCurrentTicket;
    long long _mCurrentState;
    NSString *_mLastBackoffTicketId;
    SCSnapAirConfiguration *_mConfiguration;
}

+ (void)deleteInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_checkNextTicketInternal;
- (void)_cleanLogFilesInternal;
- (void)_completeUploadTicket:(id)arg1 isUploadSucceed:(_Bool)arg2;
- (void)_executePendingTicketInternal;
- (long long)_getBackupOffTime:(id)arg1;
- (_Bool)_isIdleState;
- (void)_transitionToState:(long long)arg1;
- (void)_transitionToState:(long long)arg1 backOffDelayMillis:(long long)arg2;
- (void)_transitionToStateRunner:(long long)arg1 wasBackedOff:(_Bool)arg2;
- (id)init;
@property(retain) SCSnapAirConfiguration *mConfiguration; // @synthesize mConfiguration=_mConfiguration;
@property long long mCurrentState; // @synthesize mCurrentState=_mCurrentState;
@property(retain) SCShakeTicket *mCurrentTicket; // @synthesize mCurrentTicket=_mCurrentTicket;
@property _Bool mIsCanceled; // @synthesize mIsCanceled=_mIsCanceled;
@property(retain) NSString *mLastBackoffTicketId; // @synthesize mLastBackoffTicketId=_mLastBackoffTicketId;
- (void)processNewTicketForConfiguration:(id)arg1;

@end

