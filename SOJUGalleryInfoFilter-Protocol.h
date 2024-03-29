//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilter, SOJUGalleryBatteryInfoFilter, SOJUGalleryDateInfoFilter, SOJUGallerySpeedInfoFilter, SOJUGalleryWeatherInfoFilter;

@protocol SOJUGalleryInfoFilter <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUGalleryAltitudeInfoFilter *altitude;
@property(readonly, copy, nonatomic) SOJUGalleryBatteryInfoFilter *battery;
@property(readonly, copy, nonatomic) SOJUGalleryDateInfoFilter *date;
@property(readonly, copy, nonatomic) SOJUGallerySpeedInfoFilter *speed;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) SOJUGalleryWeatherInfoFilter *weather;
@end

