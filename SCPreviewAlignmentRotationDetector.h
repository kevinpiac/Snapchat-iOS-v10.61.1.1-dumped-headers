//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewAlignmentDetector-Protocol.h"

@class NSArray, NSString, SCPreviewAlignmentRotationGuide;
@protocol SCPreviewAlignmentDetectorDelegate;

@interface SCPreviewAlignmentRotationDetector : NSObject <SCPreviewAlignmentDetector>
{
    _Bool _shouldIgnoreRotationGuide;
    id <SCPreviewAlignmentDetectorDelegate> _delegate;
    NSArray *_rotationAngles;
    SCPreviewAlignmentRotationGuide *_rotationGuide;
    double _beginRotationAngle;
}

- (void).cxx_destruct;
- (void)_addGuide:(id)arg1 inView:(id)arg2;
- (struct CGPoint)_centerRotationPoint:(id)arg1 alignableTouchControlView:(id)arg2 diffRotation:(double)arg3;
- (double)_convertRadiansToDegrees:(double)arg1;
- (void)_findGuidesInContainerView:(id)arg1 draggingView:(id)arg2 angle:(double)arg3 velocity:(double)arg4;
- (void)_removeGuide:(id)arg1;
- (id)_rotationGuideForAngle:(id)arg1;
- (void)adjustView:(id)arg1 gesture:(id)arg2 objectViews:(id)arg3 guideContainerView:(id)arg4;
@property(nonatomic) double beginRotationAngle; // @synthesize beginRotationAngle=_beginRotationAngle;
@property(nonatomic) __weak id <SCPreviewAlignmentDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)gestureType;
- (id)initWithDelegate:(id)arg1;
- (void)processView:(id)arg1 gesture:(id)arg2 containerView:(id)arg3;
@property(copy, nonatomic) NSArray *rotationAngles; // @synthesize rotationAngles=_rotationAngles;
@property(retain, nonatomic) SCPreviewAlignmentRotationGuide *rotationGuide; // @synthesize rotationGuide=_rotationGuide;
@property(nonatomic) _Bool shouldIgnoreRotationGuide; // @synthesize shouldIgnoreRotationGuide=_shouldIgnoreRotationGuide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

