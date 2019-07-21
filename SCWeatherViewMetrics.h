//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface SCWeatherViewMetrics : NSObject <NSCoding>
{
    _Bool _temperatureViewSeen;
    _Bool _hourlyForecastViewSeen;
    _Bool _dailyForecastViewSeen;
    _Bool _temperatureScaleImperialSeen;
    _Bool _temperatureScaleMetricsSeen;
    long long _viewType;
}

- (void)encodeWithCoder:(id)arg1;
- (id)getFilterWeatherTemperatureUnit;
- (id)getFilterWeatherViewTypeInfo;
- (id)initWithCoder:(id)arg1;
- (void)setDailyForecastViewSeen;
- (void)setHourlyForecastViewSeen;
- (void)setTemperatureScaleImperialSeen;
- (void)setTemperatureScaleMetricsSeen;
- (void)setTemperatureViewSeen;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;

@end
