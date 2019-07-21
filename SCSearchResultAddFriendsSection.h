//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCInviteFriendStateListener-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionableDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCLazy, SCSearchGenericPeopleSectionConfiguration, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSearchThresholdBasedModelContainer;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler, SCSnapchattersDataSearching;

@interface SCSearchResultAddFriendsSection : NSObject <SCEventListener, SCActionHandling, SCSectionKitCollectionViewViewMoreActionableDelegate, SCSnapchattersDataRequestListener, SCInviteFriendStateListener, SCActionable, SCCollectionViewSection, SCEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchGenericPeopleSectionConfiguration *_configuration;
    NSArray *_mergedPeople;
    NSDictionary *_snapchatterMutationState;
    NSDictionary *_snapchattersByNames;
    NSDictionary *_nonSnapchattersByNames;
    SCSearchThresholdBasedModelContainer *_viewModelContainer;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCLazy *_usernameToSnapchatterFether;
    id <SCSnapchattersDataSearching> _snapchatterSearcher;
    SCLazy *_snapchatterFetcher;
    SCLazy *_nonSnapchatterFetcher;
    SCLazy *_blockedSnapchatterFetcher;
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _resetData;
    id <SCActionHandling> _actionHandler;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceActionWithData:(id)arg1;
- (void)_announceOnScreenForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_announceSearchResultForSection;
- (void)_flipExpandedStatus;
- (_Bool)_handleActionForSnapchatter:(id)arg1 actionModel:(id)arg2 sourceView:(id)arg3 atIndexPath:(id)arg4 sender:(id)arg5;
- (void)_handleFriendsUpdateForAddFriendsSection;
- (void)_handleFriendsUpdateWithConfiguration:(id)arg1 localSnapchatters:(id)arg2 blockedSnapchatters:(id)arg3 nonSnapchatters:(id)arg4 shouldResetExpansion:(_Bool)arg5;
- (void)_handleFriendsUpdateWithConfiguration:(id)arg1 mergedPeople:(id)arg2 snapchattersByNamesMap:(id)arg3 nonSnapchattersByDisplayNameMap:(id)arg4 shouldResetExpansion:(_Bool)arg5;
- (_Bool)_isFriendCellAtIndex:(unsigned long long)arg1;
- (id)_loggingInfoForCellAtIndexPath:(id)arg1 action:(long long)arg2;
- (long long)_loggingResultSectionKey;
- (id)_loggingSectionTypeKey;
- (void)_mergeLocalAndRemoteResultAndUpdateWithRemoteSearchResults:(id)arg1 configuration:(id)arg2 shouldResetExpansion:(_Bool)arg3;
- (void)_reloadCellWithConfiguration:(id)arg1 mergedPeople:(id)arg2 snapchattersByNames:(id)arg3 viewModelContainer:(id)arg4 indexes:(id)arg5;
- (void)_resetContent;
- (void)_updateCellsWithConfiguration:(id)arg1 mergedPeople:(id)arg2 snapchattersByNames:(id)arg3 viewModelContainer:(id)arg4;
- (void)_updateDataWithConfiguration:(id)arg1 mergedPeople:(id)arg2 snapchattersByNames:(id)arg3 viewModelContainer:(id)arg4;
- (void)_updatePersonMutationStateWithPhoneNumber:(id)arg1 mutationState:(long long)arg2 forceUpdate:(_Bool)arg3;
- (void)_updatePersonMutationStateWithUserId:(id)arg1 snapchatter:(id)arg2 mutationState:(long long)arg3 forceUpdate:(_Bool)arg4;
- (void)_updateSection;
- (void)_updateSectionWithConfiguration:(id)arg1 mergedPeople:(id)arg2 snapchattersByNames:(id)arg3 viewModelContainer:(id)arg4;
- (void)_updateWithRemoteSearchResults:(id)arg1 configuration:(id)arg2 shouldResetExpansion:(_Bool)arg3;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
- (id)customizedHeaderView;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndFetchingFriendDeeplinkForPhoneNumber:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
- (void)didEndInvitingFriendWithPhoneNumber:(id)arg1 success:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartFetchingFriendDeeplinkForPhoneNumber:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSearchSession:(id)arg1 usernameToSnapchatterFetcher:(id)arg2 snapchatterSearcher:(id)arg3 snapchatterTracker:(id)arg4 snapchatterFetcher:(id)arg5 nonSnapchatterFetcher:(id)arg6 inviteFriendStateTracker:(id)arg7 blockedSnapchatterFetcher:(id)arg8;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (unsigned long long)numberOfCellsInSection;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
- (id)sectionInfo;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void)setUp;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;
- (void)tearDown;
- (void)viewMoreCollectionViewCellDidTapViewMore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

