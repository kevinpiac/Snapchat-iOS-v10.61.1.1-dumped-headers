//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCGCDTimer, SCLensChallengesLayout, SCLensChallengesPreviewStickerViewModel, SCNetworkImageView, UIImageView, UILabel;
@protocol SCImageDownloading;

@interface SCLensChallengesPreviewStickerView : UIView <SCViewModelConfigurable>
{
    SCLensChallengesLayout *_layout;
    id <SCImageDownloading> _imageDownloader;
    SCGCDTimer *_onReadyTimer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_labelsContainerView;
    UIImageView *_songIcon;
    SCNetworkImageView *_albumImageView;
    SCLensChallengesPreviewStickerViewModel *_viewModel;
    CDUnknownBlockType _onReadyBlock;
}

- (void).cxx_destruct;
- (void)_callOnReady;
- (void)_initializeSubviews;
- (void)_makeConstraints;
- (id)initWithImageDownloader:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onReadyBlock; // @synthesize onReadyBlock=_onReadyBlock;
@property(retain, nonatomic) SCLensChallengesPreviewStickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)snapshotImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
