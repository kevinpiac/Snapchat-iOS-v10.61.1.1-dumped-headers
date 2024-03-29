//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCZoomingState : NSObject
{
    double _initialScale;
    double _linearScale;
    double _exponentialScale;
    double _totalOffsetForExpScale;
}

- (double)_calculateExponentialScaleWithRelativeOffset:(double)arg1;
- (double)_calculateRelativeOffsetWithExponentialScale:(double)arg1;
- (void)_clampScale:(double *)arg1;
- (double)_scaleChangeForOffset:(double)arg1;
@property(readonly, nonatomic) double effectiveScale;
@property(nonatomic) double exponentialScale; // @synthesize exponentialScale=_exponentialScale;
- (id)init;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double linearScale; // @synthesize linearScale=_linearScale;
- (void)reset;
@property(nonatomic) double totalOffsetForExpScale; // @synthesize totalOffsetForExpScale=_totalOffsetForExpScale;

@end

