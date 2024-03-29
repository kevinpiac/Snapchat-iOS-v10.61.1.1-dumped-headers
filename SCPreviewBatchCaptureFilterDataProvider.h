//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewContextImageClassificationListener-Protocol.h"
#import "SCPreviewFilterDataProvider-Protocol.h"
#import "SCUnlockablesControllerListener-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCAltitude, SCBatchCaptureConfiguration, SCBatchCaptureSegment, SCCarouselGroupConfigParser, SCLocationServicesDataStore, SCPreviewFilterDataProviderContextData, SCSnapCommonLoggingParameters, SCSpeed, SCTimestampMetadata, SCUnlockableDataStore, SCUnlockablesContextBasedSelector, SCUserSession, SCVenueFilterSelector, SCVenueInfoSticker, SCWeather;
@protocol SCPreviewFeatureContextImageClassifier, SCPreviewFilterDataProviderDelegate;

@interface SCPreviewBatchCaptureFilterDataProvider : NSObject <SCPreviewContextImageClassificationListener, SCUnlockablesControllerListener, SCPreviewFilterDataProvider>
{
    _Bool _updating;
    long long _snapSource;
    SCUserSession *_userSession;
    SCLocationServicesDataStore *_locationServicesDataStore;
    SCUnlockableDataStore *_unlockFilterStore;
    NSDate *_initialSpeedCaptureDate;
    NSDate *_initialAltitudeCaptureDate;
    NSMutableDictionary *_activeGeofilters;
    NSMutableDictionary *_geoFilterImages;
    NSMutableDictionary *_geoFilterAppearanceSettings;
    NSMutableSet *_requestedGeoFilterIds;
    NSMutableSet *_requestedGeoFilterImageLoadingKeys;
    _Bool _usesPrecaptureGeofilter;
    SCSpeed *_speed;
    SCWeather *_weather;
    unsigned long long _batteryStatus;
    SCAltitude *_altitude;
    SCTimestampMetadata *_timestamp;
    long long _streakCount;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    NSMutableDictionary *_segmentARGeneratorDict;
    NSMutableDictionary *_segmentGeoFilterImagesFetcherDict;
    _Bool _isVenueFilterSelected;
    _Bool _hasUserUnlockedFilter;
    id <SCPreviewFilterDataProviderDelegate> _delegate;
    SCVenueFilterSelector *_venueFilterSelector;
    NSString *_userUnlockedFilterId;
    SCUnlockablesContextBasedSelector *_geofilterContextBasedSelector;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCPreviewFilterDataProviderContextData *_filterContextData;
    SCCarouselGroupConfigParser *_carouselGroupConfigParser;
    NSString *_selectedVisualFilterName;
    NSArray *_selectedGeoFilterIds;
    NSString *_selectedGeoFilterId;
    NSArray *_venues;
    SCVenueInfoSticker *_venueInfo;
    id <SCPreviewFeatureContextImageClassifier> _contextImageClassifier;
    NSDictionary *_reverseMotionFilterConfig;
    NSString *_selectedContextFilterId;
    NSString *_selectedSmartFilterName;
    NSString *_selectedSpeedMotionFilterName;
    SCBatchCaptureSegment *_currentSegment;
}

- (void).cxx_destruct;
- (void)_checkUserUnlockedFilter;
- (id)_createNewSegmentFilterState;
- (void)_generateArSegmentationImageForSegment:(id)arg1 withGeofilterImage:(id)arg2 appearanceSetting:(id)arg3;
- (unsigned long long)_getBatteryStatus;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (void)_onActiveGeoFiltersLoaded:(_Bool)arg1;
- (void)_onFetchedActiveGeoFilterImage:(id)arg1 appearanceSetting:(id)arg2;
- (void)_onFetchedGeoFilterImage:(id)arg1 appearanceSetting:(id)arg2 forSegment:(id)arg3;
- (void)_startUpdatingVenueData;
- (void)_startUpdatingVenueFilter;
- (void)_startUpdatingWeatherData;
- (void)_unlockDataStoreDidUpdate:(id)arg1;
- (void)_updateActiveGeofiltersIfNeeded;
- (void)_updateContextGeoFiltersForImageSegment:(id)arg1;
- (void)_updateWeatherDataWithLocation:(id)arg1;
- (void)_updateWithImageSegement:(id)arg1;
@property(readonly, nonatomic) SCAltitude *altitude;
@property(readonly, nonatomic) unsigned long long batteryStatus;
@property(readonly, nonatomic) SCCarouselGroupConfigParser *carouselGroupConfigParser; // @synthesize carouselGroupConfigParser=_carouselGroupConfigParser;
- (void)clear;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(retain, nonatomic) id <SCPreviewFeatureContextImageClassifier> contextImageClassifier; // @synthesize contextImageClassifier=_contextImageClassifier;
@property(nonatomic) __weak SCBatchCaptureSegment *currentSegment; // @synthesize currentSegment=_currentSegment;
@property(nonatomic) __weak id <SCPreviewFilterDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClassifyImage:(id)arg1;
- (void)didUpdateGeoFilters:(id)arg1;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData; // @synthesize filterContextData=_filterContextData;
- (_Bool)fromDiscoverShare;
@property(readonly, copy, nonatomic) NSDictionary *geoFilterAppearanceSettingsDictionary;
@property(readonly, copy, nonatomic) NSArray *geoFilterImages;
@property(readonly, copy, nonatomic) NSArray *geoFilters;
@property(retain, nonatomic) SCUnlockablesContextBasedSelector *geofilterContextBasedSelector; // @synthesize geofilterContextBasedSelector=_geofilterContextBasedSelector;
@property(readonly, nonatomic) _Bool hasUserUnlockedFilter; // @synthesize hasUserUnlockedFilter=_hasUserUnlockedFilter;
- (id)initWithSnapSource:(long long)arg1 unlockableDataStore:(id)arg2 streakCount:(long long)arg3 usesPrecaptureGeofilter:(_Bool)arg4 userSession:(id)arg5 filterContextData:(id)arg6 selectedVisualFilterName:(id)arg7 batchCaptureConfiguration:(id)arg8;
- (void)insertFilter:(id)arg1 appearanceSetting:(id)arg2 geofilterImage:(id)arg3;
@property(readonly, nonatomic) _Bool isReverseMotionFilterSelected;
@property(readonly, nonatomic) _Bool isStreakFilterSelected;
@property(readonly, nonatomic) _Bool isVenueFilterSelected; // @synthesize isVenueFilterSelected=_isVenueFilterSelected;
@property(readonly, copy, nonatomic) NSDictionary *reverseMotionFilterConfig; // @synthesize reverseMotionFilterConfig=_reverseMotionFilterConfig;
@property(readonly, copy, nonatomic) NSString *selectedContextFilterId; // @synthesize selectedContextFilterId=_selectedContextFilterId;
@property(readonly, copy, nonatomic) NSString *selectedGeoFilterId; // @synthesize selectedGeoFilterId=_selectedGeoFilterId;
@property(readonly, copy, nonatomic) NSArray *selectedGeoFilterIds; // @synthesize selectedGeoFilterIds=_selectedGeoFilterIds;
@property(readonly, nonatomic) long long selectedGeoFilterMediaSubType;
- (id)selectedMotionFilterName;
@property(readonly, copy, nonatomic) NSString *selectedSmartFilterName; // @synthesize selectedSmartFilterName=_selectedSmartFilterName;
@property(readonly, copy, nonatomic) NSString *selectedSpeedMotionFilterName; // @synthesize selectedSpeedMotionFilterName=_selectedSpeedMotionFilterName;
@property(readonly, copy, nonatomic) NSString *selectedVisualFilterName; // @synthesize selectedVisualFilterName=_selectedVisualFilterName;
- (_Bool)shouldFilterDataProviderRequestToUseLocation;
@property(readonly, nonatomic) SCSpeed *speed;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilterConfigs;
- (void)startPreviewContextImageClassification;
- (void)startUpdatingFilterData;
- (void)startUpdatingInfoStickerData;
- (void)startUpdatingVenueStickerData;
- (void)stopUpdatingFilterData;
@property(readonly, nonatomic) long long streakCount;
@property(readonly, nonatomic) SCTimestampMetadata *timestamp;
@property(readonly, copy, nonatomic) NSArray *unlockFilters;
- (void)updateAltitudeType:(id)arg1;
- (void)updateGeoFilter:(id)arg1;
@property(readonly, nonatomic) unsigned long long updateMode;
- (void)updateWeatherViewType:(id)arg1;
- (void)userDidInteractWithHostView;
@property(readonly, copy, nonatomic) NSString *userUnlockedFilterId; // @synthesize userUnlockedFilterId=_userUnlockedFilterId;
@property(readonly, nonatomic) SCVenueFilterSelector *venueFilterSelector; // @synthesize venueFilterSelector=_venueFilterSelector;
@property(readonly, nonatomic) SCVenueInfoSticker *venueInfo; // @synthesize venueInfo=_venueInfo;
@property(readonly, copy, nonatomic) NSArray *venues;
@property(readonly, copy, nonatomic) NSArray *visualFilterNames;
@property(readonly, nonatomic) SCWeather *weather;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

