//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCANetworkCondition : NSObject <NamedEvent, NSCopying>
{
    NSNumber *bandwidthMean;
    NSNumber *bandwidthMedian;
    NSNumber *bandwidthSampleSize;
    long long connectionClass;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getBandwidthMean;
- (double)getBandwidthMedian;
- (long long)getBandwidthSampleSize;
- (long long)getConnectionClass;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setBandwidthMean:(double)arg1;
- (void)setBandwidthMedian:(double)arg1;
- (void)setBandwidthSampleSize:(long long)arg1;
- (void)setConnectionClass:(long long)arg1;

@end

