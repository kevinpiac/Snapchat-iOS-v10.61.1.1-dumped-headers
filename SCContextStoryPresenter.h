//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextFriendStoriesPresenterDelegate-Protocol.h"

@class FriendStories, NSString, SCContextFriendStoriesPresenter, SCContextSession, SCUserSession, SCWeakTimer, UIView, UIViewController;
@protocol NavigationDelegate, SCContextStoryPresenterDelegate><SCContextOperaPresenterDelegate;

@interface SCContextStoryPresenter : NSObject <SCContextFriendStoriesPresenterDelegate>
{
    SCUserSession *_userSession;
    SCContextSession *_session;
    SCContextFriendStoriesPresenter *_presenter;
    id <NavigationDelegate> _navigationDelegate;
    FriendStories *_friendStories;
    NSString *_identifier;
    SCWeakTimer *_mediaRequestTimer;
    UIView *_baseView;
    UIViewController *_presentingViewController;
    _Bool _circleTransition;
    id <SCContextStoryPresenterDelegate><SCContextOperaPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_mediaRequestCompleted;
- (void)_mediaRequestFailed:(id)arg1;
- (void)_mediaRequestTimedOut;
- (void)_presentFriendStories:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4;
@property(nonatomic) __weak id <SCContextStoryPresenterDelegate><SCContextOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithContextSession:(id)arg1 navigationDelegate:(id)arg2;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)presentFriendStories:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4;
- (void)presentStory:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4;
- (void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2;
- (void)storyPresenterDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

