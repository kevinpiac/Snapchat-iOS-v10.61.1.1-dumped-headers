//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAFriendAddFailure : SCAUserTrackedEvent
{
    long long source;
    long long addSource;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAddSource;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (id)init;
- (void)setAddSource:(long long)arg1;
- (void)setSource:(long long)arg1;

@end

