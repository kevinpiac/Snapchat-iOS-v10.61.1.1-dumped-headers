//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCAAggregatedDataConsumptionMetrics : SCAUserTrackedEvent
{
    NSNumber *numOfBytesDownloaded;
    NSNumber *numOfBytesConsumed;
    NSNumber *dataSaverEnabled;
    long long fetchAppState;
    long long fetchNetworkReachability;
    NSString *featureType;
    NSString *mediaType;
    NSString *feature;
    NSDate *fetchDate;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getDataSaverEnabled;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFeature;
- (id)getFeatureType;
- (long long)getFetchAppState;
- (id)getFetchDate;
- (long long)getFetchNetworkReachability;
- (id)getMediaType;
- (long long)getNumOfBytesConsumed;
- (long long)getNumOfBytesDownloaded;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setDataSaverEnabled:(_Bool)arg1;
- (void)setFeature:(id)arg1;
- (void)setFeatureType:(id)arg1;
- (void)setFetchAppState:(long long)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setFetchNetworkReachability:(long long)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNumOfBytesConsumed:(long long)arg1;
- (void)setNumOfBytesDownloaded:(long long)arg1;

@end

