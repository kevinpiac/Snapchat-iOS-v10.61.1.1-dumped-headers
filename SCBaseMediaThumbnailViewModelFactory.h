//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBaseMediaThumbnailViewModelFactory : NSObject
{
}

+ (id)createViewModelForMapSnapMetadata:(id)arg1 isSendingOrHasFailed:(_Bool)arg2 senderColor:(id)arg3 messageId:(id)arg4 conversationId:(id)arg5 enableStreaming:(_Bool)arg6;
+ (id)createViewModelForSearchStoryMetadata:(id)arg1 isSendingOrHasFailed:(_Bool)arg2 senderColor:(id)arg3;
+ (id)createViewModelForSharedSnapMediaContent:(id)arg1 mediaMetadata:(id)arg2 recipientForOneOnOneChat:(id)arg3 attribution:(id)arg4 currentUserId:(id)arg5;
+ (id)createViewModelForStoryReplyMediaContent:(id)arg1 mediaMetadata:(id)arg2 isSendingOrHasFailed:(_Bool)arg3 subtext:(id)arg4 shouldCropCircularMedia:(_Bool)arg5 useDisplayedMediaDirectly:(_Bool)arg6;
+ (id)createViewModelForStorySnapMetadata:(id)arg1 isSendingOrHasFailed:(_Bool)arg2 senderColor:(id)arg3;
+ (id)createViewModelFromAdShareMediaContent:(id)arg1 metadata:(id)arg2;
+ (id)createViewModelFromChatMediaContent:(id)arg1 metadata:(id)arg2 messageBodyType:(long long)arg3;

@end

