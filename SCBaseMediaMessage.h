//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMessage.h"

#import "BaseNoteMediaProcessingDelegate-Protocol.h"
#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "MediaImageProcessingDelegate-Protocol.h"
#import "Preservable-Protocol.h"
#import "SnapVideoFilterDelegate-Protocol.h"

@class Media, NSArray, NSString, NSURL, SnapVideoFilter;
@protocol SCBaseMediaMessageSendingDelegate, SCBaseMediaMessageUploadingDelegate;

@interface SCBaseMediaMessage : SCBaseMessage <BaseNoteMediaProcessingDelegate, MediaImageProcessingDelegate, MediaDelegate, SnapVideoFilterDelegate, MediaDataSource, Preservable>
{
    _Bool _failedToSendToNonFriend;
    _Bool _didRetryLoadingMedia;
    Media *_media;
    double _height;
    NSString *_mediaId;
    NSString *_mediaUrl;
    long long _mediaState;
    long long _senderState;
    NSURL *_url;
    double _width;
    SnapVideoFilter *_videoFilter;
    id <SCBaseMediaMessageUploadingDelegate> _uploadingDelegate;
    id <SCBaseMediaMessageSendingDelegate> _sendingDelegate;
    long long _sourceDrawerPosition;
    long long _sourceDrawerViewMode;
    long long _fromMediaDrawerTab;
    NSArray *_blizzardEventsForSuccessfulSend;
    NSString *_iv;
    NSString *_key;
    struct CGSize _size;
}

+ (id)stringForChatMediaType:(long long)arg1;
- (void).cxx_destruct;
- (id)URLForMedia:(id)arg1;
- (_Bool)_isSenderStateIntermediate;
- (id)audioStitch;
- (void)baseNoteMediaProcessingDidSucceedForMedia:(id)arg1;
@property(retain, nonatomic) NSArray *blizzardEventsForSuccessfulSend; // @synthesize blizzardEventsForSuccessfulSend=_blizzardEventsForSuccessfulSend;
- (id)cacheId;
- (_Bool)containsGif;
- (_Bool)containsVideo;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
@property(nonatomic) _Bool didRetryLoadingMedia; // @synthesize didRetryLoadingMedia=_didRetryLoadingMedia;
- (void)didStartDownload:(id)arg1;
- (void)didUploadFailure;
- (void)didUploadSuccess;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (_Bool)failedToDecode;
@property(nonatomic) _Bool failedToSendToNonFriend; // @synthesize failedToSendToNonFriend=_failedToSendToNonFriend;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaIsGoneForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaUserInitiated:(_Bool)arg1;
@property(nonatomic) long long fromMediaDrawerTab; // @synthesize fromMediaDrawerTab=_fromMediaDrawerTab;
- (void)gifWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasFailed;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)imageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (_Bool)isBroadcastForMedia:(id)arg1;
- (_Bool)isForwardable;
- (_Bool)isImage;
- (_Bool)isInvalidAfterUnarchiving;
- (_Bool)isLoaded;
- (_Bool)isLoading;
- (_Bool)isMediaDataLoadedInCache;
- (_Bool)isMediaExpired;
- (_Bool)isMediaUnarchived;
- (_Bool)isNotLoaded;
- (_Bool)isPsychomantis;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideo;
- (_Bool)isVideoLaguna;
- (_Bool)isVideoStreaming;
- (_Bool)isVideoWithSound;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (void)mediaFailedToLoadFromCache;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)mediaIdForMedia:(id)arg1;
@property(nonatomic) long long mediaState; // @synthesize mediaState=_mediaState;
- (long long)mediaType;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
- (long long)messageType;
- (_Bool)needsAuthToFetch;
- (long long)notificationType;
- (_Bool)persist;
- (void)prefetchMedia;
- (void)removeMediaFromCache;
- (id)requestContexts;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (long long)scaMessageType;
- (id)sendJSON;
@property(nonatomic) long long senderState; // @synthesize senderState=_senderState;
@property(nonatomic) __weak id <SCBaseMediaMessageSendingDelegate> sendingDelegate; // @synthesize sendingDelegate=_sendingDelegate;
- (void)sentWithSuccess:(_Bool)arg1 response:(id)arg2;
- (void)setDataToUpload:(id)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long sourceDrawerPosition; // @synthesize sourceDrawerPosition=_sourceDrawerPosition;
@property(nonatomic) long long sourceDrawerViewMode; // @synthesize sourceDrawerViewMode=_sourceDrawerViewMode;
@property(nonatomic) __weak id <SCBaseMediaMessageUploadingDelegate> uploadingDelegate; // @synthesize uploadingDelegate=_uploadingDelegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) double width; // @synthesize width=_width;
- (_Bool)shouldNotifyUserOfFailure;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingId;
- (id)trackingIdForMedia:(id)arg1;
- (id)trackingTypeForMedia:(id)arg1;
- (void)upload;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (id)videoURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
