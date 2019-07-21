//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAFeedEventBase.h"

@class NSString;

@interface SCAFeedPageOpen : SCAFeedEventBase
{
    long long entry_type;
    long long gesture;
    NSString *userLocales;
    NSString *experimentSettings;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getEntry_type;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getExperimentSettings;
- (long long)getGesture;
- (double)getPerUserSamplingRate;
- (id)getUserLocales;
- (id)init;
- (void)setEntry_type:(long long)arg1;
- (void)setExperimentSettings:(id)arg1;
- (void)setGesture:(long long)arg1;
- (void)setUserLocales:(id)arg1;

@end

