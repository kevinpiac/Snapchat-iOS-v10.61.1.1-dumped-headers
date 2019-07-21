//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCANetworkEventBase : SCAUserTrackedEvent
{
    NSNumber *timeSinceAppStateChange;
    NSNumber *appIsTravelMode;
    long long appState;
    long long taskType;
    NSString *appSessionId;
    NSString *mediaId;
    NSString *taskId;
    NSString *mediaType;
    NSString *mediaContextType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getAppIsTravelMode;
- (id)getAppSessionId;
- (long long)getAppState;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getMediaContextType;
- (id)getMediaId;
- (id)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getTaskId;
- (long long)getTaskType;
- (long long)getTimeSinceAppStateChange;
- (id)init;
- (void)setAppIsTravelMode:(_Bool)arg1;
- (void)setAppSessionId:(id)arg1;
- (void)setAppState:(long long)arg1;
- (void)setMediaContextType:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setTaskId:(id)arg1;
- (void)setTaskType:(long long)arg1;
- (void)setTimeSinceAppStateChange:(long long)arg1;

@end
