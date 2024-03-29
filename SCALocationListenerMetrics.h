//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCALocationListenerMetrics : NSObject <NamedEvent, NSCopying>
{
    NSNumber *locationUpdateTimeMs;
    NSString *locationLevelRequest;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLocationLevelRequest;
- (long long)getLocationUpdateTimeMs;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setLocationLevelRequest:(id)arg1;
- (void)setLocationUpdateTimeMs:(long long)arg1;

@end

