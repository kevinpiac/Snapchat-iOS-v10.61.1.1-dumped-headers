//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCANotificationDisplayed : SCAUserTrackedEvent
{
    NSNumber *isSystem;
    NSNumber *view_time_sec;
    long long action;
    NSString *notificationType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsSystem;
- (id)getNotificationType;
- (double)getPerUserSamplingRate;
- (double)getView_time_sec;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setIsSystem:(_Bool)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setView_time_sec:(double)arg1;

@end

