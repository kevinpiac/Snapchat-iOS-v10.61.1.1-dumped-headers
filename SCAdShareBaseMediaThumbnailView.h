//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaThumbnailView.h"

#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCBaseMediaThumbnailViewModel, SCOperaPlaylistCameraPlugin, SCOperaPlaylistNotificationOptInPlugin, SCOperaPresenter, UIViewController, UIWindow;
@protocol SCAdShareMediaThumbnailViewModel, SCChatCellBaseGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCAdShareBaseMediaThumbnailView : SCBaseMediaThumbnailView <SCOperaPresenterDelegate>
{
    SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *_adShareMediaViewModel;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    UIWindow *_mediaFullScreenWindow;
    UIWindow *_originalKeyWindow;
    SCOperaPresenter *_operaPresenter;
    SCOperaPlaylistNotificationOptInPlugin *_notificationOptInPlugin;
    SCOperaPlaylistCameraPlugin *_cameraPlugin;
}

- (void).cxx_destruct;
- (void)_hideBaseView:(_Bool)arg1;
- (id)baseView;
- (void)createFullScreenView;
- (void)dismissFullScreenView;
- (_Bool)fullScreenIsShown;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;
- (void)onRenderingDoneWithMediaType:(id)arg1;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)setMediaViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

