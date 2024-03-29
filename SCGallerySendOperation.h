//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCGallerySendConfiguration, SCQueuePerformer, SCUserSession;

@interface SCGallerySendOperation : NSObject
{
    SCGallerySendConfiguration *_config;
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    _Bool _isSending;
    NSMutableArray *_itemsToSend;
}

- (void).cxx_destruct;
- (void)_attemptToSmartShareItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fillInCommonParamsForEphemeralMedia:(id)arg1 fromItem:(id)arg2;
- (void)_monitorPostStateForStory:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_postStoryForItem:(id)arg1 ephemeralMedia:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_smartShareItem:(id)arg1 smartSharePackage:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_submitMediaSendSendTaskForEphemeralMedia:(id)arg1 item:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadAndSendItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addItem:(id)arg1;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2;
- (void)sendWithCompletion:(CDUnknownBlockType)arg1;

@end

