//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCGalleryUserContext;

@protocol SCGalleryInChatLogger
- (void)addEvent:(NSArray *)arg1 withMessageId:(NSString *)arg2;
- (void)logIfSendFromGalleryWithMessageId:(NSString *)arg1 failureReason:(NSString *)arg2;
- (NSArray *)sendToChatBlizzardEventsWithMediaArray:(NSArray *)arg1 recipientCount:(long long)arg2 mischiefIds:(NSArray *)arg3 postToStory:(_Bool)arg4 userContext:(SCGalleryUserContext *)arg5;
@end

