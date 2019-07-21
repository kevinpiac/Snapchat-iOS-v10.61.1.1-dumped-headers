//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PINCaching-Protocol.h"

@class NSArray, NSConditionLock, NSMutableDictionary, NSString, NSURL, PINOperationQueue;

@interface PINDiskCache : NSObject <PINCaching>
{
    NSConditionLock *_instanceLock;
    CDUnknownBlockType _serializer;
    CDUnknownBlockType _deserializer;
    _Bool _ttlCache;
    CDUnknownBlockType _willAddObjectBlock;
    CDUnknownBlockType _willRemoveObjectBlock;
    CDUnknownBlockType _willRemoveAllObjectsBlock;
    CDUnknownBlockType _didAddObjectBlock;
    CDUnknownBlockType _didRemoveObjectBlock;
    CDUnknownBlockType _didRemoveAllObjectsBlock;
    unsigned long long _byteLimit;
    double _ageLimit;
    CDUnknownBlockType _evictPolicyBlock;
    unsigned long long _writingProtectionOption;
    NSString *_prefix;
    NSURL *_cacheURL;
    unsigned long long _byteCount;
    NSString *_fileExtension;
    NSString *_name;
    PINOperationQueue *_operationQueue;
    NSMutableDictionary *_dates;
    NSMutableDictionary *_sizes;
    NSMutableDictionary *_metadata;
    NSArray *_deadFiles;
}

+ (id)cacheURLWithRootPath:(id)arg1 prefix:(id)arg2 name:(id)arg3;
+ (void)emptyTrash;
+ (void)emptyTrash:(CDUnknownBlockType)arg1;
+ (void)emptyTrashImmediately;
+ (_Bool)moveItemAtURLToTrash:(id)arg1;
+ (id)sharedLock;
+ (id)sharedTrashQueue;
+ (id)sharedTrashURL;
- (void).cxx_destruct;
- (_Bool)_locked_createCacheDirectory;
- (void)_locked_initializeDiskProperties;
- (void)_locked_removeMetadataAssociatedWithKey:(id)arg1;
- (_Bool)_locked_setFileModificationDate:(id)arg1 forURL:(id)arg2;
- (void)_locked_updateMetadata:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
- (void)_trimDiskToSize:(unsigned long long)arg1 evictPolicy:(CDUnknownBlockType)arg2 reason:(unsigned long long)arg3;
- (void)_trimToSizeAsync:(unsigned long long)arg1 evictPolicy:(CDUnknownBlockType)arg2 reason:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
- (void)asynchronouslySetFileModificationDate:(id)arg1 forURL:(id)arg2;
@property unsigned long long byteCount; // @synthesize byteCount=_byteCount;
@property unsigned long long byteLimit; // @synthesize byteLimit=_byteLimit;
- (id)cacheKeyMetadataList;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void)cleanupDeadFilesAsync;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)containsObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long count;
@property(retain, nonatomic) NSMutableDictionary *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSArray *deadFiles; // @synthesize deadFiles=_deadFiles;
- (id)decodedString:(id)arg1;
- (CDUnknownBlockType)defaultDeserializer;
- (CDUnknownBlockType)defaultSerializer;
@property(readonly, copy) NSString *description;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
- (id)encodedFileURLForKey:(id)arg1;
- (id)encodedString:(id)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlockAsync:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithMetadataBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithMetadataBlockAsync:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) CDUnknownBlockType evictPolicyBlock; // @synthesize evictPolicyBlock=_evictPolicyBlock;
@property(readonly) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
- (id)fileURLForKey:(id)arg1;
- (id)fileURLForKey:(id)arg1 updateFileModificationDate:(_Bool)arg2;
- (void)fileURLForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 fileExtension:(id)arg2;
- (id)initWithName:(id)arg1 prefix:(id)arg2 rootPath:(id)arg3 serializer:(CDUnknownBlockType)arg4 deserializer:(CDUnknownBlockType)arg5 fileExtension:(id)arg6 operationQueue:(id)arg7;
- (id)initWithName:(id)arg1 prefix:(id)arg2 rootPath:(id)arg3 serializer:(CDUnknownBlockType)arg4 deserializer:(CDUnknownBlockType)arg5 fileExtension:(id)arg6 operationQueue:(id)arg7 evictionPolicy:(CDUnknownBlockType)arg8;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 fileExtension:(id)arg3;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 fileExtension:(id)arg5;
- (id)initWithName:(id)arg1 rootPath:(id)arg2 serializer:(CDUnknownBlockType)arg3 deserializer:(CDUnknownBlockType)arg4 fileExtension:(id)arg5 operationQueue:(id)arg6;
@property(nonatomic, getter=isTTLCache) _Bool ttlCache; // @synthesize ttlCache=_ttlCache;
- (id)keyForEncodedFileURL:(id)arg1;
- (void)lock;
- (void)lockFileAccessWhileExecutingBlockAsync:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)metadataForFileUrl:(id)arg1;
- (id)metadataForKey:(id)arg1;
- (void)metadataForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 fileURL:(id *)arg2 metadata:(out id *)arg3;
- (id)objectForKey:(id)arg1 metadata:(out id *)arg2;
- (void)objectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) PINOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly) NSString *prefix; // @synthesize prefix=_prefix;
- (void)removeAllObjects;
- (void)removeAllObjectsAsync:(CDUnknownBlockType)arg1;
- (_Bool)removeFileAndExecuteBlocksForKey:(id)arg1 withReason:(unsigned long long)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 fileURL:(id *)arg2;
- (void)removeObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectsForKeysAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)setMetadata:(id)arg1 toURL:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 metadata:(id)arg3;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 fileURL:(id *)arg4;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableDictionary *sizes; // @synthesize sizes=_sizes;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property unsigned long long writingProtectionOption; // @synthesize writingProtectionOption=_writingProtectionOption;
- (void)synchronouslyLockFileAccessWhileExecutingBlock:(CDUnknownBlockType)arg1;
- (void)trimDiskImmediatelyToSizeByPolicy:(unsigned long long)arg1;
- (void)trimDiskToDate:(id)arg1;
- (void)trimDiskToSize:(unsigned long long)arg1;
- (void)trimDiskToSizeByDate:(unsigned long long)arg1;
- (void)trimDiskToSizeByPolicy:(unsigned long long)arg1;
- (void)trimImmediatelyToSizeByPolicy:(unsigned long long)arg1;
- (void)trimToAgeLimitRecursively;
- (void)trimToDate:(id)arg1;
- (void)trimToDateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToSize:(unsigned long long)arg1;
- (void)trimToSizeAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToSizeByDate:(unsigned long long)arg1;
- (void)trimToSizeByDateAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToSizeByPolicy:(unsigned long long)arg1;
- (void)trimToSizeByPolicyAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlock;
- (void)updateMetadataAsync:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

