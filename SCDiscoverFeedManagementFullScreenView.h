//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"

@class NSString, SCSearchView, UICollectionView, UIImageView, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedManagementFullScreenView : UIView <SCActionable>
{
    UILabel *_pageTitleLabel;
    UILabel *_pageSubtitleLabel;
    UIImageView *_dismissCaretView;
    UILabel *_editButton;
    UILabel *_headerButton;
    unsigned long long _headerButtonType;
    _Bool _isEditing;
    id <SCActionHandling> _actionHandler;
    UICollectionView *_contentCollectionView;
    SCSearchView *_searchView;
}

- (void).cxx_destruct;
- (void)_didConfirmClearViewHistory;
- (void)_didTapClearButton:(id)arg1;
- (void)_didTapDismissCaret:(id)arg1;
- (void)_didTapEditButton:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
- (void)layoutSubviews;
@property(readonly, nonatomic) SCSearchView *searchView; // @synthesize searchView=_searchView;
- (void)setHasSearchView:(_Bool)arg1;
- (void)setHeaderButtonType:(unsigned long long)arg1;
- (void)setSearchViewDelegate:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
