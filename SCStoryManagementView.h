//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCExpandedButton, SCGradientView, UIButton, UICollectionView;
@protocol SCStoryManagementViewDelegate;

@interface SCStoryManagementView : UIView
{
    UIView *_chromeView;
    SCExpandedButton *_saveButton;
    SCExpandedButton *_deleteButton;
    SCExpandedButton *_settingButton;
    UIButton *_sendButton;
    SCGradientView *_bottomGradientView;
    _Bool _isForSingleStorySnap;
    id <SCStoryManagementViewDelegate> _delegate;
    UICollectionView *_snapsCollectionView;
    UICollectionView *_snapsInfoCollectionView;
    UIView *_contentView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_didTapDeleteButton;
- (void)_didTapSaveButton;
- (void)_didTapSendButton;
- (void)_didTapSettingButton;
- (void)_setUpButtons;
- (void)_setUpSnapsCollectionView;
- (void)_setUpSnapsInfoCollectionView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <SCStoryManagementViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithIsSingleStorySnap:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setChromeView:(id)arg1;
- (void)setSendButtonHidden:(_Bool)arg1;
@property(readonly, nonatomic) UICollectionView *snapsCollectionView; // @synthesize snapsCollectionView=_snapsCollectionView;
@property(readonly, nonatomic) UICollectionView *snapsInfoCollectionView; // @synthesize snapsInfoCollectionView=_snapsInfoCollectionView;

@end

