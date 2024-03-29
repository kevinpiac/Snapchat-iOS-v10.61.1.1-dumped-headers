//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMapLoggerEventSender;
@protocol SCMapLoggerSessionUserLocationProviding, SCMapPersonLocationsProviding, SCXGameStateProvider;

@interface SCMapLoggerSession : NSObject
{
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapLoggerSessionUserLocationProviding> _userLocationProvider;
    id <SCXGameStateProvider> _gameStateProvider;
    unsigned long long _sessionId;
    SCMapLoggerEventSender *_eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCMapLoggerEventSender *eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) __weak id <SCXGameStateProvider> gameStateProvider; // @synthesize gameStateProvider=_gameStateProvider;
- (id)initWithGameStateProvider:(id)arg1 mapPersonLocationsProvider:(id)arg2 userLocationProvider:(id)arg3;
@property(readonly, nonatomic) __weak id <SCMapPersonLocationsProviding> mapPersonLocationsProvider; // @synthesize mapPersonLocationsProvider=_mapPersonLocationsProvider;
@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) __weak id <SCMapLoggerSessionUserLocationProviding> userLocationProvider; // @synthesize userLocationProvider=_userLocationProvider;

@end

