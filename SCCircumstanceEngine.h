//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCConfigRepository, SCQueuePerformer;

@interface SCCircumstanceEngine : NSObject
{
    SCQueuePerformer *_performer;
    SCConfigRepository *_configRespository;
}

- (void).cxx_destruct;
- (id)_evaluateConfigRulesForConfigKey:(id)arg1 defaultValue:(id)arg2 expectedValueType:(int)arg3 featureProvidedSignals:(id)arg4 configResult:(id)arg5;
- (void)_valueForConfigKey:(id)arg1 defaultValue:(id)arg2 expectedValueType:(int)arg3 featureProvidedSignals:(id)arg4 callbackPerformer:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (id)_valueForConfigKeySync:(id)arg1 defaultValue:(id)arg2 expectedValueType:(int)arg3 featureProvidedSignals:(id)arg4 useDefaultValueIfCacheMissed:(_Bool)arg5;
- (void)boolValueForConfigKey:(id)arg1 defaultValue:(_Bool)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)boolValueForConfigKeySync:(id)arg1 defaultValue:(_Bool)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;
@property(readonly, nonatomic) SCConfigRepository *configRespository; // @synthesize configRespository=_configRespository;
- (void)floatValueForConfigKey:(id)arg1 defaultValue:(float)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (float)floatValueForConfigKeySync:(id)arg1 defaultValue:(float)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1 userSessionContext:(id)arg2 docObjectContext:(id)arg3;
- (void)intValueForConfigKey:(id)arg1 defaultValue:(int)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (int)intValueForConfigKeySync:(id)arg1 defaultValue:(int)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;
- (void)longValueForConfigKey:(id)arg1 defaultValue:(long long)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (long long)longValueForConfigKeySync:(id)arg1 defaultValue:(long long)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)protoValueForConfigKey:(id)arg1 defaultValue:(id)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)protoValueForConfigKeySync:(id)arg1 defaultValue:(id)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;
- (void)stringValueForConfigKey:(id)arg1 defaultValue:(id)arg2 featureProvidedSignals:(id)arg3 callbackPerformer:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)stringValueForConfigKeySync:(id)arg1 defaultValue:(id)arg2 featureProvidedSignals:(id)arg3 useDefaultValueIfCacheMissed:(_Bool)arg4;

@end
