//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCSpectaclesImuDataSet : NSObject
{
    NSArray *_imuFrames;
    unsigned long long _sampleFrequencyHz;
    unsigned long long _imuVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *imuFrames; // @synthesize imuFrames=_imuFrames;
@property(nonatomic) unsigned long long imuVersion; // @synthesize imuVersion=_imuVersion;
- (id)initWithLagunaData:(id)arg1;
- (id)initWithMalibuData:(id)arg1;
- (id)initWithNewportData:(id)arg1;
- (_Bool)isSupportedMalibuVersion;
- (_Bool)isSupportedNewportVersion;
- (_Bool)isValidForVideoOfDuration:(double)arg1;
@property(nonatomic) unsigned long long sampleFrequencyHz; // @synthesize sampleFrequencyHz=_sampleFrequencyHz;

@end

