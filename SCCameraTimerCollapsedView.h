//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SCCameraTimerCollapsedView : UIView
{
    _Bool _overDarkContent;
    long long _cameraIconArrowDirection;
    double _percentVisible;
    UIImageView *_shadowView;
    UIView *_borderView;
    UIImageView *_cameraIconMaskView;
    long long _collapseStyle;
    struct CGSize _previousBoundsSize;
}

- (void).cxx_destruct;
- (double)_borderDiameter;
- (double)_collapsedBorderWidth;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) long long cameraIconArrowDirection; // @synthesize cameraIconArrowDirection=_cameraIconArrowDirection;
@property(retain, nonatomic) UIImageView *cameraIconMaskView; // @synthesize cameraIconMaskView=_cameraIconMaskView;
@property(nonatomic) long long collapseStyle; // @synthesize collapseStyle=_collapseStyle;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isOverDarkContent) _Bool overDarkContent; // @synthesize overDarkContent=_overDarkContent;
- (void)layoutSubviews;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;

@end

