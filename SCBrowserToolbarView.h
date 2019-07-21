//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTransparentParentView.h"

@class SCGradientView, UIButton;
@protocol SCBrowserToolbarViewDelegate;

@interface SCBrowserToolbarView : SCTransparentParentView
{
    SCGradientView *_toolbarGradient;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_shareButton;
    _Bool _canGoBack;
    _Bool _canGoForward;
    id <SCBrowserToolbarViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_tappedBack;
- (void)_tappedForward;
- (void)_tappedShare;
- (void)_updateUI;
@property(nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(nonatomic) _Bool canGoForward; // @synthesize canGoForward=_canGoForward;
@property(nonatomic) __weak id <SCBrowserToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

