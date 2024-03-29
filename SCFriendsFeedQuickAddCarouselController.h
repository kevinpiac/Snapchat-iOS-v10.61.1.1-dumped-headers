//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAddFriendsQuickAddLogger, SCExperimentManager, SCFriendsFeedQuickAddCarouselActionHandler, SCFriendsFeedQuickAddCarouselDataSource, SCLazy, SCObservable, SCSectionBasedCollectionViewUpdater, UICollectionView;
@protocol SCCollectionViewCarouselSectionRowCountProviding, SCImageDownloading, SCSectionDataProviding, SCSnapchatterRanking;

@interface SCFriendsFeedQuickAddCarouselController : NSObject
{
    UICollectionView *_quickAddCarouselCollectionView;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    SCFriendsFeedQuickAddCarouselDataSource *_quickAddCarouselDataSource;
    SCLazy *_snapchatterDataFetcher;
    SCLazy *_snapchatterDataTracker;
    SCLazy *_userInfoProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    id <SCImageDownloading> _imageDownloader;
    SCFriendsFeedQuickAddCarouselActionHandler *_actionHandler;
    SCAddFriendsQuickAddLogger *_logger;
    SCObservable *_addFriendsDisplayDateObservable;
    id <SCSnapchatterRanking> _snapChatterRanker;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProviding> _sectionDataProvider;
    id <SCCollectionViewCarouselSectionRowCountProviding> _carouselSectionRowCountProvider;
}

- (void).cxx_destruct;
- (void)_reloadSections;
- (void)_setupCollectionViewUpdater;
- (double)heightForCarouselCell;
- (id)initWithQuickAddCarouselCollectionView:(id)arg1 quickAddCarouselDataSource:(id)arg2 snapchattersDataProvider:(id)arg3 snapchattersDataTracker:(id)arg4 userProvider:(id)arg5 viewedIncomingFriendsTracker:(id)arg6 snapchattersDataMutator:(id)arg7 sessionRequestManager:(id)arg8 imageDownloader:(id)arg9 openMiniProfileActionHandler:(id)arg10 hideAllSuggestedFriendsActionHander:(id)arg11 displayDateObservable:(id)arg12 suggestionRankingCoordinator:(id)arg13 experimentManager:(id)arg14;
- (void)logSeenAndAddedSuggestedSnapchatters;
- (void)reloadData;
- (void)resetCarouselOffset;
- (void)setQuickAddCarouselCollectionView:(id)arg1;

@end

