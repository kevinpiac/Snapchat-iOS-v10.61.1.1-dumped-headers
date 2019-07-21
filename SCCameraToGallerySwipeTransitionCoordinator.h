//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSwipeTransitionCoordinator.h"

#import "SCGalleryReturnButtonControlDelegate-Protocol.h"
#import "SCSwipeTransitionCoordinatorDataSource-Protocol.h"

@class MainViewController, NSString, SCGalleryViewController, SCUserSession;

@interface SCCameraToGallerySwipeTransitionCoordinator : SCSwipeTransitionCoordinator <SCSwipeTransitionCoordinatorDataSource, SCGalleryReturnButtonControlDelegate>
{
    _Bool _didInitializeCloudSync;
    SCGalleryViewController *_galleryViewController;
    MainViewController *_mainViewController;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_initCloudSync;
@property(nonatomic) _Bool didInitializeCloudSync; // @synthesize didInitializeCloudSync=_didInitializeCloudSync;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryReturnButtonControlDidUpdate:(id)arg1;
@property(retain, nonatomic) SCGalleryViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
- (id)initWithMainViewController:(id)arg1 userSession:(id)arg2;
@property(nonatomic) __weak MainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)passthroughViews;
- (void)present:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)scrollToFeatured;
- (void)scrollToGallerySpectaclesWithPairingSessionInfo:(id)arg1;
- (void)scrollToLaguna;
- (void)scrollToSavedWithSnapId:(id)arg1;
- (void)setPressingCameraButton:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

