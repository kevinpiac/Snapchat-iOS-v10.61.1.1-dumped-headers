//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedProfileViewInjectedViewProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCFriendUnifiedProfileDataSource, UIView;
@protocol SCUnifiedProfileChatInputBarActionHandling, SCUnifiedProfileViewInjectedView;

@interface SCFriendUnifiedProfileChatInputBarInjectedViewProvider : NSObject <SCUpdateListener, SCUnifiedProfileViewInjectedViewProviding>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    id <SCUnifiedProfileChatInputBarActionHandling> _chatInputBarActionHandler;
    UIView<SCUnifiedProfileViewInjectedView> *_chatInputBarView;
}

- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithFriendDataSource:(id)arg1 hatInputBarActionHandler:(id)arg2;
- (id)injectedView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

