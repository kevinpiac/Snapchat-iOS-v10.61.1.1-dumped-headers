//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASnapAccessTokenDiskSave : SCAUserTrackedEvent
{
    NSNumber *osError;
    NSString *scope;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getOsError;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getScope;
- (void)setOsError:(long long)arg1;
- (void)setScope:(id)arg1;

@end
