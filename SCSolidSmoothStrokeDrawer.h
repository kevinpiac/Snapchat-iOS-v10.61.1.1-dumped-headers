//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStrokeDrawer-Protocol.h"

@class UIColor;
@protocol SCStrokeDrawerDelegate;

@interface SCSolidSmoothStrokeDrawer : NSObject <SCStrokeDrawer>
{
    struct CGPath *_path;
    UIColor *_color;
    double _lineWidth;
    struct CGPoint _lastPoints[2];
    int _movingAverageWindowSize;
    double _stringDistanceThreshold;
    id <SCStrokeDrawerDelegate> delegate;
    double _defaultStrokeWidth;
}

- (void).cxx_destruct;
- (void)_addPointToLastPoints:(struct CGPoint)arg1;
- (void)_addQuadCurveWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3 isFirstThreePoints:(_Bool)arg4;
- (void)_drawPoint:(id)arg1 pointSet:(id)arg2 numPoints:(unsigned long long)arg3;
- (struct CGPoint)_nextPointForCurrentPoint:(struct CGPoint)arg1 PointSet:(id)arg2 lastPointIndex:(unsigned long long)arg3;
- (void)clearDrawing;
- (void)dealloc;
@property(nonatomic) double defaultStrokeWidth; // @synthesize defaultStrokeWidth=_defaultStrokeWidth;
@property(nonatomic) __weak id <SCStrokeDrawerDelegate> delegate; // @synthesize delegate;
- (void)drawPoint:(id)arg1 pointSet:(id)arg2;
- (void)drawRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)finishStrokePointSet:(id)arg1;
- (id)init;
- (_Bool)isPointEligibleForAdding:(id)arg1 previousPoint:(id)arg2 scale:(double)arg3;
- (void)redrawPoints:(id)arg1;
- (struct CGPoint)scaleRange;
- (void)updateDrawerMetadata:(id)arg1 emoji:(id)arg2 contentSize:(double)arg3;

@end

