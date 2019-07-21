//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCCheetahSendToStoryDataSource, SCDocSendToStoryDataSource, SCLazy, SCPublicContentMiniProfileController, SCSendToGroupStoryActionController, SCSendToSelectionStateManager, SCUserSession, UIViewController;
@protocol SCSearchContentViewControlling;

@interface SCCheetahSendToStoryActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    SCCheetahSendToStoryDataSource *_storyDataSource;
    SCDocSendToStoryDataSource *_docStoryDataSource;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToGroupStoryActionController *_groupStoryActionController;
    SCPublicContentMiniProfileController *_publicContentMiniProfileController;
    SCLazy *_ourStoriesDescriptionAccess;
    UIViewController<SCSearchContentViewControlling> *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_displayIntroForBestOfSpectaclesStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroForLensChallengeStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroForSharedStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroIfNecessaryForBusinessId:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroIfNecessaryForGroupStoryId:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroSendForLiveStoryID:(id)arg1 storyDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayIntroSendWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayIntroSendWithTitle:(id)arg1 message:(id)arg2 okayActionText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_displayOurStoryNameAttributionToggleViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleCreateStory;
- (void)_handleLongPressForChatStoryId:(id)arg1;
- (void)_handleLongPressForGroupStory:(id)arg1;
- (void)_handleSelectAppStoryForDataModel:(id)arg1;
- (void)_handleSelectStoryForDataModel:(id)arg1;
- (void)_handleSelectedAccessoryButtonForDataModel:(id)arg1;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (_Bool)_shouldDeselectLastRecipientsButton;
- (void)_showAuthorizationMenuForAppStoryInDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 storyDataSource:(id)arg2 docStoryDataSource:(id)arg3 ourStoriesDescriptionProvider:(id)arg4 selectionStateManager:(id)arg5 groupStoryActionDelegate:(id)arg6;
@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

