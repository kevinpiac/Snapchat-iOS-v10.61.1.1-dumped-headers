//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTAnimationTimingFunction : NSObject
{
    double _cx0;
    double _cy0;
    double _cx1;
    double _cy1;
    double _cx2;
    double _cy2;
    double _cx3;
    double _cy3;
    _Bool _mirrored;
    double dur;
    struct CGPoint p1;
    struct CGPoint p2;
}

+ (id)easeInOutTimingFunction;
+ (id)easeInTimingFunction;
+ (id)easeOutTimingFunction;
+ (id)linearTimingFunction;
+ (struct CGPoint)normalizedPoint:(struct CGPoint)arg1;
+ (id)timingFunctionWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
@property(nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=p1;
@property(nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=p2;
@property(nonatomic) double duration; // @synthesize duration=dur;
- (double)getCurveXForValue:(double)arg1;
- (double)getCurveYForValue:(double)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2 duration:(double)arg3;
@property(nonatomic) _Bool mirrored; // @synthesize mirrored=_mirrored;
- (double)solveCurveX:(double)arg1 withEpsilon:(double)arg2;
- (void)solvePolynomial;
- (double)valueForX:(double)arg1;

@end
