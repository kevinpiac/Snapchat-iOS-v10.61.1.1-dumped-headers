//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCConnectionErrorStateViewDelegate-Protocol.h"
#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"

@class NSString, SCConnectionErrorStateView, SCLoadingIndicatorView, SCSafeBrowsingWarningView;
@protocol SCOperaWebV3CustomizedViewDelegate;

@interface SCOperaWebV3CustomizedView : UIView <SCSafeBrowsingWarningViewDelegate, SCConnectionErrorStateViewDelegate>
{
    SCLoadingIndicatorView *_loadingIndicatorView;
    UIView *_addPassesView;
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    SCConnectionErrorStateView *_connectionErrorView;
    id <SCOperaWebV3CustomizedViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_createConnectionErrorView;
@property(nonatomic) __weak id <SCOperaWebV3CustomizedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didIgnoreSafeBrowsingWarning:(id)arg1;
- (void)dismissAddPassesView;
- (void)errorStateViewDidTapToRetry;
- (void)goBackFromSafeBrowsing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)learnMoreFromSafeBrowsing;
- (void)reset;
- (void)showAddPassesView:(id)arg1 animated:(_Bool)arg2;
- (void)showConnectionError;
- (void)showGeneralError;
- (void)showLoadingIndicator;
- (void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2;
- (void)updateLoadingProgress:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

