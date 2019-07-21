//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, SCCroppingState, SCGeoFilter, SCMultiSnapIndividualEditingState, SCPreviewEphemeralMediaList, SCPreviewFilterStackingUIHelper, SCPreviewToolBarButtonItem, UIView;
@protocol SCTouchControllable;

@protocol SCPreviewFeatureBatchCaptureDelegate
- (void)featureBatchCaptureAllSegmentsDeleted;
- (double)featureBatchCaptureContentTargetAspectRatio;
- (id <SCTouchControllable>)featureBatchCaptureCurrentTouchTarget;
- (void)featureBatchCaptureDidTapToolbarItem:(SCPreviewToolBarButtonItem *)arg1;
- (void)featureBatchCaptureDidUpdateSegmentStatesAtIndexPath:(NSIndexPath *)arg1;
- (SCPreviewFilterStackingUIHelper *)featureBatchCaptureFilterStackingUIHelper;
- (SCCroppingState *)featureBatchCaptureIdentityCroppingState;
- (SCPreviewEphemeralMediaList *)featureBatchCaptureInitializeEphemeralMediaList;
- (void)featureBatchCapturePrepareEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1;
- (void)featureBatchCaptureSegmentDeletedAtIndexPath:(NSIndexPath *)arg1;
- (SCGeoFilter *)featureBatchCaptureSelectedGeofilter;
- (void)featureBatchCaptureSetAudioToolsStateFromMultiSnapEditingState:(SCMultiSnapIndividualEditingState *)arg1;
- (UIView *)featureBatchCaptureTrackingObjectContainerView;
- (void)featureBatchCaptureUpdateCommonLoggingParameters;
@end

