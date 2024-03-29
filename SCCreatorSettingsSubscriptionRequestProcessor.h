//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCSessionRequestManager;
@protocol SCSnapchattersDataMutating;

@interface SCCreatorSettingsSubscriptionRequestProcessor : NSObject <SCSnapchattersDataRequestListener>
{
    SCSessionRequestManager *_requestManager;
    NSString *_currentUserId;
    id <SCSnapchattersDataMutating> _snapchatterDataMutator;
    NSMutableDictionary *_processingSnapchatterRequestSuccessHandlers;
    NSMutableDictionary *_processingSnapchatterRequestFailureHandlers;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_sendSnapchatterDataMutatorRequest:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithRequestManager:(id)arg1 userId:(id)arg2;
- (void)subscribeToPublisher:(id)arg1 isSubscribing:(_Bool)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)subscribeToSnapchatter:(id)arg1 isSubscribing:(_Bool)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

