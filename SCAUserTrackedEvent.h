//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAEventBase.h"

@class NSNumber, NSString;

@interface SCAUserTrackedEvent : SCAEventBase
{
    NSNumber *userNotTracked;
    NSString *userId;
    NSString *ghost_user_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGhost_user_id;
- (double)getPerUserSamplingRate;
- (id)getUserId;
- (_Bool)getUserNotTracked;
- (void)setGhost_user_id:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserNotTracked:(_Bool)arg1;

@end
