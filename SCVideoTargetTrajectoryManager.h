//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"
#import "SCVideoTrackerListener-Protocol.h"

@class NSString, SCVideoTargetTrajectory, SCVideoTracker, SOJUGalleryTransform;
@protocol SCVideoTargetTrajectoryManagerDelegate;

@interface SCVideoTargetTrajectoryManager : NSObject <SCVideoTrackerListener, SCImageProcessVideoPlaybackSessionListener>
{
    _Bool _isTracking;
    long long _targetId;
    SCVideoTracker *_videoTracker;
    SOJUGalleryTransform *_initialTransform;
    struct CGSize _targetSize;
    double _initialFrameTimeInSeconds;
    _Bool _firstTimeTracking;
    _Bool _trackingTouchPoint;
    struct CGPoint _center;
    double _angleOffset;
    double _distOffset;
    SCVideoTargetTrajectory *_originalTargetTrajectory;
    SCVideoTargetTrajectory *_targetTrajectory;
    id <SCVideoTargetTrajectoryManagerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_startTrackingWithTransform:(id)arg1;
- (void)_stopTracking;
- (id)_transformCenterToTrackingPoint:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCVideoTargetTrajectoryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasNonBounceTrajectory;
- (id)initTouchPointTrackingWithVideoDuration:(double)arg1 videoTracker:(id)arg2 bounceEnabled:(_Bool)arg3 initialTransform:(id)arg4 size:(struct CGSize)arg5 frameTime:(CDStruct_1b6d18a9)arg6 centerPoint:(struct CGPoint)arg7;
- (id)initWithTargetTrajectory:(id)arg1 videoTracker:(id)arg2 bounceEnabled:(_Bool)arg3;
- (void)switchToAlternateTrajectoryBasedOnBounceState:(id)arg1;
- (void)switchToOriginalTargetTrajectory;
@property(readonly, nonatomic) SCVideoTargetTrajectory *targetTrajectory; // @synthesize targetTrajectory=_targetTrajectory;
- (_Bool)trackingComplete;
@property(readonly, nonatomic) _Bool usingBounceTrajectory;
- (void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlaybackSession:(id)arg1 willRenderFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)videoTracker:(id)arg1 didFailAtTime:(CDStruct_1b6d18a9)arg2;
- (void)videoTracker:(id)arg1 didProduceTransform:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

