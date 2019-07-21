//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCNetworkImageView;
@protocol SCImageDownloading;

@interface SCCognacChatDrawerTileIconView : UIView <SCViewModelConfigurable>
{
    SCNetworkImageView *_iconImageView;
    SCLazy *_ringViewLazy;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)_ringView;
- (void)animateRing;
- (void)cancelAnimationIfNecessary;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
