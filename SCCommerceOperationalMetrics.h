//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCommerceSession;

@interface SCCommerceOperationalMetrics : NSObject
{
    SCCommerceSession *_commerceSession;
}

+ (id)shared;
+ (id)stringForOperationalMetricsEndpoint:(unsigned long long)arg1;
+ (id)stringForUserAction:(unsigned long long)arg1;
- (void).cxx_destruct;
- (long long)commerceEndpointForODPEndpoint:(unsigned long long)arg1;
@property(retain, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
- (void)logOperationalMetricForUserAction:(unsigned long long)arg1 endpoint:(unsigned long long)arg2 statusCode:(long long)arg3 duration:(double)arg4 error:(id)arg5 jsonMetadata:(id)arg6 userSession:(id)arg7;
- (long long)restActionForUserAction:(unsigned long long)arg1;

@end

