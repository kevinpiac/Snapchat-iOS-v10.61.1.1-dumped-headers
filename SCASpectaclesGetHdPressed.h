//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@interface SCASpectaclesGetHdPressed : SCASpectaclesTrackedEvent
{
    long long buttonSource;
    long long deviceState;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getButtonSource;
- (long long)getDeviceState;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setButtonSource:(long long)arg1;
- (void)setDeviceState:(long long)arg1;

@end
