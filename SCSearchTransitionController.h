//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchViewControllerTransitioning-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "SearchTransitionPullDownScrollViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBKVOController, NSString, SCSearchNavigationBar, SCSearchView, SCSearchViewController, SearchTransitionPullDownScrollView, UIPanGestureRecognizer, UIView, UIVisualEffectView;
@protocol SCSearchTransitioning, SearchTransitionControllerDelegate;

@interface SCSearchTransitionController : NSObject <UIGestureRecognizerDelegate, SearchTransitionPullDownScrollViewDelegate, SCTraceEnabled, SCSearchViewControllerTransitioning, SCUpdateListener>
{
    UIVisualEffectView *_blurView;
    UIView *_blurOverlay;
    SCSearchNavigationBar *_navigationBar;
    SCSearchViewController *_containerViewController;
    _Bool _shouldHideKeyboard;
    _Bool _presenting;
    _Bool _interactive;
    _Bool _cancelled;
    _Bool _observingScrollView;
    _Bool _scrollViewBoundsExtended;
    id <SearchTransitionControllerDelegate> _delegate;
    UIPanGestureRecognizer *_pullDownToPresentGestureRecognizer;
    SCSearchView *_fromSearchView;
    id <SCSearchTransitioning> _searchTransitioning;
    FBKVOController *_KVOController;
    double _keyboardHeight;
    SearchTransitionPullDownScrollView *_pullDownToPresentScrollView;
    UIPanGestureRecognizer *_pullDownToDismissGestureRecognizer;
    struct CGPoint _dismissingContentOffset;
    struct CGRect _fromSearchViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
- (void)_reobserveTransitioning:(id)arg1;
- (void)_scrollViewBoundsChanged:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)beginInteractiveTransition;
- (void)beginObservingBoundsForScrollView:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)dealloc;
@property(nonatomic) __weak id <SearchTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dismissSearchTextView;
- (void)dismissSearchWithTransitionContext:(id)arg1;
@property(nonatomic) struct CGPoint dismissingContentOffset; // @synthesize dismissingContentOffset=_dismissingContentOffset;
- (void)endObservingBoundsForScrollView:(id)arg1;
- (void)finishInteractiveDismissal;
- (void)finishInteractivePresentation;
- (void)finishInteractivePresentationCancellation;
@property(nonatomic) __weak SCSearchView *fromSearchView; // @synthesize fromSearchView=_fromSearchView;
@property(nonatomic) struct CGRect fromSearchViewFrame; // @synthesize fromSearchViewFrame=_fromSearchViewFrame;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isObservingScrollView) _Bool observingScrollView; // @synthesize observingScrollView=_observingScrollView;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic, getter=isScrollViewBoundsExtended) _Bool scrollViewBoundsExtended; // @synthesize scrollViewBoundsExtended=_scrollViewBoundsExtended;
- (void)keyboardFrameWillChange:(id)arg1;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (id)keyboardWindow;
- (void)presentSearchTextView;
- (void)presentSearchWithTransitionContext:(id)arg1;
- (void)pullDownToDismiss:(id)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *pullDownToDismissGestureRecognizer; // @synthesize pullDownToDismissGestureRecognizer=_pullDownToDismissGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pullDownToPresentGestureRecognizer; // @synthesize pullDownToPresentGestureRecognizer=_pullDownToPresentGestureRecognizer;
@property(retain, nonatomic) SearchTransitionPullDownScrollView *pullDownToPresentScrollView; // @synthesize pullDownToPresentScrollView=_pullDownToPresentScrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)searchTransitionPullDownScrollViewCanBeginScrolling:(id)arg1;
@property(nonatomic) __weak id <SCSearchTransitioning> searchTransitioning; // @synthesize searchTransitioning=_searchTransitioning;
- (id)searchTransitioningForTransitionContext:(id)arg1;
@property(nonatomic) _Bool shouldHideKeyboard; // @synthesize shouldHideKeyboard=_shouldHideKeyboard;
- (double)transitionDuration:(id)arg1;
- (double)transitionPercentCompleteForGesture:(id)arg1;
- (void)updateInteractiveTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType interactiveDismissalHandler;
@property(readonly) Class superclass;

@end

