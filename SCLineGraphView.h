//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface SCLineGraphView : UIView
{
    NSArray *_chartPoints;
    unsigned long long _numberOfPointsToGraph;
    NSString *_unitsSuffix;
    UILabel *_currentValueLabel;
    UILabel *_minValueLabel;
    UILabel *_maxValueLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
- (void)clear;
@property(retain, nonatomic) UILabel *currentValueLabel; // @synthesize currentValueLabel=_currentValueLabel;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *maxValueLabel; // @synthesize maxValueLabel=_maxValueLabel;
@property(retain, nonatomic) UILabel *minValueLabel; // @synthesize minValueLabel=_minValueLabel;
@property(nonatomic) unsigned long long numberOfPointsToGraph; // @synthesize numberOfPointsToGraph=_numberOfPointsToGraph;
@property(copy, nonatomic) NSString *unitsSuffix; // @synthesize unitsSuffix=_unitsSuffix;

@end

