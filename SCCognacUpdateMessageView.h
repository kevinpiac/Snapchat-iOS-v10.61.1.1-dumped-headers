//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacUpdateMessageViewModel, SCLazy, UILabel;
@protocol SCCognacUpdateMessageViewDelegate, SCImageDownloading;

@interface SCCognacUpdateMessageView : UIView
{
    UILabel *_statusLabel;
    UILabel *_titleLabel;
    SCLazy *_iconViewLazy;
    SCLazy *_buttonLazy;
    SCCognacUpdateMessageViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacUpdateMessageViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapButton;
@property(nonatomic) __weak id <SCCognacUpdateMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCCognacUpdateMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end
