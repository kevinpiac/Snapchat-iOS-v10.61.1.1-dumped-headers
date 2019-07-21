//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCCropOverlayView, SCCroppingState, SCPreviewToolBarButtonItem, UIView;
@protocol SCCropOverlayViewListener, SCFeatureSnapCropDelegate;

@protocol SCFeatureSnapCrop
- (_Bool)activeCroppingWithListener:(id <SCCropOverlayViewListener>)arg1 animated:(_Bool)arg2;
- (struct CGRect)boundsForBorderOverlayView:(UIView *)arg1;
- (SCCroppingState *)computeCroppingState:(SCCroppingState *)arg1 containerView:(UIView *)arg2 contentScaleFactor:(double)arg3 contentAspectFitSize:(struct CGSize)arg4;
- (SCPreviewToolBarButtonItem *)createCropToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (SCCroppingState *)createIdentityCroppingState:(struct CGSize)arg1 containerView:(UIView *)arg2 contentScaleFactor:(double)arg3;
- (SCCropOverlayView *)createOverlayViewWithFrame:(struct CGRect)arg1;
- (long long)cropAwareMediaOrientation;
- (long long)cropAwareThumbnailOrientation;
- (double)croppingAspectRatio;
- (SCCroppingState *)currentCroppingState;
- (_Bool)deactiveCropping;
@property(nonatomic) __weak id <SCFeatureSnapCropDelegate> delegate;
@property(nonatomic) __weak id <SCCropOverlayViewListener> listener;
@property(retain, nonatomic) SCCropOverlayView *overlayView;
- (struct CGSize)preferredImageSizeForMediaSize:(struct CGSize)arg1 maxImageSize:(struct CGSize)arg2;
@end
