//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPreferences, SCTimeProvider;

@interface SCLensCacheClearTracker : NSObject
{
    SCPreferences *_preferencesStorage;
    SCTimeProvider *_currentDateProvider;
    double _cooldownTimeInterval;
}

- (void).cxx_destruct;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2 cooldownTimeInterval:(double)arg3;
- (void)resetLensCacheClearTracker;
- (void)trackLensCacheClearEvent;
- (_Bool)wasLensCacheRecentlyCleared;

@end

