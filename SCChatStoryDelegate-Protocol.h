//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatVisibilityProvider-Protocol.h"

@class FriendStories, NSString;

@protocol SCChatStoryDelegate <SCChatVisibilityProvider>
- (void)didTapToViewFriendStoryForUsername:(NSString *)arg1 isGroupConversation:(_Bool)arg2 viewLocation:(long long)arg3;
- (void)didTapToViewStoryForFriendStories:(FriendStories *)arg1 username:(NSString *)arg2 viewingType:(long long)arg3 viewLocation:(long long)arg4;
@end

