//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArroyoConversationDataUpdateListener-Protocol.h"

@class SCChatV3MetadataStore;

@interface SCArroyoMetadataCorrectionManager : NSObject <SCArroyoConversationDataUpdateListener>
{
    SCChatV3MetadataStore *_metadataStore;
}

- (void).cxx_destruct;
- (void)didConversationUpdateForConversationId:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)didCreateConversation:(id)arg1;
- (void)didRemoveConversation:(id)arg1;
- (id)initWithNativeSessionManager:(id)arg1 metadataStore:(id)arg2;

@end

