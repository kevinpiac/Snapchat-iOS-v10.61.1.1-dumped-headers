//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOperaContextLongformViewLogger : NSObject
{
}

+ (id)sharedInstance;
- (void)logAdSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 isSubscribed:(_Bool)arg5;
- (void)logLocalWebpageViewWithContext:(id)arg1 params:(id)arg2 inlineVideosTotalTimeViewedSec:(double)arg3 inlineVideosViewedCount:(double)arg4 logger:(id)arg5 currentViewingSession:(id)arg6;
- (void)logLongformCameraViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logLongformVideoViewWithContext:(id)arg1 params:(id)arg2 startedWithCaptionOn:(_Bool)arg3 videoWithCaptionOnTimeViewedSeconds:(double)arg4 videoInLandscapeModeTimeViewedSeconds:(double)arg5 logger:(id)arg6 currentViewingSession:(id)arg7 videoRotationEnabled:(_Bool)arg8 videoRollMinDegree:(double)arg9 videoRollMaxDegree:(double)arg10;
- (void)logProductViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logStoreViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;

@end

