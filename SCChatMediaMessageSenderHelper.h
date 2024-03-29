//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SCChatMediaMessageSender, SCChatMetadataStore, SCMediaUploadMetadataMutator, SCMediaUploader;

@interface SCChatMediaMessageSenderHelper : NSObject
{
    id <SCChatMediaMessageSender> _mediaMessageSender;
    id <SCChatMetadataStore> _metadataStore;
    id <SCMediaUploader> _mediaUploader;
    id <SCMediaUploadMetadataMutator> _uploadMetadataMutator;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_prepareAndUploadMedia:(id)arg1 mediaMetadata:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadMediaAndSendMessageForConversationIds:(id)arg1 messageContentContainer:(id)arg2 contentProviderByMediaId:(id)arg3 showCompletionToast:(_Bool)arg4;
- (void)_uploadMediaForMediaData:(id)arg1 mediaMetadata:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithMediaMessageSender:(id)arg1 metadataStore:(id)arg2 mediaUploader:(id)arg3 uploadMetadataMutator:(id)arg4;
- (void)sendAudioNote:(id)arg1 conversationId:(id)arg2;
- (void)sendCustomSticker:(id)arg1 conversationId:(id)arg2;
- (void)sendGalleryMedia:(id)arg1 conversationIds:(id)arg2;
- (void)sendMediaDrawerMedias:(id)arg1 conversationId:(id)arg2;

@end

