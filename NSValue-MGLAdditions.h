//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValue.h>

@interface NSValue (MGLAdditions)
+ (id)valueWithMGLCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)valueWithMGLCoordinateBounds:(struct MGLCoordinateBounds)arg1;
+ (id)valueWithMGLCoordinateQuad:(struct MGLCoordinateQuad)arg1;
+ (id)valueWithMGLCoordinateSpan:(struct MGLCoordinateSpan)arg1;
+ (id)valueWithMGLLightAnchor:(unsigned long long)arg1;
+ (id)valueWithMGLOfflinePackProgress:(struct MGLOfflinePackProgress)arg1;
+ (id)valueWithMGLSphericalPosition:(struct MGLSphericalPosition)arg1;
+ (id)valueWithMGLTransition:(struct MGLTransition)arg1;
@property(readonly) struct MGLCoordinateBounds MGLCoordinateBoundsValue;
- (struct MGLCoordinateQuad)MGLCoordinateQuadValue;
@property(readonly) struct MGLCoordinateSpan MGLCoordinateSpanValue;
@property(readonly) struct CLLocationCoordinate2D MGLCoordinateValue;
@property(readonly) unsigned long long MGLLightAnchorValue;
@property(readonly) struct MGLOfflinePackProgress MGLOfflinePackProgressValue;
@property(readonly) struct MGLSphericalPosition MGLSphericalPositionValue;
@property(readonly) struct MGLTransition MGLTransitionValue;
@end

