//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCLens, SCLensAnalyticsDataStore, SCLensFpsLogger, SCLensInitLogger, SCLensLaunchData, SCLensReadyLogger, SCLensThumbnailLogger, SCSnapCommonLoggingParameters, SCUnlockableLensTracker;

@protocol SCLensLogger <NSObject>
@property(readonly, nonatomic) unsigned long long backCameraSnapFacesCount;
- (void)cameraToggledWithAction:(long long)arg1 recording:(_Bool)arg2;
- (void)closeAttachmentView;
@property(readonly, nonatomic) long long currentLensIndex;
- (void)faceCountChanged:(unsigned long long)arg1;
@property(nonatomic) _Bool frontCameraActive;
@property(readonly, nonatomic) unsigned long long frontCameraSnapFacesCount;
@property(readonly, nonatomic) _Bool isLensSessionPaused;
@property(nonatomic) _Bool isRedirectToStore;
@property(nonatomic) _Bool isRedirectToWebview;
@property(readonly, nonatomic) SCLensAnalyticsDataStore *lensAnalyticsDataStore;
@property(readonly, nonatomic) unsigned long long lensCount;
@property(retain, nonatomic) SCLensFpsLogger *lensFpsLogger;
@property(readonly, nonatomic) SCLensInitLogger *lensInitLogger;
- (void)lensPresented:(SCLens *)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4 afterRecording:(_Bool)arg5 launchData:(SCLensLaunchData *)arg6;
@property(readonly, nonatomic) SCLensReadyLogger *lensReadyLogger;
@property(readonly, nonatomic) NSString *lensSessionId;
- (void)lensSessionPaused:(NSString *)arg1;
- (void)lensSessionResumed:(NSString *)arg1;
- (NSString *)lensSessionStartedForSourceType:(long long)arg1;
- (NSString *)lensSessionStartedWithSessionId:(NSString *)arg1 sourceType:(long long)arg2;
- (void)lensSessionStopped:(NSString *)arg1;
@property(readonly, nonatomic) long long lensSource;
- (void)lensSpinning:(SCLens *)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4;
@property(readonly, nonatomic) SCLensThumbnailLogger *lensThumbnailLogger;
- (void)logCustomLensEventsForLens:(SCLens *)arg1 sessionId:(NSString *)arg2 eventsArray:(NSArray *)arg3;
- (void)openAttachmentView;
- (void)recordingStarted;
- (void)recordingStopped;
@property(nonatomic) long long snapSource;
@property(retain, nonatomic) NSString *topSnapAdId;
@property(retain, nonatomic) NSString *topSnapAdRequestId;
- (void)trackLensInteraction:(SCSnapCommonLoggingParameters *)arg1 appliedLensId:(NSString *)arg2 beforeSnap:(_Bool)arg3;
- (void)triggerFired:(NSString *)arg1;
@property(readonly, nonatomic) SCUnlockableLensTracker *unlockableLensTracker;
@end
