//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCAvatarView, SCGradientView, SCLazy, SCNetworkImageView, UIColor, UILabel, UIView;
@protocol SCActionHandling, SCImageDownloading;

@interface SCDiscoverFeedOnboardingPublisherTileCell : UICollectionViewCell <SCActionable, SCViewModelConfigurable>
{
    SCNetworkImageView *_backgroundImageView;
    SCNetworkImageView *_logoImageView;
    SCLazy *_selectedImageView;
    UIView *_colorOverlay;
    UILabel *_titleLabel;
    SCGradientView *_titleGradientView;
    SCAvatarView *_avatarView;
    UIColor *_overlayAnimateToColor;
    double _selectedImageViewAnimateToAlpha;
    unsigned long long _logoAnimateToPosition;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

