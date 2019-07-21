//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@class NSNumber;

@interface SCACognacPerfOnStart : SCACognacActionEventBase
{
    NSNumber *loadTimeSec;
    NSNumber *preloadBundleCacheHit;
    long long source;
    long long connectionClass;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getConnectionClass;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getLoadTimeSec;
- (double)getPerUserSamplingRate;
- (_Bool)getPreloadBundleCacheHit;
- (long long)getSource;
- (id)init;
- (void)setConnectionClass:(long long)arg1;
- (void)setLoadTimeSec:(double)arg1;
- (void)setPreloadBundleCacheHit:(_Bool)arg1;
- (void)setSource:(long long)arg1;

@end
