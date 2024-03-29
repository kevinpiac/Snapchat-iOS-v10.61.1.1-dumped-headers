//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PINCaching-Protocol.h"

@class NSMutableDictionary, NSString, PINOperationQueue;

@interface PINMemoryCache : NSObject <PINCaching>
{
    _Bool _ttlCache;
    _Bool _removeAllObjectsOnMemoryWarning;
    _Bool _removeAllObjectsOnEnteringBackground;
    NSString *_name;
    double _ageLimit;
    unsigned long long _costLimit;
    unsigned long long _totalCost;
    CDUnknownBlockType _willAddObjectBlock;
    CDUnknownBlockType _willRemoveObjectBlock;
    CDUnknownBlockType _willRemoveAllObjectsBlock;
    CDUnknownBlockType _didAddObjectBlock;
    CDUnknownBlockType _didRemoveObjectBlock;
    CDUnknownBlockType _didRemoveAllObjectsBlock;
    CDUnknownBlockType _didReceiveMemoryWarningBlock;
    CDUnknownBlockType _didEnterBackgroundBlock;
    PINOperationQueue *_operationQueue;
    NSMutableDictionary *_dictionary;
    NSMutableDictionary *_dates;
    NSMutableDictionary *_costs;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_keysByKind;
    NSMutableDictionary *_costsByKind;
    NSMutableDictionary *_costsByKindSnapshot;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_locked_adjustKindCost:(id)arg1 byValue:(long long)arg2;
- (unsigned long long)_locked_computeTotalCostsFromKinds;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)containsObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property(retain, nonatomic) NSMutableDictionary *costs; // @synthesize costs=_costs;
@property(retain, nonatomic) NSMutableDictionary *costsByKind; // @synthesize costsByKind=_costsByKind;
@property(retain, nonatomic) NSMutableDictionary *costsByKindSnapshot; // @synthesize costsByKindSnapshot=_costsByKindSnapshot;
@property(retain, nonatomic) NSMutableDictionary *dates; // @synthesize dates=_dates;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
- (void)didReceiveEnterBackgroundNotification:(id)arg1;
@property(copy) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
- (void)didReceiveMemoryWarningNotification:(id)arg1;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
- (void)enumerateObjectsAsyncForKind:(id)arg1 block:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsForKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlockAsync:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithName:(id)arg1 operationQueue:(id)arg2;
- (id)initWithOperationQueue:(id)arg1;
@property(nonatomic, getter=isTTLCache) _Bool ttlCache; // @synthesize ttlCache=_ttlCache;
@property(retain, nonatomic) NSMutableDictionary *keysByKind; // @synthesize keysByKind=_keysByKind;
- (unsigned long long)lastKnownCostByKind:(id)arg1;
- (void)lock;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (id)metadataForKey:(id)arg1;
@property(nonatomic) struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 metadata:(out id *)arg2;
- (void)objectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) PINOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)removeAllObjects;
- (void)removeAllObjectsAsync:(CDUnknownBlockType)arg1;
- (void)removeAllObjectsAsyncForKind:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsByKind:(id)arg1;
@property _Bool removeAllObjectsOnEnteringBackground; // @synthesize removeAllObjectsOnEnteringBackground=_removeAllObjectsOnEnteringBackground;
@property _Bool removeAllObjectsOnMemoryWarning; // @synthesize removeAllObjectsOnMemoryWarning=_removeAllObjectsOnMemoryWarning;
- (void)removeObjectAndExecuteBlocksForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKeyAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjectsForKeysAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 metadata:(id)arg3;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setObjectAsync:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property(readonly) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
- (void)trimMemoryToDate:(id)arg1;
- (void)trimToAgeLimitRecursively;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCostAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToCostByDate:(unsigned long long)arg1;
- (void)trimToCostByDateAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimToCostLimit:(unsigned long long)arg1;
- (void)trimToCostLimitByDate:(unsigned long long)arg1;
- (void)trimToDate:(id)arg1;
- (void)trimToDateAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlock;
- (void)updateMetadataAsync:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

