//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCropTransparentTouchableView;

@protocol SCCropOverlayViewListener <NSObject>
- (void)croppingDidChangeTransform:(SCCropTransparentTouchableView *)arg1;
- (void)croppingDidFinishTransform:(SCCropTransparentTouchableView *)arg1;
- (void)croppingDidShowTeachingTooltip:(SCCropTransparentTouchableView *)arg1;
- (void)croppingWillDeactivate:(SCCropTransparentTouchableView *)arg1;

@optional
- (void)croppingDidDeactivate:(SCCropTransparentTouchableView *)arg1;
- (void)croppingDidFillScreen:(SCCropTransparentTouchableView *)arg1;
@end

