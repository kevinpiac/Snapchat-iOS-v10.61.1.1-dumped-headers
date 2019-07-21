//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol SCBounceSliderViewDelegate;

@interface SCBounceSliderView : UIView
{
    _Bool _tracking;
    id <SCBounceSliderViewDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIImageView *_trackView;
    UIImageView *_thumbView;
    double _sliderWidth;
    struct CGPoint _previousPanLocation;
    struct CGSize _previousBoundsSize;
}

- (void).cxx_destruct;
- (void)_clampThumbViewWithOffset:(double)arg1;
- (void)_clampThumbViewWithOffset:(double)arg1 tension:(double)arg2;
- (void)_pan:(id)arg1;
- (void)_tapped:(id)arg1;
@property(nonatomic) __weak id <SCBounceSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
- (void)layoutSubviews;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(nonatomic) struct CGPoint previousPanLocation; // @synthesize previousPanLocation=_previousPanLocation;
@property(nonatomic) double sliderWidth; // @synthesize sliderWidth=_sliderWidth;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) UIImageView *trackView; // @synthesize trackView=_trackView;
@property(nonatomic) double value;

@end

