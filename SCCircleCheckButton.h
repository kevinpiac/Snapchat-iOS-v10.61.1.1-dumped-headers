//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SCLoadingIndicatorView;

@interface SCCircleCheckButton : UIButton
{
    SCLoadingIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (id)initWithRadius:(double)arg1 shadowRadius:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)startLoading;
- (void)stopLoading;

@end

