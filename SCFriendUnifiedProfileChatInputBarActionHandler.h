//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedProfileChatInputBarActionHandling-Protocol.h"

@class NSString, SCFriendUnifiedProfileDataSource;
@protocol SCActionHandling;

@interface SCFriendUnifiedProfileChatInputBarActionHandler : NSObject <SCUnifiedProfileChatInputBarActionHandling>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)handleNavigateToChatWithDeeplinkURLPath:(id)arg1;
- (void)handleOpenCamera;
- (id)initWithDataSource:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

