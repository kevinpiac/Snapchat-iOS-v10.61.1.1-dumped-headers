//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString, SCQueuePerformer;
@protocol SCMediaDownloadEntity;

@interface SCMediaDownloadRequestGroup : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableArray *_requests;
    CDUnknownBlockType _completionHandler;
    id <SCMediaDownloadEntity> _entity;
    _Bool _completed;
    unsigned long long _completionStatus;
    id _data;
    NSError *_completionError;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *UUID;
- (void)_performWithStatus:(unsigned long long)arg1 data:(id)arg2 error:(id)arg3;
- (void)addRequest:(id)arg1;
- (id)initWithEntity:(id)arg1 performer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isForeground;
- (unsigned long long)orderAgainstScenePath:(CDStruct_bac8f6e9)arg1 minOrderScenePath:(CDStruct_bac8f6e9 *)arg2;
- (void)removeRequest:(id)arg1;
- (void)resume;

@end

