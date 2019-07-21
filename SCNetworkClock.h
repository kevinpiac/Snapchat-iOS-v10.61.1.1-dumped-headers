//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, SCNetworkClockTime, SCTimeProvider;

@interface SCNetworkClock : NSObject
{
    NSDateFormatter *_dateFormatter;
    SCTimeProvider *_timeProvider;
    SCNetworkClockTime *_networkTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
@property(retain) SCNetworkClockTime *networkTime; // @synthesize networkTime=_networkTime;
- (id)networkTimeIfSignificantlyDifferentFromClientWithTolerance:(double)arg1;
- (void)syncClockWithServerResponse:(id)arg1;

@end

