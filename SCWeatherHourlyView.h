//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber, UIFont;

@interface SCWeatherHourlyView : UIView
{
    double _forecastViewWidth;
    struct CGPoint _forecastViewStartPoint;
    NSMutableArray *_timeViews;
    NSMutableArray *_tempViews;
    NSArray *_hourlyForecasts;
    long long _numOfHourlyForecastItems;
    UIFont *_temperatureDegreeFont;
    NSNumber *_degreeOffsetAmount;
    _Bool _isPreviewSticker;
}

- (void).cxx_destruct;
- (id)_attributedStringForTemperature:(id)arg1;
- (id)_stringForTemperature:(unsigned long long)arg1 withData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 hourlyForecasts:(id)arg2 temperatureScale:(unsigned long long)arg3 isPreviewSticker:(_Bool)arg4;
- (_Bool)shouldResponseToTap:(id)arg1;
- (void)updateViewWithTemperatureScale:(unsigned long long)arg1;

@end
