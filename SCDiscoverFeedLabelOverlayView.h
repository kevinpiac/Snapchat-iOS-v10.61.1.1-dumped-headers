//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedLabelOverlayViewModel, SCGradientView, SCLazy, UILabel;
@protocol SCImageDownloading;

@interface SCDiscoverFeedLabelOverlayView : UIView
{
    SCGradientView *_titleBackgroundGradientView;
    SCLazy *_secondaryPrefixIconView;
    SCLazy *_subtitlePrefixIconView;
    unsigned long long _currentTitleLanguageDirection;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_secondaryTextLabel;
    SCLazy *_adSlug;
    SCLazy *_avatarView;
    SCLazy *_badgeView;
    id <SCImageDownloading> _imageDownloader;
    SCDiscoverFeedLabelOverlayViewModel *_viewModel;
    double _topObstructionHeight;
}

- (void).cxx_destruct;
- (void)_applyLabelTextAlignment;
- (void)_layoutSubtitleLabelWithEffectiveTextBounds:(struct CGRect)arg1 startYPos:(double)arg2;
- (void)_layoutTitleLabelWithEffectiveTextBounds:(struct CGRect)arg1 startYPos:(double)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double topObstructionHeight; // @synthesize topObstructionHeight=_topObstructionHeight;
@property(copy, nonatomic) SCDiscoverFeedLabelOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

