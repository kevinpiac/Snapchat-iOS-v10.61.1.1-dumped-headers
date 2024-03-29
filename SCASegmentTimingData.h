//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCASegmentTimingData : NSObject <NamedEvent, NSCopying>
{
    NSNumber *segmentStartTime;
    NSNumber *segmentDuration;
    NSNumber *sourceVideoDuration;
    NSNumber *segmentIndex;
    NSNumber *numSegments;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getNumSegments;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (double)getSegmentDuration;
- (long long)getSegmentIndex;
- (double)getSegmentStartTime;
- (double)getSourceVideoDuration;
- (void)setNumSegments:(long long)arg1;
- (void)setSegmentDuration:(double)arg1;
- (void)setSegmentIndex:(long long)arg1;
- (void)setSegmentStartTime:(double)arg1;
- (void)setSourceVideoDuration:(double)arg1;

@end

