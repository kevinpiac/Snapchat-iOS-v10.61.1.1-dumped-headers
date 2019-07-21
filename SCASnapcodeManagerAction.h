//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASnapcodeManagerAction : SCAUserTrackedEvent
{
    NSNumber *isSuccess;
    long long action;
    NSString *snapcodeSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsSuccess;
- (double)getPerUserSamplingRate;
- (id)getSnapcodeSessionId;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setIsSuccess:(_Bool)arg1;
- (void)setSnapcodeSessionId:(id)arg1;

@end

