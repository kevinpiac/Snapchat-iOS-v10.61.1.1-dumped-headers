//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAsynchronousOperation.h"

@class NSDictionary, NSError, NSMutableDictionary, NSObject, SCQueuePerformer, SCUserSession;
@protocol OS_dispatch_group;

@interface SCGalleryUploadGallerySnapFacesOperation : SCAsynchronousOperation
{
    NSMutableDictionary *_mutableResults;
    NSObject<OS_dispatch_group> *_uploadGroup;
    NSDictionary *_results;
    NSError *_error;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_fetchSnapIdsNotYetUploaded;
- (void)_prepareBatchesOfFacesForUpload:(id)arg1;
- (void)_uploadBatchWithMediaParams:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)start;

@end

