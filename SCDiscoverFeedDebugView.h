//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedDebugViewModel, UIButton;

@interface SCDiscoverFeedDebugView : UIView
{
    SCDiscoverFeedDebugViewModel *_viewModel;
    UIView *_debugVisualElement;
    UIButton *_debugButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *debugButton; // @synthesize debugButton=_debugButton;
- (void)layoutSubviews;
@property(retain, nonatomic) SCDiscoverFeedDebugViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

