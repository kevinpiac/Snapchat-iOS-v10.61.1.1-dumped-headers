//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SCTimeProvider;

@interface SCNetworkClockTime : NSObject
{
    NSDate *_creationDate;
    SCTimeProvider *_timeProvider;
    double _creationMediaTime;
}

- (void).cxx_destruct;
@property(readonly) double creationMediaTime; // @synthesize creationMediaTime=_creationMediaTime;
- (id)currentTime;
- (id)initWithServerTime:(id)arg1 timeProvider:(id)arg2;

@end
