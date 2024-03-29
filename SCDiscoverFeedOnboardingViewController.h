//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCImpressionTrackingDelegate-Protocol.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableSet, NSString, SCDiscoverFeedInterestOnboardingConfig, SCDiscoverFeedOnboardingActionHandler, SCDiscoverFeedOnboardingDataCoordinator, SCDiscoverFeedOnboardingView, SCEventListenerAnnouncer, SCImpressionTracker, SCQueuePerformer, SCSectionBasedCollectionViewUpdater;
@protocol SCEventListener, SCImageDownloading;

@interface SCDiscoverFeedOnboardingViewController : UIViewController <SCDataCoordinatorListener, SCEventAnnouncing, SCImpressionTrackingDelegate, UICollectionViewDelegate, SCSectionBasedCollectionViewUpdaterDelegate>
{
    SCDiscoverFeedOnboardingView *_contentView;
    SCDiscoverFeedInterestOnboardingConfig *_onboardingConfig;
    struct CGAffineTransform _previousStatusBarTransform;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    unsigned long long _entryPoint;
    SCDiscoverFeedOnboardingDataCoordinator *_interestSelectionDataCoordinator;
    SCDiscoverFeedOnboardingActionHandler *_onboardingActionHandler;
    id <SCEventListener> _cheetahEventsController;
    id <SCImageDownloading> _imageDownloader;
    SCImpressionTracker *_impressionTracker;
    NSMutableSet *_longImpressionData;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_impressionDataPerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_impressionViewItemsForCell:(id)arg1;
- (void)_logDiscoverFeedEvent:(id)arg1 pageType:(long long)arg2;
- (void)_logLongImpressionData:(id)arg1;
- (void)_performUpdateImpressionItems:(id)arg1;
- (void)_updateImpressionItemForVisibleCells;
- (void)_updateOnboardingSubmissionViewWithNumberOfSelectedTopicIds:(unsigned long long)arg1;
- (void)_updateOnboardingSubmissionViewWithSubmissionStatus:(unsigned long long)arg1;
- (void)addListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)impressionTracker:(id)arg1 didReachThresholdForItems:(id)arg2 date:(id)arg3;
- (id)initWithOnboardingConfig:(id)arg1 imageDownloader:(id)arg2 entryPoint:(unsigned long long)arg3 cheetahEventsController:(id)arg4 onboardingDataCoordinator:(id)arg5;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

