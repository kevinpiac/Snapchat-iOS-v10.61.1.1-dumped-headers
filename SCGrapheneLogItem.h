//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCGrapheneMetric;

@interface SCGrapheneLogItem : NSObject
{
    NSString *_uniqueId;
    double _startTimestamp;
    SCGrapheneMetric *_metric;
}

- (void).cxx_destruct;
- (id)initWithUniqueId:(id)arg1 startTimestamp:(double)arg2 grapheneMetric:(id)arg3;
@property(retain, nonatomic) SCGrapheneMetric *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;

@end

