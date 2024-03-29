//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCCustomStoryActionHandler, SCUnifiedProfileAutoSaveGroupStoryActionHandler, SCUnifiedProfileMyStoriesDataSourceManager, SCUnifiedProfileStoriesUtilityActionHandler, SCUserSession, UIViewController;
@protocol SCPrivateStoriesSelectionPresenting;

@interface SCUnifiedProfileMyStoriesActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    id <SCPrivateStoriesSelectionPresenting> _privateStoriesSelectionPresenter;
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    SCUnifiedProfileStoriesUtilityActionHandler *_storiesUtilityActionHandler;
    SCUnifiedProfileAutoSaveGroupStoryActionHandler *_groupAutoSaveActionHandler;
    SCCustomStoryActionHandler *_customStoryActionHandler;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_autosaveMyStory:(_Bool)arg1 storyIdentifier:(id)arg2 storyType:(long long)arg3;
- (void)_deleteStory:(id)arg1;
- (void)_showCreateCustomStoryPage;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithStoriesUtilityActionHandler:(id)arg1 storiesDataSourceManager:(id)arg2 privateStoriesSelectionPresenter:(id)arg3 customStoriesDataMutator:(id)arg4 customStoriesDataFetcher:(id)arg5 userSession:(id)arg6;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

