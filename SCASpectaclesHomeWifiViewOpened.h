//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesHomeWifiViewOpened : SCASpectaclesTrackedEvent
{
    NSNumber *numAddedNetworks;
    long long startSource;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumAddedNetworks;
- (double)getPerUserSamplingRate;
- (long long)getStartSource;
- (id)init;
- (void)setNumAddedNetworks:(long long)arg1;
- (void)setStartSource:(long long)arg1;

@end

