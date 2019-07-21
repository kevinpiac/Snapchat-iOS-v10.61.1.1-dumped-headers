//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCGalleryLagunaStoryStatusObserverDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionMenuTableView, SCGalleryLagunaStoryStatusObserver, SCUserSession, UIImage, UIPanGestureRecognizer, UIVisualEffectView;
@protocol SCGalleryCellActionMenuDataSource, SCGalleryCellActionMenuDelegate, SCGalleryItem, SCGallerySnap;

@interface SCGalleryCellActionMenu : UIView <UIGestureRecognizerDelegate, SCGalleryLagunaStoryStatusObserverDelegate>
{
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    double _topInset;
    _Bool _movedPastThreshold;
    struct CGPoint _initialPoint;
    _Bool _hasSetInitialPoint;
    UIPanGestureRecognizer *_panGesture;
    SCGalleryLagunaStoryStatusObserver *_lagunaStatusObserver;
    _Bool _isTransferringLagunaContent;
    id <SCGalleryCellActionMenuDelegate> _delegate;
    id <SCGalleryCellActionMenuDataSource> _dataSource;
    id <SCGalleryItem> _item;
    id <SCGallerySnap> _snap;
    SCActionMenuTableView *_actionMenuView;
    UIView *_containerView;
    UIView *_sourceView;
    UIImage *_sourceImage;
    UIView *_sourceViewCopy;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_addDismissMask;
- (void)_applicationDidEnterBackground;
- (void)_copySourceView;
- (void)_dismiss;
- (void)_dismissView;
- (id)_draggableView;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_layoutActionMenu;
- (void)_layoutActionMenuAboveCell;
- (void)_layoutActionMenuBelowCell;
- (id)_menuItems;
- (void)_observeLagunaStoryLoadingStates;
- (void)_presentView;
- (void)_resetDraggableView;
- (_Bool)_shouldAnimateCornerRadius;
- (double)_sourceViewCopyInitialScale;
- (struct CGAffineTransform)_translationTransform:(struct CGPoint)arg1;
- (void)_unobserveLagunaStoryLoadingStates;
- (void)_updateDismissMask;
- (void)_updateSourceViewIfNeeded;
- (void)_updateTransferringLagunaContent:(_Bool)arg1;
- (void)_willDismissView;
- (void)_willPresentView;
@property(readonly, nonatomic) SCActionMenuTableView *actionMenuView; // @synthesize actionMenuView=_actionMenuView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak id <SCGalleryCellActionMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryCellActionMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGestureChange:(id)arg1;
- (id)initWithItem:(id)arg1 snap:(id)arg2 sourceView:(id)arg3 sourceImage:(id)arg4 userSession:(id)arg5 dataSource:(id)arg6;
@property(readonly, nonatomic) _Bool isTransferringLagunaContent; // @synthesize isTransferringLagunaContent=_isTransferringLagunaContent;
@property(readonly, nonatomic) id <SCGalleryItem> item; // @synthesize item=_item;
- (void)presentInView:(id)arg1 topInset:(double)arg2;
@property(retain, nonatomic) UIView *sourceViewCopy; // @synthesize sourceViewCopy=_sourceViewCopy;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(readonly, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (struct CGRect)sourceViewFrame;
- (void)storyLoadingStatusObserver:(id)arg1 didUpdateContentLoadingProgress:(double)arg2 numberTransferring:(unsigned long long)arg3 currentlyTransferringContentProgress:(double)arg4;
- (void)storyLoadingStatusObserver:(id)arg1 didUpdateContentLoadingStatus:(long long)arg2;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

