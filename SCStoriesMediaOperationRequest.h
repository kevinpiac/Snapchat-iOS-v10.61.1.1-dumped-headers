//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, SCStoriesMediaInfo;

@interface SCStoriesMediaOperationRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCStoriesMediaInfo *_fetchSnapMedia_media;
    _Bool _fetchSnapMedia_userInitiated;
    _Bool _fetchSnapMedia_completePrefetch;
    NSArray *_fetchSnapMedia_contexts;
    NSString *_fetchSnapMedia_batchId;
    SCStoriesMediaInfo *_addSnapMedia_mediaInfo;
    NSData *_addSnapMedia_media;
    _Bool _addSnapMedia_shouldGenerateThumbnails;
    NSArray *_deleteMedia_mediaInfos;
    NSArray *_removeMediaFromDisk_cacheKeys;
}

+ (id)addSnapMediaWithMediaInfo:(id)arg1 media:(id)arg2 shouldGenerateThumbnails:(_Bool)arg3;
+ (id)deleteMediaWithMediaInfos:(id)arg1;
+ (id)fetchSnapMediaWithMedia:(id)arg1 userInitiated:(_Bool)arg2 completePrefetch:(_Bool)arg3 contexts:(id)arg4 batchId:(id)arg5;
+ (id)removeMediaFromDiskWithCacheKeys:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchFetchSnapMedia:(CDUnknownBlockType)arg1 addSnapMedia:(CDUnknownBlockType)arg2 deleteMedia:(CDUnknownBlockType)arg3 removeMediaFromDisk:(CDUnknownBlockType)arg4;

@end

