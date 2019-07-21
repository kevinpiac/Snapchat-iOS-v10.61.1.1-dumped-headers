//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGradientView, SCLoadingIndicatorView, UIImageView, UILabel, UIProgressView;

@interface SCGalleryInitialLoadingView : UIView
{
    UIImageView *_backgroundImageView;
    UIImageView *_catImageView;
    UIImageView *_ghostImageView;
    UIView *_loadingContainerView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    UILabel *_textLabel;
    SCGradientView *_progressBackgroundView;
    UIProgressView *_progressView;
}

- (void).cxx_destruct;
- (void)_setupProgressView;
- (void)completeProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;

@end

