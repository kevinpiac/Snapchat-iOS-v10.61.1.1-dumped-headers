//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIGestureRecognizer, UIView;
@protocol SCPreviewAlignableView, SCPreviewAlignmentDetectorDelegate;

@protocol SCPreviewAlignmentDetector <NSObject>
- (void)adjustView:(id <SCPreviewAlignableView>)arg1 gesture:(UIGestureRecognizer *)arg2 objectViews:(NSArray *)arg3 guideContainerView:(UIView *)arg4;
@property(nonatomic) __weak id <SCPreviewAlignmentDetectorDelegate> delegate;
- (long long)gestureType;
- (void)processView:(id <SCPreviewAlignableView>)arg1 gesture:(UIGestureRecognizer *)arg2 containerView:(UIView *)arg3;
@end

