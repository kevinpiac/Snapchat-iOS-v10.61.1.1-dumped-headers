//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSeparatorConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCDynamicShadowCardView, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol SCGallerySnapsTabOnboardingTooltipCellDelegate;

@interface SCGallerySnapsTabOnboardingTooltipCell : UICollectionViewCell <SCRoundedCornerConfigurable, SCViewModelConfigurable, SCSeparatorConfigurable>
{
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_leftIcon;
    UIImageView *_rightIcon;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    struct CGRect _backgroundPathRect;
    UIView *_cardContentView;
    SCDynamicShadowCardView *_cardBackgroundView;
    UITapGestureRecognizer *_rightIconTapRecognizer;
    unsigned long long _roundedCorners;
    id _viewModel;
    unsigned long long _separatorMask;
    UIColor *_separatorColor;
    id <SCGallerySnapsTabOnboardingTooltipCellDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleRightIconTapAction;
- (void)_setBackgroundViewsWithRoundedCorner:(unsigned long long)arg1 roundedRect:(struct CGRect)arg2;
@property(nonatomic) __weak id <SCGallerySnapsTabOnboardingTooltipCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) unsigned long long separatorMask; // @synthesize separatorMask=_separatorMask;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

