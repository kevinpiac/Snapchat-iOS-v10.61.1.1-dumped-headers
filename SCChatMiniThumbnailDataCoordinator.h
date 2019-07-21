//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCChatMiniThumbnailDataCoordinator : NSObject <SCDataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_mediaIdToMiniThumbnailImage;
    NSString *_activeConversationId;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_handleActiveConversationDataRequest:(id)arg1;
- (void)_handleActiveRenderingConversationDataRequest:(id)arg1;
- (void)activeMiniThumbnailImages:(CDUnknownBlockType)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)init;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

