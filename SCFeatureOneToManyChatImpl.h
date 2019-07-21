//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCChatOneToManyViewControllerDelegate-Protocol.h"
#import "SCFeatureOneToManyChat-Protocol.h"

@class NSString, SCChatOneToManyViewController, SCGrowingButton, SCUserSession, UIView, UIViewController;
@protocol SCOneToManyChatPresenterDelegate, SCOneToManyChatSendToDelegate;

@interface SCFeatureOneToManyChatImpl : SCFeature <SCChatOneToManyViewControllerDelegate, SCFeatureOneToManyChat>
{
    SCUserSession *_userSession;
    UIView *_containerView;
    UIViewController<SCOneToManyChatPresenterDelegate> *_oneToManyChatPresenterDelegate;
    id <SCOneToManyChatSendToDelegate> _oneToManyChatSendToDelegate;
    SCGrowingButton *_oneToManyChatButton;
    SCChatOneToManyViewController *_oneToManyChatViewController;
}

- (void).cxx_destruct;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (id)initWithUserSession:(id)arg1 oneToManyChatPresenterDelegate:(id)arg2 oneToManyChatSendToDelegate:(id)arg3 applicationLifecycleEvents:(id)arg4;
- (id)oneToManyChatButton;
- (void)oneToManyChatViewControllerDidDismiss;
- (void)oneToManyChatViewControllerDidFinishSendingChat:(id)arg1;
- (void)oneToManyChatViewControllerDidPressSend:(id)arg1 userSession:(id)arg2;
- (void)presentOneToManyChat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

