//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLensChallengesEmptyStateViewModel, SCLensChallengesLayout, UIButton, UIImageView, UILabel;
@protocol SCActionHandling;

@interface SCLensChallengesEmptyStateView : UIView <SCViewModelConfigurable, SCActionable>
{
    SCLensChallengesLayout *_layout;
    UIView *_alignViewContainer;
    UIView *_alignView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIButton *_joinButton;
    id <SCActionHandling> actionHandler;
    SCLensChallengesEmptyStateViewModel *_viewModel;
}

+ (id)addEmptyStateToScrollView:(id)arg1;
- (void).cxx_destruct;
- (void)_initializeSubviews;
- (void)_joinButtonTapped:(id)arg1;
- (void)_makeConstraints;
- (void)_setButtonTitle:(id)arg1;
- (void)_setupKarma;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCLensChallengesEmptyStateViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)sizeToFitScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

