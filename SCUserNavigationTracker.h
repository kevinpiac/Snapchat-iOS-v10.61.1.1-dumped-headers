//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCTimeProvider;

@interface SCUserNavigationTracker : NSObject
{
    double _timeEnteredBackground;
    SCTimeProvider *_timeProvider;
}

- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (_Bool)shouldOpenToCameraAfterBackgroundingOnViewController:(id)arg1;
- (_Bool)shouldReturnToCamera:(double)arg1;
- (double)timeEnteredBackground;

@end

