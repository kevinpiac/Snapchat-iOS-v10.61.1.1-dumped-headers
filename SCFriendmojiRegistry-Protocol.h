//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, SOJUEmojiInfo, SOJUFriendmoji;

@protocol SCFriendmojiRegistry
- (NSString *)emojiForFriendmojiType:(NSString *)arg1;
- (SOJUEmojiInfo *)emojiInfoForFriendmojiType:(NSString *)arg1;
- (SOJUFriendmoji *)registerEmoji:(NSString *)arg1 forOfficialUserWithId:(NSString *)arg2;
- (void)registerReadOnlyEmojiInfoDict:(NSDictionary *)arg1;
@end

