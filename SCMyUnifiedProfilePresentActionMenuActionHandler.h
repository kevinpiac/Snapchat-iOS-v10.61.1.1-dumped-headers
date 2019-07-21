//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCMyUnifiedProfileActionMenuActionHandlerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"

@class NSString, SCUnifiedActionMenuPresenter, SCUnifiedProfileMyStoriesDataSourceManager, UIViewController;
@protocol SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate;

@interface SCMyUnifiedProfilePresentActionMenuActionHandler : NSObject <SCMyUnifiedProfileActionMenuActionHandlerDelegate, SCUnifiedActionMenuPresenterDelegate, SCTraceEnabled, SCActionHandling>
{
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    UIViewController *_presentingViewController;
    id <SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_presentCustomStoryCreationActionMenu;
- (void)_presentIdentitySnapcodeActionMenu;
- (void)_presentIdentityStoryActionMenu;
- (void)_presentMenuViewWithDataProvider:(id)arg1;
- (void)_presentMyStorySnapActionMenu:(long long)arg1 storyIdentifier:(id)arg2 snapId:(id)arg3 storyHasPosted:(_Bool)arg4;
- (void)_presentMyStoryStoryActionMenu:(long long)arg1 storyIdentifier:(id)arg2;
@property(nonatomic) __weak id <SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissMyUnifiedProfileActionMenuForActionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleActionFromMyUnifiedProfileActionMenuForActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithStoriesDataSourceManager:(id)arg1;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)unifiedActionMenuPresenterWillDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

