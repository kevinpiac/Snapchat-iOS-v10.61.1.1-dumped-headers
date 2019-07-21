//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"
#import "SCSearchAttachmentsWebViewDelegate-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchScrollViewDismissalGestureControllerDelegate-Protocol.h"
#import "SCSearchWebViewNavigationTrackerDelegate-Protocol.h"

@class NSString, NSURL, SCEventListenerAnnouncer, SCSafeBrowsingAPI, SCSearchAttachmentsWebView, SCSearchContentViewControllerContext, SCSearchScrollViewDismissalGestureController, SCSearchURLQuery, SCSearchWebViewNavigationTracker;
@protocol SCActionHandling, SCImageDownloading, SCSearchWebViewControllerDelegate;

@interface SCSearchWebViewController : UIViewController <SCSearchWebViewNavigationTrackerDelegate, SCSearchAttachmentsWebViewDelegate, SCSafeBrowsingWarningViewDelegate, SCSearchScrollViewDismissalGestureControllerDelegate, SCSearchContentViewControlling, SCEventAnnouncing>
{
    NSURL *_attachedURL;
    SCSearchURLQuery *_presentingQuery;
    long long _launchSource;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchAttachmentsWebView *_webView;
    SCSearchWebViewNavigationTracker *_webViewNavigationTracker;
    double _progressViewOffset;
    id <SCImageDownloading> _imageDownloader;
    SCSearchScrollViewDismissalGestureController *_dismissalGestureController;
    _Bool _canSetSearchBarURL;
    NSURL *_originalURL;
    _Bool _isWebAttachmentRedirectEnabled;
    SCSafeBrowsingAPI *_safeBrowsingAPI;
    _Bool _shouldShowAttachButton;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    id <SCActionHandling> _actionHandler;
    id <SCSearchWebViewControllerDelegate> _delegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceWebViewOpenFromQuery;
- (void)_attachDeepLink:(id)arg1;
- (void)_clearSearchViewContent;
- (void)_configureRightBarButtonItemActions;
- (void)_didPressCloseButton;
- (void)_dismissSearchViewController;
- (void)_performRotationUpdates:(struct CGSize)arg1;
- (void)_removeAttachedDeepLink:(id)arg1;
- (void)_resetSearchBar;
- (void)_resignSearchBarIfNeeded;
- (void)_resignWebViewIfNeeded;
- (void)_updateAttachButtonActionModel;
- (void)_updateDisplayText;
- (void)_updateFavicon:(id)arg1 pageURL:(id)arg2;
- (void)_updateFaviconImage:(id)arg1 pageURL:(id)arg2;
- (void)_updateLockAndFavicon;
- (void)_updatePresentingURLForPresentedQuery:(id)arg1;
- (void)_updateRightBarButtonStateWithSearchText:(id)arg1;
- (void)_updateWebViewModelWithValidURL:(id)arg1 shouldShowPerceivedProgress:(_Bool)arg2;
- (id)_urlForAttachmentWithCurrentURL:(id)arg1;
@property(nonatomic) __weak id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)attachmentWebViewDidScroll;
- (void)attachmentWebViewDidTapBackButton:(id)arg1;
- (void)attachmentsWebView:(id)arg1 didTapWithActionModel:(id)arg2;
@property(nonatomic) __weak id <SCSearchWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)gestureController:(id)arg1 didFinishDismissalAnimationForView:(id)arg2;
- (void)gestureControllerDidTriggerDismiss:(id)arg1;
- (id)getPageViewName;
- (void)goBackFromSafeBrowsing;
- (id)initWithUserSession:(id)arg1 attachedURL:(id)arg2 presentingQuery:(id)arg3 launchSource:(long long)arg4;
- (void)learnMoreFromSafeBrowsing;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void)searchControllerDidBeginEditing;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchControllerDidEndEditing;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
@property(nonatomic) _Bool shouldShowAttachButton; // @synthesize shouldShowAttachButton=_shouldShowAttachButton;
- (_Bool)shouldBeginInteractiveDismissalGesture;
- (_Bool)shouldDisplayStatusBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)webViewNavigationTracker:(id)arg1 didCheckSafeBrowsingForURL:(id)arg2 urlType:(long long)arg3;
- (void)webViewNavigationTracker:(id)arg1 didLoadEstimatedProgress:(double)arg2;
- (void)webViewNavigationTracker:(id)arg1 didNavigateToDeepLink:(id)arg2 isInternalDeeplink:(_Bool)arg3;
- (void)webViewNavigationTrackerDidUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

