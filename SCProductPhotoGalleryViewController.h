//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NYTPhotoViewControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSNotificationCenter, NSString, NYTPhotoTransitionController, NYTPhotoViewController, UIPageControl, UIPageViewController, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol NYTPhoto, NYTPhotosViewControllerDataSource, SCProductPhotoGalleryViewControllerDelegate;

@interface SCProductPhotoGalleryViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, NYTPhotoViewControllerDelegate>
{
    id <SCProductPhotoGalleryViewControllerDelegate> _delegate;
    id <NYTPhotosViewControllerDataSource> _dataSource;
    UIPageViewController *_pageViewController;
    NYTPhotoTransitionController *_transitionController;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UIPageControl *_pageControl;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint boundsCenterPoint;
- (void)commonInitWithPhotos:(id)arg1 initialImageIndex:(long long)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) NYTPhotoViewController *currentPhotoViewController;
@property(readonly, nonatomic) id <NYTPhoto> currentlyDisplayedPhoto;
@property(retain, nonatomic) id <NYTPhotosViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) __weak id <SCProductPhotoGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didNavigateToPhoto:(id)arg1;
- (void)didPanWithGestureRecognizer:(id)arg1;
- (void)didSingleTapWithGestureRecognizer:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotos:(id)arg1;
- (id)initWithPhotos:(id)arg1 initialImageIndex:(long long)arg2;
- (id)initWithPhotos:(id)arg1 initialImageIndex:(long long)arg2 delegate:(id)arg3;
- (id)newPhotoViewControllerForPhoto:(id)arg1;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void)photoViewController:(id)arg1 didLongPressWithGestureRecognizer:(id)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) UIView *referenceViewForCurrentPhoto;
- (void)setCurrentlyDisplayedViewController:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) NYTPhotoTransitionController *transitionController; // @synthesize transitionController=_transitionController;
- (void)setupPageViewControllerWithInitialPhoto:(id)arg1;
- (void)updatePhoto:(id)arg1;
- (void)updatePhotoGalleryWithPhotos:(id)arg1;
- (void)updatePhotoWithImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

