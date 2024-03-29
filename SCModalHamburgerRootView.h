//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class FBKVOController, NSString, UIButton, UIScrollView, UIViewController;
@protocol SCModalHamburgerRootViewDelegate, SCScrollViewContentProtocol;

@interface SCModalHamburgerRootView : UIView <UIScrollViewDelegate>
{
    UIViewController *_parentViewController;
    UIView<SCScrollViewContentProtocol> *_contentView;
    FBKVOController *_observeController;
    _Bool _responseToScroll;
    id <SCModalHamburgerRootViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentContainerView;
    UIView *_headerView;
    UIButton *_closeButton;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (void)_initHeader:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonTapped;
- (double)closeButtonXWithContainerWidth:(double)arg1;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)dealloc;
@property(nonatomic) __weak id <SCModalHamburgerRootViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 parentViewController:(id)arg2 contentView:(id)arg3 type:(unsigned long long)arg4;
- (void)layoutSubviews;
@property(nonatomic) _Bool responseToScroll; // @synthesize responseToScroll=_responseToScroll;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

