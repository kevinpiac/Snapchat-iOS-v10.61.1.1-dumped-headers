//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLensExplorerRoundedViewConfiguration;

@interface SCLensExplorerRoundedView : UIView
{
    SCLensExplorerRoundedViewConfiguration *_configuration;
    UIView *_roundedView;
    UIView *_bottomView;
}

- (void).cxx_destruct;
- (void)_prepareBottomView;
- (void)_prepareRoundedView;
- (void)addSubview:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end

