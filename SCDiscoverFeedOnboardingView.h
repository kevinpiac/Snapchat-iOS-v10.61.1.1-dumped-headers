//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"

@class NSString, SCDiscoverFeedOnboardingButtonView, UICollectionView, UIImageView, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedOnboardingView : UIView <SCActionable>
{
    UILabel *_pageTitleLabel;
    UILabel *_pageSubtitleLabel;
    UIImageView *_dismissCaretView;
    SCDiscoverFeedOnboardingButtonView *_continueButton;
    id <SCActionHandling> _actionHandler;
    UICollectionView *_contentCollectionView;
}

- (void).cxx_destruct;
- (void)_didTapDismissCaret:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSubmissionEnabled:(_Bool)arg1;
- (void)setSubmissionLoading:(_Bool)arg1;
- (void)setTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

