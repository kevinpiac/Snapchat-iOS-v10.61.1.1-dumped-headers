//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCCustomStorySettingsViewControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString, SCCustomStorySettingsViewController, SCLazy, SCOurStoryContentReplacement, SCTableViewDetailTextRotator, SCUserSession, UITableView, UIViewController;
@protocol SCCanceling, SCMiniProfileViewControllerDelegate><SCGroupMiniProfileViewControllerDelegate, SCStoryQuickPostDelegate;

@interface SCStoryQuickPostView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SCCustomStorySettingsViewControllerDelegate, SCTraceEnabled>
{
    NSMutableArray *_mutableGroupStoriesSelected;
    NSMutableArray *_mutableOurStoriesSelected;
    long long _totalStoriesCount;
    id <SCMiniProfileViewControllerDelegate><SCGroupMiniProfileViewControllerDelegate> _delegate;
    UIViewController *_viewController;
    SCTableViewDetailTextRotator *_tableViewTextRotator;
    SCCustomStorySettingsViewController *_groupStoriesSettingsViewController;
    _Bool _includeBusinessProfiles;
    NSArray *_businessProfileHandlers;
    NSDictionary *_businessProfileHandlersByBusinessId;
    NSSet *_selectedBusinessProfileIds;
    id <SCCanceling> _managedBusinessProfilesObserver;
    SCLazy *_storiesSendToCoordinator;
    SCLazy *_ourStoriesDescriptionProvider;
    _Bool _addToMyStory;
    UITableView *_tableView;
    NSArray *_ourStories;
    NSString *_ourStoryPlaceNameSuffix;
    id <SCStoryQuickPostDelegate> _storyQuickPostDelegate;
    SCUserSession *_userSession;
    UIViewController *_presenterViewController;
    SCOurStoryContentReplacement *_ourStoryContentReplacement;
    NSArray *_groupStoryPublications;
}

- (void).cxx_destruct;
- (void)_batchAppendNewPublications:(id)arg1;
- (id)_currentOurStories;
- (void)_didAcceptSendForOurStory:(id)arg1;
- (void)_didSelectBusinessProfileHandler:(id)arg1;
- (void)_didSelectPostGroupStory:(id)arg1;
- (void)_didSelectPostOurStoryCellWithOurStory:(id)arg1;
- (void)_displayIntroSendForOurStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayIntroSendForOurStoryUsingDocWithOurStory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayIntroSendWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_hasMaxGroupStoriesRecipients;
- (void)_initGesture;
- (_Bool)_isSharedStoryOurStory:(id)arg1;
- (void)_longPress:(id)arg1;
- (id)_myGroupStoryPublicationAtIndex:(unsigned long long)arg1;
- (struct _NSRange)_myStoryRowsRange;
- (_Bool)_needsIntroSendForOurStory:(id)arg1;
- (void)_populateCellDisplayTextForGroupStory:(id)arg1 cell:(id)arg2;
- (void)_presentGroupStoryPublicationMiniProfile:(id)arg1;
- (void)_presentMischiefMiniProfile:(id)arg1;
- (void)_reloadBusinessProfileHandlersAndAnnounce:(_Bool)arg1;
- (void)_selectBusinessProfileHandler:(id)arg1;
- (void)_sendDidUpdateRecipients;
- (void)_showSettingsControllerForPublication:(id)arg1 sourceType:(long long)arg2;
- (unsigned long long)_storiesRecipientCount;
- (void)_toggleOurStory:(id)arg1;
- (void)_updateTotalStoriesCount;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
- (_Bool)addToOurStory;
- (id)businessProfilesSelected;
- (_Bool)continueSendingAfterRemovingUnavailable;
- (id)customStoriesSelected;
- (void)customStorySettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2;
- (void)customStorySettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2;
- (void)customStorySettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2;
- (void)customStorySettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3;
- (void)customStorySettingsViewControllerDidAttemptToKeepEditing:(id)arg1;
- (void)customStorySettingsViewControllerDidFinishEditing:(id)arg1;
- (void)dealloc;
- (void)didCreateNewGroupStory:(id)arg1;
- (void)didMoveToSuperview;
- (void)didRemoveGroupStoryWithId:(id)arg1;
- (void)didSelectCellAtIndexPath:(id)arg1 withCell:(id)arg2;
- (void)didSelectPostMyStoryCell;
@property(readonly, copy, nonatomic) NSArray *groupStoryPublications; // @synthesize groupStoryPublications=_groupStoryPublications;
- (id)initWithUserSession:(id)arg1 storiesSendToCoordinator:(id)arg2 ourStoriesDescriptionProvider:(id)arg3 includeBusinessProfiles:(_Bool)arg4 miniProfileDelegate:(id)arg5 viewController:(id)arg6;
- (void)layoutSubviews;
- (void)leaveGroupStoryForPublication:(id)arg1;
- (void)logStoriesSelectionWithLoggingParameters:(id)arg1;
- (double)maxWidthForSelectContactCell;
- (id)mutableGroupStoriesSelected;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *ourStories; // @synthesize ourStories=_ourStories;
- (id)ourStoriesSelected;
@property(copy, nonatomic) SCOurStoryContentReplacement *ourStoryContentReplacement; // @synthesize ourStoryContentReplacement=_ourStoryContentReplacement;
@property(copy, nonatomic) NSString *ourStoryPlaceNameSuffix; // @synthesize ourStoryPlaceNameSuffix=_ourStoryPlaceNameSuffix;
- (void)presentGroupStorySettingsForPublication:(id)arg1;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
- (_Bool)selectBusinessProfileStoryOrHostedStory:(id)arg1;
- (void)selectSharedStoryByUsername:(id)arg1;
@property(nonatomic) __weak id <SCStoryQuickPostDelegate> storyQuickPostDelegate; // @synthesize storyQuickPostDelegate=_storyQuickPostDelegate;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (unsigned long long)storyRowTypeOfRowAtIndexPath:(id)arg1 resolvedIndex:(unsigned long long *)arg2;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateActionCounters:(id)arg1;
- (void)updateGroupStories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

