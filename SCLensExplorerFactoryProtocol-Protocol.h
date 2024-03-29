//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCLensExplorerActionHandlerFactory, SCLensExplorerDataStoreFactory, SCLensExplorerEventsControllerManager, SCLensExplorerQueryCoordinatorFactory, SCLensExplorerRequestProviderFactory, SCLensExplorerSection, SCLensExplorerSectionCreator, SCLensExplorerSectionDebugInfoProvider, SCLensExplorerSectionIndexProvider, SCLensExplorerUnlockFlow, SCLensExplorerUserSettings, SCSearchQueryResultController, UICollectionView;
@protocol SCLensExplorerBaseViewModelDataProvider, SCLensExplorerDependencyProviderProtocol, SCLensExplorerLensItemQueryProvider, SCLensExplorerQueryFactoryProtocol, SCLensExplorerRouting;

@protocol SCLensExplorerFactoryProtocol <NSObject>
@property(readonly, nonatomic) SCLensExplorerActionHandlerFactory *actionHandlerFactory;
- (id <SCLensExplorerBaseViewModelDataProvider>)cellViewModelDataProviderWithSectionId:(NSString *)arg1;
- (id <SCLensExplorerQueryFactoryProtocol>)createQueryFactory;
@property(readonly, nonatomic) SCLensExplorerDataStoreFactory *dataStoreFactory;
- (SCLensExplorerSectionDebugInfoProvider *)debugInfoProvider;
- (id <SCLensExplorerDependencyProviderProtocol>)dependencyProvider;
- (SCLensExplorerEventsControllerManager *)eventsControllerManager;
@property(readonly, nonatomic) id <SCLensExplorerBaseViewModelDataProvider> lensChallengesCellViewModelDataProvider;
- (SCLensExplorerSection *)lensChallengesSection;
- (SCLensExplorerSection *)lensChallengesSnapsSectionWithLensChallengesSectionId:(NSString *)arg1;
- (SCSearchQueryResultController *)lensChallengesStoriesResultsControllerWithCollectionView:(UICollectionView *)arg1 lensChallengesId:(NSString *)arg2;
- (SCLensExplorerUnlockFlow *)lensExplorerLensUnlocker;
- (id <SCLensExplorerRouting>)lensExplorerRouter;
- (SCLensExplorerSection *)lensHalfHeightSection;
- (id <SCLensExplorerLensItemQueryProvider>)lensItemQueryProviderWithCategory:(unsigned long long)arg1;
- (SCSearchQueryResultController *)lensQueryResultsControllerWithCollectionView:(UICollectionView *)arg1 sectionIds:(NSArray *)arg2;
- (SCLensExplorerSection *)lensSection;
- (SCLensExplorerQueryCoordinatorFactory *)queryCoordinatorFactory;
- (SCLensExplorerRequestProviderFactory *)requestProviderFactory;
- (SCLensExplorerSectionCreator *)sectionCreator;
@property(readonly, nonatomic) SCLensExplorerSectionIndexProvider *sectionIndexProvider;
- (SCLensExplorerSection *)subscriptionLensesSection;
- (SCLensExplorerUserSettings *)userSettings;
@end

