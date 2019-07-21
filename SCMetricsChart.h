//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCMetricsChartDataSet;

@interface SCMetricsChart : UIView
{
    unsigned long long _chartMode;
    struct CGSize _chartSize;
    double _spaceBetweenBars;
    double _spaceBetweenYAxisLabels;
    double _barMaxHeight;
    UIView *_xAxis;
    UIView *_yAxis;
    NSArray *_xAxisLabels;
    NSArray *_yAxisLabels;
    NSArray *_yCoordinateLabels;
    SCMetricsChartDataSet *_dataSet;
}

- (void).cxx_destruct;
- (void)cleanUpLabels;
- (id)createLabel;
- (id)createXAxisLabelAtPosition:(int)arg1;
- (id)createYAxisLabelAtPosition:(int)arg1;
- (void)drawBarChart;
- (void)drawLineChart;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initXAxis;
- (void)initXAxisLabels;
- (void)initYAxis;
- (void)initYAxisLabels;
- (void)initYCoordinateLabels;
- (void)updateAllLabels;
- (void)updateChartMode:(unsigned long long)arg1;
- (void)updateDataSet:(id)arg1;
- (void)updateXAxisLabels;
- (void)updateYAxisLabelsWithStrings:(id)arg1;
- (void)updateYCoordinateLabels;

@end

