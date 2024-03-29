//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaCircleIconView, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SCOperaFooterBarLayerViewDelegate;

@interface SCOperaFooterBarLayerView : UIView <SCOperaLayerView>
{
    double _lastSetVisiblePercent;
    UIImageView *_gradientView;
    UIView *_textColorBarView;
    UILabel *_textLabel;
    UITapGestureRecognizer *_tapGesture;
    id <SCOperaFooterBarLayerViewDelegate> _delegate;
    SCOperaCircleIconView *_circleIconView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_setupColorBarViewForLayer:(id)arg1;
- (void)_setupGradientView;
- (void)_setupIconViewForLayer:(id)arg1;
@property(readonly, nonatomic) SCOperaCircleIconView *circleIconView; // @synthesize circleIconView=_circleIconView;
@property(nonatomic) __weak id <SCOperaFooterBarLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTap:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setVisible:(_Bool)arg1;
- (void)setupViewForLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

