//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, SCUserSession, UIButton, UILabel, UIStackView;

@interface SCGalleryFaceClusterCollectionReusableView : UICollectionReusableView
{
    NSString *_clusterId;
    long long _totalClustersCount;
    SCUserSession *_userSession;
    UILabel *_titleLabel;
    UIButton *_goodClusterButton;
    UIButton *_duplicateClusterButton;
    UIButton *_incorrectClusterButton;
    UIStackView *_buttonsStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
- (void)didTapDuplicateClusterButton:(id)arg1;
- (void)didTapGoodClusterButton:(id)arg1;
- (void)didTapIncorrectClusterButton:(id)arg1;
@property(retain, nonatomic) UIButton *duplicateClusterButton; // @synthesize duplicateClusterButton=_duplicateClusterButton;
@property(retain, nonatomic) UIButton *goodClusterButton; // @synthesize goodClusterButton=_goodClusterButton;
@property(retain, nonatomic) UIButton *incorrectClusterButton; // @synthesize incorrectClusterButton=_incorrectClusterButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forClusterId:(id)arg2 withUserSession:(id)arg3 totalClustersCount:(long long)arg4;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateButtonSelectStates;

@end

