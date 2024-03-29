//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaMessage.h"

#import "SCChatMediaContentProvider-Protocol.h"

@class Media, NSString;

@interface SCChatBaseNoteMediaMessage : SCBaseMediaMessage <SCChatMediaContentProvider>
{
    NSString *_chatMediaID;
    _Bool _shouldStopRetryFetchMedia;
    Media *_animationMedia;
    double _duration;
    double _retryFetchMediaDelayTime;
}

+ (id)createMessageWithSender:(id)arg1 recipient:(id)arg2 data:(id)arg3 duration:(double)arg4;
- (void).cxx_destruct;
- (void)_fetchMedia:(id)arg1 FromCacheWithCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) Media *animationMedia; // @synthesize animationMedia=_animationMedia;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
- (id)creatorAttribution;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)endpointForMedia:(id)arg1;
- (_Bool)failedToDecode;
- (void)fetchAnimationMediaFromCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchContentMediaFromCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1 error:(id)arg2;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaIsGoneForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (id)groupIdToMediaIdDownloadUrlMap;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastChatAction:(id)arg1 write:(_Bool)arg2 username:(id)arg3 recipient:(id)arg4;
- (_Bool)isAnimationMediaInCache;
- (_Bool)isContentMediaInCache;
- (_Bool)isInfiniteDuration;
- (_Bool)isMediaDataLoadedInCache;
- (_Bool)isZipped;
- (id)logEventName;
- (long long)mediaContentType;
- (id)mediaIdForMedia:(id)arg1;
- (id)miniThumbnailData;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeMediaFromCache;
- (void)resetRetryFetchMediaDelayTime;
- (void)retryFetchMedia;
@property(nonatomic) double retryFetchMediaDelayTime; // @synthesize retryFetchMediaDelayTime=_retryFetchMediaDelayTime;
- (long long)scaMessageType;
- (id)sendJSON;
@property(nonatomic) _Bool shouldStopRetryFetchMedia; // @synthesize shouldStopRetryFetchMedia=_shouldStopRetryFetchMedia;
- (id)snapAttachmentUrl;
- (id)snapMetadata;
- (void)upload;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
- (id)venueId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

