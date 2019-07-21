//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCTSingleTaskPerformer;
@protocol SCTCameraServices, SCTV3LensesServices;

@interface SCTV3CameraManager : NSObject
{
    id <SCTCameraServices> _camera;
    id <SCTV3LensesServices> _lenses;
    NSString *_cameraConsumerId;
    unsigned long long _cameraSessionState;
    _Bool _cameraEnabledViaSessionState;
    _Bool _cameraEnabled;
    _Bool _lensesEnabledViaSessionState;
    _Bool _lensesEnabled;
    _Bool _wereLensesEnabledBefore;
    SCTSingleTaskPerformer *_performer;
}

- (void).cxx_destruct;
- (_Bool)_incomingVideoCallForSessionState:(id)arg1;
- (_Bool)_needsCameraForSessionState:(id)arg1;
- (_Bool)_needsLensesForSessionState:(id)arg1;
- (void)_updateCameraStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLensesStatus;
- (void)activate;
- (void)background;
- (id)cameraServices;
- (void)deactivate;
- (void)dealloc;
- (void)flipCamera;
- (id)initWithCameraServices:(id)arg1 lensesServices:(id)arg2;
- (_Bool)isFrontCamera;
- (void)sessionStateChanged:(id)arg1;

@end

