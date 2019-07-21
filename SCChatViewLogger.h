//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatViewLifeCycleListener-Protocol.h"

@class NSString, UIViewController;
@protocol SCChatConversationViewModel;

@interface SCChatViewLogger : NSObject <SCChatViewLifeCycleListener, SCChatConversationUpdaterListener>
{
    UIViewController *_viewController;
    NSString *_currentUsername;
    _Bool _isViewVisible;
    id <SCChatConversationViewModel> _chatViewModel;
    double _enterTime;
    long long _storyViewType;
    long long _chatPageSource;
    long long _entryEvent;
    NSString *_chatSubpageName;
    _Bool _didLogSCAChatCreate;
}

- (void).cxx_destruct;
- (void)_logSCAChatCreate;
- (void)_reportMediaCardsOpen;
- (void)didConversationViewModelChange:(id)arg1;
- (long long)getChatExitEvent;
- (id)initWithViewController:(id)arg1 currentUsername:(id)arg2;
- (void)onEnterChatView;
- (void)onExitChatView;
- (void)setChatEntryEvent:(long long)arg1;
- (void)setChatExitEvent:(long long)arg1;
- (void)setChatPageSource:(long long)arg1;
- (void)setChatSubpageName:(id)arg1;
- (void)setStoryViewType:(long long)arg1;
- (void)viewDidBecomeActive;
- (void)viewDidSwipeIn;
- (void)viewDidSwipeOut;
- (void)viewWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

