//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIColor;

@interface SCMetricsChartDataSetItem : NSObject
{
    NSString *_xAxisLabel;
    NSString *_yCoordinateLabel;
    NSNumber *_yCoordinatePercentage;
    NSNumber *_yCoordinateValue;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithXAxisLabel:(id)arg1 yCoordinateValue:(id)arg2 color:(id)arg3;
@property(retain, nonatomic) NSString *yCoordinateLabel; // @synthesize yCoordinateLabel=_yCoordinateLabel;
@property(retain, nonatomic) NSNumber *yCoordinatePercentage; // @synthesize yCoordinatePercentage=_yCoordinatePercentage;
@property(readonly, nonatomic) NSString *xAxisLabel; // @synthesize xAxisLabel=_xAxisLabel;
@property(readonly, nonatomic) NSNumber *yCoordinateValue; // @synthesize yCoordinateValue=_yCoordinateValue;

@end

