//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOnDemandGeofilterVideoContainerViewDelegate-Protocol.h"

@class NSString, SCLoadingIndicatorView, SCOnDemandGeofilterPillButton, SCOnDemandGeofilterVideoContainerView, UIImageView, UILabel;

@interface SCOnDemandGeoProductSelectionSubview : UIView <SCOnDemandGeofilterVideoContainerViewDelegate>
{
    SCLoadingIndicatorView *_activityIndicator;
    SCOnDemandGeofilterVideoContainerView *_productVideo;
    UILabel *_productTitle;
    UILabel *_productDescription;
    SCOnDemandGeofilterPillButton *_createButton;
    UIView *_containerView;
    UIImageView *_indicatorView;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pauseVideoPlayback;
- (void)resumeVideoPlayback;
- (void)updateBasedOnViewModel:(id)arg1 withGeofilterSession:(id)arg2;
- (void)updateLayout;
- (void)videoIsReadyToPlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

