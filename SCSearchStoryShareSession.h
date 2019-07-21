//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSString, SCSearchModalPresentationController, SCSendToTransitionProvider, SCUserSession, Story, UIViewController;
@protocol SCSearchStoryShareSessionDelegate, SCSendToScreen;

@interface SCSearchStoryShareSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    Story *_story;
    NSString *_dynamicStoryId;
    UIViewController<SCSendToScreen> *_sendVC;
    SCSearchModalPresentationController *_modalViewController;
    SCSendToTransitionProvider *_transitionProvider;
    id <SCSearchStoryShareSessionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_incrementSearchStoryShareTrophyMetrics;
- (id)customDismissalAnimator;
@property(nonatomic) __weak id <SCSearchStoryShareSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 dynamicStory:(id)arg2 coverImage:(id)arg3;
- (void)leftButtonPressed;
- (void)send;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedPhoneNumbers:(id)arg3 storiesPostingConfig:(id)arg4 businessIds:(id)arg5 mischiefs:(id)arg6 businessProfiles:(id)arg7 appStories:(id)arg8 gallery:(_Bool)arg9 inviteRecipientShown:(long long)arg10 additionalText:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

