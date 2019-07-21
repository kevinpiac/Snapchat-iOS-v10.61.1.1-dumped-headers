//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCCofCircumstancesService, SCConfigLRUCache, SCDocObjectContext, SCQueuePerformer, SCUserSession, SCUserSessionContext;

@interface SCConfigRepository : NSObject
{
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    SCUserSessionContext *_userSessionContext;
    SCDocObjectContext *_docObjectContext;
    NSString *_etag;
    NSDate *_lastUpdateTimestamp;
    SCConfigLRUCache *_configLRUCache;
    _Bool _grpcLibEnabled;
    SCCofCircumstancesService *_service;
}

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_callCofEngine;
- (void)_deleteDBConfig:(id)arg1 transactionContext:(id)arg2;
- (id)_getConfigsFromDBForConfigKey:(id)arg1;
- (id)_getEtag;
- (id)_getLastUpdateTimestamp;
- (_Bool)_isRefreshPreferred;
- (void)_processLoginResponse:(id)arg1;
- (void)_readEtagFromDB;
- (void)_refreshCacheWithUpdateConfigIds:(id)arg1;
- (void)_refreshConfigsFromServerIfNeeded:(_Bool)arg1;
- (void)_updateDBWithCofConfigTargetingResponse:(id)arg1;
- (void)_updateDBWithConfigResult:(id)arg1 transactionContext:(id)arg2 secondForNow:(double)arg3;
- (void)_updateEtagDB:(id)arg1 lastUpdateTimestampInSeconds:(double)arg2 transactionContext:(id)arg3;
- (id)_validateConfigRulesForConfigKey:(id)arg1 configsInDBFormat:(id)arg2;
- (id)convertFrom:(id)arg1 secondsForNow:(double)arg2;
- (void)findConfigsWithConfigKey:(id)arg1 callbackPerformer:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)findConfigsWithConfigKeySync:(id)arg1 readThroughDBIfCacheMissed:(_Bool)arg2;
- (_Bool)ignoreAssertion;
- (id)initWithUserSession:(id)arg1 userSessionContext:(id)arg2 docObjectContext:(id)arg3;

@end

