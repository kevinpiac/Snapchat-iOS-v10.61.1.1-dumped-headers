//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBKVOController, NSString, SCModalCardRootViewModel, UIScrollView, UIViewController;
@protocol SCActionHandling, SCScrollViewContentProtocol;

@interface SCModalCardRootView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, SCActionable>
{
    UIViewController *_parentViewController;
    UIView<SCScrollViewContentProtocol> *_contentView;
    FBKVOController *_observeController;
    SCModalCardRootViewModel *_viewModel;
    _Bool _responseToScroll;
    id <SCActionHandling> _actionHandler;
    UIScrollView *_scrollView;
    UIView *_contentContainerView;
    UIView *_headerView;
}

- (void).cxx_destruct;
- (void)_didTapBackgroundView;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 parentViewController:(id)arg2 contentView:(id)arg3 viewModel:(id)arg4;
- (void)layoutSubviews;
@property(nonatomic) _Bool responseToScroll; // @synthesize responseToScroll=_responseToScroll;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

