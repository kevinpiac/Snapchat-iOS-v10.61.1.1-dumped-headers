//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEventListener-Protocol.h"

@class NSString, SCNetworkImageView, SCOperaWebAppProgressView, UILabel;
@protocol SCOperaWebAppLoadingViewDelegate;

@interface SCOperaWebAppLoadingView : UIView <SCEventListener>
{
    UILabel *_appNameLabel;
    SCNetworkImageView *_loadingImageView;
    SCOperaWebAppProgressView *_progressView;
    UILabel *_progressLabel;
    _Bool _syncedImages;
    id <SCOperaWebAppLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)_makeAppNameLabelPulseAnimation;
@property(nonatomic) __weak id <SCOperaWebAppLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAppName:(id)arg1;
- (void)setImageDownloader:(id)arg1 imageResources:(id)arg2;
- (void)setProgress:(double)arg1;
- (void)setProgressBarVisible:(_Bool)arg1;
@property(readonly, nonatomic) _Bool syncedImages; // @synthesize syncedImages=_syncedImages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

