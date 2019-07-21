//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSMutableArray;

@interface SCBounceVideoState : NSObject
{
    long long _bounceMode;
    float _frameRateModifier;
    NSMutableArray *_originalTimestamps;
    float _bounceVideoFrameRate;
    float _bounceDuration;
    float _lastGeneratedBounceOffset;
    _Bool _highOutputFramerate;
    _Bool _removeDuplicateKeyFrames;
    _Bool _removeDuplicateEndFrames;
    _Bool _useCustomBezierCurve;
    double _videoDuration;
    double _bounceOffset;
    AVAsset *_bounceAsset;
    AVAsset *_originalAsset;
    double _outputSpeedFactor;
    CDUnknownBlockType _bounceProcessingBlock;
    struct CGPoint _customBezierControlPoint1;
    struct CGPoint _customBezierControlPoint2;
}

+ (id)bounceVideoPerformer;
+ (id)cameraRollBounceVideoProviderWithOriginalAsset:(id)arg1 offset:(double)arg2;
+ (id)emptyBounceVideoStateForVideoAsset:(id)arg1;
- (void).cxx_destruct;
- (id)_bezierYValuesWithPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 xCount:(int)arg3;
- (id)_bounceAssetWithAsset:(id)arg1 keyFrames:(id)arg2 timeOffset:(double)arg3 loopCount:(long long)arg4;
- (id)_bounceKeyFrames;
@property(readonly, nonatomic) AVAsset *bounceAsset; // @synthesize bounceAsset=_bounceAsset;
@property(nonatomic) double bounceOffset; // @synthesize bounceOffset=_bounceOffset;
@property(copy, nonatomic) CDUnknownBlockType bounceProcessingBlock; // @synthesize bounceProcessingBlock=_bounceProcessingBlock;
@property(nonatomic) struct CGPoint customBezierControlPoint1; // @synthesize customBezierControlPoint1=_customBezierControlPoint1;
@property(nonatomic) struct CGPoint customBezierControlPoint2; // @synthesize customBezierControlPoint2=_customBezierControlPoint2;
- (void)generateBounceVideoSynchronously;
- (void)generateBounceVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateCameraRollBounceVideoSynchronously;
@property(nonatomic) _Bool highOutputFramerate; // @synthesize highOutputFramerate=_highOutputFramerate;
- (id)initWithVideoAsset:(id)arg1 bounceMode:(long long)arg2;
@property(readonly, nonatomic) AVAsset *originalAsset; // @synthesize originalAsset=_originalAsset;
@property(nonatomic) double outputSpeedFactor; // @synthesize outputSpeedFactor=_outputSpeedFactor;
- (void)removeBounceVideoIfNeeded;
@property(nonatomic) _Bool removeDuplicateEndFrames; // @synthesize removeDuplicateEndFrames=_removeDuplicateEndFrames;
@property(nonatomic) _Bool removeDuplicateKeyFrames; // @synthesize removeDuplicateKeyFrames=_removeDuplicateKeyFrames;
@property(nonatomic) _Bool useCustomBezierCurve; // @synthesize useCustomBezierCurve=_useCustomBezierCurve;
- (CDStruct_1b6d18a9)timestampOfOriginalVideoForBounceVideoTimestamp:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;

@end

