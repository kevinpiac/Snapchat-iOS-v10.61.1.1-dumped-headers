//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCVideoFrameMeanSquaredErrorCollector : NSObject
{
}

+ (struct __CVBuffer *)_rotatePixelBuffer:(struct __CVBuffer *)arg1 withRotationAngle:(double)arg2 translationPoint:(struct CGPoint)arg3;
+ (struct __CVBuffer *)_scalePixelBuffer:(struct __CVBuffer *)arg1 withScaleX:(double)arg2 ScaleY:(double)arg3;
+ (id)videoFrameMeanSquaredErrorsWithVideoFrames:(id)arg1 videoAsset:(id)arg2 videoOrientation:(long long)arg3 keyFrameInterval:(unsigned long long)arg4 shouldScaleVideo:(_Bool)arg5;

@end

