//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChatReplySendHelper : NSObject
{
}

+ (CDUnknownBlockType)_createRequestFailureCallbackWithMessage:(id)arg1 uploadId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)_createRequestSuccessCallbackWithMessage:(id)arg1 mediaType:(long long)arg2 uploadId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_uploadReplyMediaForMessage:(id)arg1 baseChatMedia:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)doReplyMediasNeedUploadingInMessage:(id)arg1;
+ (void)uploadReplyMediaForMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

