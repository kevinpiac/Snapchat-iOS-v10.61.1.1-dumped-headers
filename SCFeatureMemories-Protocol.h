//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryViewControllerDelegate-Protocol.h"
#import "SCSpectaclesPairingDelegate-Protocol.h"

@class MainViewController, NSString, SCActionToolbarButtonItem, SCCameraToGallerySwipeTransitionCoordinator, SCGalleryViewController, SCHovaTabBarMemoriesItem, SCNavigationBarButtonItem, SCUserSession;
@protocol SCFeatureMemoriesDelegate, SCSwipeViewParentDelegate;

@protocol SCFeatureMemories <SCSpectaclesPairingDelegate, SCGalleryViewControllerDelegate>
+ (id)new;
@property(nonatomic) long long cameraViewType;
@property(nonatomic) __weak id <SCFeatureMemoriesDelegate> delegate;
- (void)dismiss:(_Bool)arg1 completion:(void (^)(void))arg2;
@property(readonly, nonatomic) SCCameraToGallerySwipeTransitionCoordinator *galleryTransitionCoordinator;
@property(readonly, nonatomic) SCGalleryViewController *galleryViewController;
- (_Bool)galleryViewVisible;
- (id)init;
- (void)initMemories;
- (id)initWithUserSession:(SCUserSession *)arg1 mainViewController:(MainViewController *)arg2;
- (_Bool)isGalleryViewCameraButtonVisible;
- (_Bool)isPresenting;
- (_Bool)lagunaTabViewVisible;
- (void)lockAllScrollWithKey:(NSString *)arg1;
@property(readonly, nonatomic) SCNavigationBarButtonItem *memoriesNavigationItem;
@property(readonly, nonatomic) SCHovaTabBarMemoriesItem *memoriesTabItem;
- (void)observeLagunaAppStatusChanges;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate;
- (double)percentPresented;
- (double)percentVisible;
- (void)removeAllScrollLocks;
- (void)scrollGalleryToFeaturedTab;
- (void)scrollGalleryToLagunaTab;
- (void)scrollGalleryToSavedTabWithSnapId:(NSString *)arg1;
- (void)scrollToCameraAnimated:(_Bool)arg1 reason:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)setGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMemoriesButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPressingCameraButton:(_Bool)arg1;
- (void)setTransitioningToMemories;
@property(readonly, nonatomic) SCActionToolbarButtonItem *toolbarButtonItem;
- (void)unlockAllScrollWithKey:(NSString *)arg1;
- (void)updateNavigationItem;
@end
