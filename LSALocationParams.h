//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSALocationParams : NSObject
{
    int _intervalMillis;
    double _distanceFilterMeters;
    double _desiredAccuracy;
}

@property(readonly, nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(readonly, nonatomic) double distanceFilterMeters; // @synthesize distanceFilterMeters=_distanceFilterMeters;
- (id)initWithIntervalMillis:(int)arg1 distanceFilterMeters:(double)arg2 desiredAccuracy:(double)arg3;
@property(readonly, nonatomic) int intervalMillis; // @synthesize intervalMillis=_intervalMillis;

@end

