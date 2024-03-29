//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCAlertViewActionButton, SCCircularProgressView, SCLoadingIndicatorView, UIImage, UIImageView, UILabel;
@protocol SCOperaLoadingLayerViewDelegate;

@interface SCOperaLoadingLayerView : UIView <SCOperaLayerView>
{
    SCLoadingIndicatorView *_activityIndicator;
    SCCircularProgressView *_progressIndicator;
    UILabel *_loadingSubtextLabel;
    UILabel *_errorHeaderLabel;
    UILabel *_errorSubtextLabel;
    SCAlertViewActionButton *_errorButton;
    UIImage *_backgroundImage;
    UIImageView *_backgroundImageView;
    UIView *_blurredEffectView;
    double _lastProgressCycleUpdateTime;
    id <SCOperaLoadingLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_setupErrorButton:(id)arg1;
- (void)_setupErrorHeader:(id)arg1;
- (void)_setupErrorSubtext:(id)arg1;
- (void)_setupErrorViewWithHeader:(id)arg1 subtext:(id)arg2 buttonText:(id)arg3;
- (void)_setupLoadingSpinnerWithLayer:(id)arg1;
- (void)_setupLoadingSubText:(id)arg1;
- (void)_setupLoadingViewWithLayer:(id)arg1;
@property(nonatomic) __weak id <SCOperaLoadingLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)errorButtonPressed;
- (void)layoutSubviews;
- (void)resetProgressIndicator;
- (void)setProgressForProgressIndicator:(float)arg1;
- (void)setupBackgroundWithImage:(id)arg1;
- (void)setupViewForLayer:(id)arg1;
- (void)showLoadingIndicator:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

