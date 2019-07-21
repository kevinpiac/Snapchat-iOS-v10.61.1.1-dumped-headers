//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCOperaWebView;
@protocol SCAdWebViewTopSnapLayerViewDelegate;

@interface SCAdWebViewTopSnapLayerView : UIView <SCOperaLayerView>
{
    SCOperaWebView *_webView;
    UIView *_tapGestureView;
    long long _interactionZoneType;
    id <SCAdWebViewTopSnapLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
@property(nonatomic) __weak id <SCAdWebViewTopSnapLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)reset;
- (void)setupWithWebView:(id)arg1 interactionZoneType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
