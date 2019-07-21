//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAProfileShareSnapcodeStart : SCAUserTrackedEvent
{
    long long source;
    NSString *shareAppsAvailable;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (id)getShareAppsAvailable;
- (long long)getSource;
- (id)init;
- (void)setProfileSessionId:(id)arg1;
- (void)setShareAppsAvailable:(id)arg1;
- (void)setSource:(long long)arg1;

@end

