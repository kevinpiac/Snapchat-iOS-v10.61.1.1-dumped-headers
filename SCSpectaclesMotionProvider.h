//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesMotionProvider : NSObject
{
}

+ (unsigned long long)_mediaTypeForSensorBlob:(id)arg1;
+ (id)deviceMotionDataForDataSet:(id)arg1;
+ (id)imuDataSetWithImuData:(id)arg1 mediaType:(unsigned long long)arg2;
+ (id)imuDataSetWithSensorBlob:(id)arg1;
+ (_Bool)isDataSetValid:(id)arg1 forVideoOfDuration:(double)arg2;
+ (_Bool)supportsMediaType:(unsigned long long)arg1;

@end
