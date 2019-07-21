//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesDeviceEventListener-Protocol.h"

@class NSString;

@interface SCSpectaclesDeviceEventListenerAnnouncer : NSObject <SCSpectaclesDeviceEventListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCSpectaclesDeviceEventListener>, std::__1::allocator<__weak id<SCSpectaclesDeviceEventListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)device:(id)arg1 didCompletedScheduledUpdateWithUserInfo:(id)arg2 error:(id)arg3;
- (void)device:(id)arg1 didMarkCorruptContent:(id)arg2;
- (void)device:(id)arg1 didReceiveAlertNotification:(unsigned long long)arg2;
- (void)device:(id)arg1 didReceiveCrashReport:(id)arg2;
- (void)device:(id)arg1 didUnpairWithReason:(unsigned long long)arg2;
- (void)device:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)device:(id)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3;
- (void)device:(id)arg1 receivedClientId:(id)arg2 requestAuthzCode:(_Bool)arg3;
- (void)device:(id)arg1 receivedLastCloudUploadTime:(id)arg2;
- (void)device:(id)arg1 receivedWifiAPList:(id)arg2;
- (void)device:(id)arg1 uploadToCloudEvent:(unsigned long long)arg2;
- (void)deviceDidFetchFirmwareDigest:(id)arg1 digest:(id)arg2;
- (void)deviceDidRequestArchiving:(id)arg1;
- (void)deviceDidStartRecording:(id)arg1;
- (void)deviceDidUpdateState:(id)arg1;
- (void)deviceDidUpdateTaskQueue:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
