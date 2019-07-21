//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesContentDelivery-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCStoriesContentDeliveryApiImpl : NSObject <SCStoriesContentDelivery>
{
    SCLazy *_contentDelivery;
    SCQueuePerformer *_queuePerformer;
    _Bool _useBoltContentObject;
}

- (void).cxx_destruct;
- (id)_dedupeKeyToBoltContentObjectMapForMedia:(id)arg1;
- (id)_dedupeKeysForMedia:(id)arg1;
- (void)_downloadBoltContentsForMedia:(id)arg1 dedupeKeyToBoltContentObjectsMap:(id)arg2 userInitiated:(_Bool)arg3 requestContext:(id)arg4 dedupeKeyToIsEligibleForStreamingMap:(id)arg5 dedupeKeyToMediaTypeMap:(id)arg6 completePrefetch:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)_downloadZipContentForMedia:(id)arg1 userInitiated:(_Bool)arg2 request:(id)arg3 contexts:(id)arg4 expirationDate:(id)arg5 completePrefetch:(_Bool)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)_handleBoltContentDownloadCompletionForMedia:(id)arg1 dedupeKey:(id)arg2 error:(id)arg3 userInitiated:(_Bool)arg4 contentStatus:(long long)arg5 isEligibleForStreaming:(_Bool)arg6 dedupeKeyToDownloadResultMap:(id)arg7 dedupeKeyToDownloadErrorMap:(id)arg8 group:(id)arg9;
- (void)_handleBoltContentsDownloadCompletionForDedupeKeyToDownloadResultMap:(id)arg1 dedupeKeyToDownloadErrorMap:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_handleRetrieveNonZippedContentResultCompletion:(id)arg1 contentResult:(id)arg2 pageInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRetrieveSubContentCompletionForSubContentDedupeKey:(id)arg1 contentResult:(id)arg2 dedupeKeyToSubContentResultMap:(id)arg3 group:(id)arg4;
- (void)_handleRetrieveSubContentsCompletionForMedia:(id)arg1 dedupeKeyToSubContentResultMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleZipContentRegistrationCompletionSuccessForMedia:(id)arg1 sourceContentKey:(id)arg2 userInitiated:(_Bool)arg3 request:(id)arg4 contexts:(id)arg5 expirationDate:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)_handleZipSubContentRegistrationCompletionForSubContentKey:(id)arg1 subContentName:(id)arg2 userInitiated:(_Bool)arg3 contexts:(id)arg4 subContentNameToResultMap:(id)arg5 group:(id)arg6;
- (void)_handleZipSubContentsDownloadCompletionForMedia:(id)arg1 userInitiated:(_Bool)arg2 resultMap:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_logDownloadForMedia:(id)arg1 success:(_Bool)arg2 prefetch:(_Bool)arg3;
- (void)_logRetrieveContentForMedia:(id)arg1 success:(_Bool)arg2;
- (id)_mediaSubContentDedupeKeyFromMedia:(id)arg1;
- (id)_overlaySubContentDedupeKeyFromMedia:(id)arg1;
- (void)_retrieveSubContentsForMedia:(id)arg1 subContentDedupeKeys:(id)arg2 pageInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadContentForMedia:(id)arg1 userInitiated:(_Bool)arg2 request:(id)arg3 contexts:(id)arg4 expirationDate:(id)arg5 isEligibleForStreaming:(_Bool)arg6 completePrefetch:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)initWithContentDelivery:(id)arg1 useBoltContentObject:(_Bool)arg2;
- (long long)queryContentStatusForMedia:(id)arg1;
- (void)queryContentStatusForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseLocalAuthoritativeContentForCacheKeys:(id)arg1;
- (void)removeAllContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeContentForMedias:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveContentForMedia:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveLocalContentForMedia:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

