//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCBoltUrlResolver, SCChatMediaRequestManager, SCQueuePerformer;

@interface SCArroyoMediaFetcher : NSObject
{
    SCBoltUrlResolver *_urlResolver;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)enqueueMediaDownload:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 requestContext:(long long)arg4 downloadSuccess:(CDUnknownBlockType)arg5 downloadFailure:(CDUnknownBlockType)arg6;
- (id)initWithBoltUrlResolver:(id)arg1 mediaRequestManager:(id)arg2;

@end

