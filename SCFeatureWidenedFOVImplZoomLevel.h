//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCFeatureWidenedFOVImplZoomLevel : NSObject
{
    double _zoomLevel;
}

- (void)addScale:(double)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isDisablingThresholdExceeded;
@property(readonly, nonatomic) _Bool isEnablingThresholdExceeded;
@property(readonly, nonatomic) _Bool isZoomLevelNeutralOrGreater;
- (void)reset;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

@end

