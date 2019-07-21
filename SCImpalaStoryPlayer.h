//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCStoryPlayerPlaying-Protocol.h"
#import "SCImpalaStoryPlayerPresenterDelegate-Protocol.h"

@class NSString, SCImpalaStoryPlayerPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCImpalaStoryPlayerDelegate;

@interface SCImpalaStoryPlayer : NSObject <SCImpalaStoryPlayerPresenterDelegate, SCCStoryPlayerPlaying>
{
    _Bool _allowSubscribe;
    SCImpalaStoryPlayerPresenter *_storyPlayerPresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
    id <SCImpalaStoryPlayerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCImpalaStoryPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 presentingViewController:(id)arg3;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 presentingViewController:(id)arg3 allowSubscribe:(_Bool)arg4;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)playEncodedStoryDocs:(id)arg1 baseViews:(id)arg2 startingIndex:(unsigned long long)arg3 publisherInfo:(id)arg4 encodedWatchedState:(id)arg5 contentViewSource:(long long)arg6;
- (void)playItems:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)playItemsWithItemProvider:(CDUnknownBlockType)arg1 baseView:(id)arg2 options:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)playStoryForBusinessProfileHandler:(id)arg1 baseView:(id)arg2 startWithUnviewed:(_Bool)arg3 useCircleTransition:(_Bool)arg4 contentViewSource:(long long)arg5;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)storyPlayerPresenterDidFinishDismissing:(id)arg1;
- (void)storyPlayerPresenterWillBeginDismissing:(id)arg1;
- (void)storyPlayerPresenterWillBeginPresenting:(id)arg1;
- (id)toJavaScript;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
