//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCShakeUploadThrottleController : NSObject
{
    NSMutableDictionary *_ticketRetry;
    NSMutableDictionary *_ticketMaxRetry;
    NSMutableDictionary *_ticketServerBackOff;
}

+ (void)deleteInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)_computeBackoff:(long long)arg1;
- (void)_plusOneToNumberInDictionary:(id)arg1 forKey:(id)arg2 initVal:(long long)arg3;
- (_Bool)_reachedMaxRetryForId:(id)arg1;
- (long long)computBackoffMillisecondsForId:(id)arg1;
- (long long)getCurrentRetryCountForId:(id)arg1;
- (_Bool)incrementRetryForId:(id)arg1 isInfiniteRetry:(_Bool)arg2;
- (id)init;
- (void)setServerBackoffForId:(id)arg1 serverBackoffMilliseconds:(long long)arg2;

@end

