//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNContentManagerCacheMetrics, SCNContentManagerNetworkMetrics;

@interface SCNContentManagerContentRetrievalMetrics : NSObject
{
    SCNContentManagerNetworkMetrics *_networkMetrics;
    SCNContentManagerCacheMetrics *_cacheMetrics;
}

+ (id)ContentRetrievalMetricsWithNetworkMetrics:(id)arg1 cacheMetrics:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNContentManagerCacheMetrics *cacheMetrics; // @synthesize cacheMetrics=_cacheMetrics;
- (id)description;
- (id)initWithNetworkMetrics:(id)arg1 cacheMetrics:(id)arg2;
@property(readonly, nonatomic) SCNContentManagerNetworkMetrics *networkMetrics; // @synthesize networkMetrics=_networkMetrics;

@end

