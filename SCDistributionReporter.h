//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCDistributionReporter : NSObject
{
    NSArray *_numbers;
    double _min;
    double _p10;
    double _p50;
    double _p90;
    double _average;
    double _max;
}

- (void).cxx_destruct;
- (double)_averageOfArray:(id)arg1;
- (double)_percentile:(double)arg1 inSortedArray:(id)arg2;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
@property(readonly, nonatomic) double max; // @synthesize max=_max;
@property(readonly, nonatomic) double min; // @synthesize min=_min;
@property(copy, nonatomic) NSArray *numbers; // @synthesize numbers=_numbers;
@property(readonly, nonatomic) double p10; // @synthesize p10=_p10;
@property(readonly, nonatomic) double p50; // @synthesize p50=_p50;
@property(readonly, nonatomic) double p90; // @synthesize p90=_p90;
@property(readonly, nonatomic) NSString *summary;

@end

