//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCCroppingState : NSObject <NSCoding, NSCopying>
{
    double _rotation;
    double _scale;
    double _translationX;
    double _translationY;
    struct CGSize _boundsSize;
}

+ (struct CGAffineTransform)_calculateViewportTransform:(_Bool)arg1 withBoundsSize:(struct CGSize)arg2 rotation:(double)arg3 scale:(double)arg4 translationX:(double)arg5 translationY:(double)arg6;
- (id)_getTransformAwareStateWithCroppingAspectRatio:(double)arg1 renderBoundsSize:(struct CGSize)arg2 outputBoundsSize:(struct CGSize)arg3;
@property(nonatomic) struct CGSize boundsSize; // @synthesize boundsSize=_boundsSize;
- (struct CGAffineTransform)calculateCPUBufferTransformWithCroppingAspectRatio:(double)arg1 renderBoundsSize:(struct CGSize)arg2 outputBoundsSize:(struct CGSize)arg3 pixelBufferSize:(struct CGSize)arg4 pixelBufferOrientation:(long long)arg5;
- (struct CGAffineTransform)calculateNormalTransform;
- (struct CGAffineTransform)calculateViewportTransform:(_Bool)arg1;
- (struct CGAffineTransform)calculateViewportTransform:(_Bool)arg1 withCroppingAspectRatio:(double)arg2 renderBoundsSize:(struct CGSize)arg3 outputBoundsSize:(struct CGSize)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRotation:(double)arg1 scale:(double)arg2 translationX:(double)arg3 translationY:(double)arg4 boundsSize:(struct CGSize)arg5;
- (_Bool)isEqualToState:(id)arg1;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double translationX; // @synthesize translationX=_translationX;
@property(nonatomic) double translationY; // @synthesize translationY=_translationY;

@end

