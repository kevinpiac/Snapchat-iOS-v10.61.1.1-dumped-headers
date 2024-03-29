//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewFilterVisualNamesProvider-Protocol.h"
#import "SCPreviewInfoStickerDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString, SCAltitudeFilterView, SCCarouselGroupConfigParser, SCPreviewFilterDataProviderContextData, SCSnapCommonLoggingParameters, SCUnlockablesContextBasedSelector, SCVenueFilterSelector, SCWeatherFilterView;
@protocol SCPreviewFeatureContextImageClassifier, SCPreviewFilterDataProviderDelegate;

@protocol SCPreviewFilterDataProvider <SCPreviewFilterVisualNamesProvider, SCPreviewInfoStickerDataSource>
@property(readonly, nonatomic) SCCarouselGroupConfigParser *carouselGroupConfigParser;
- (void)clear;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters;
@property(retain, nonatomic) id <SCPreviewFeatureContextImageClassifier> contextImageClassifier;
@property(nonatomic) __weak id <SCPreviewFilterDataProviderDelegate> delegate;
@property(retain, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData;
@property(readonly, copy, nonatomic) NSDictionary *geoFilterAppearanceSettingsDictionary;
@property(readonly, copy, nonatomic) NSArray *geoFilterImages;
@property(readonly, copy, nonatomic) NSArray *geoFilters;
@property(retain, nonatomic) SCUnlockablesContextBasedSelector *geofilterContextBasedSelector;
@property(readonly, nonatomic) _Bool hasUserUnlockedFilter;
@property(readonly, nonatomic) _Bool isReverseMotionFilterSelected;
@property(readonly, nonatomic) _Bool isStreakFilterSelected;
@property(readonly, nonatomic) _Bool isVenueFilterSelected;
@property(readonly, copy, nonatomic) NSDictionary *reverseMotionFilterConfig;
@property(readonly, copy, nonatomic) NSString *selectedContextFilterId;
@property(readonly, copy, nonatomic) NSString *selectedGeoFilterId;
@property(readonly, copy, nonatomic) NSArray *selectedGeoFilterIds;
@property(readonly, nonatomic) long long selectedGeoFilterMediaSubType;
@property(readonly, copy, nonatomic) NSString *selectedSmartFilterName;
@property(readonly, copy, nonatomic) NSString *selectedSpeedMotionFilterName;
@property(readonly, copy, nonatomic) NSString *selectedVisualFilterName;
- (_Bool)shouldFilterDataProviderRequestToUseLocation;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilterConfigs;
- (void)startPreviewContextImageClassification;
- (void)startUpdatingFilterData;
- (void)stopUpdatingFilterData;
@property(readonly, nonatomic) long long streakCount;
@property(readonly, copy, nonatomic) NSArray *unlockFilters;
- (void)updateAltitudeType:(SCAltitudeFilterView *)arg1;
- (void)updateGeoFilter:(NSString *)arg1;
@property(readonly, nonatomic) unsigned long long updateMode;
- (void)updateWeatherViewType:(SCWeatherFilterView *)arg1;
- (void)userDidInteractWithHostView;
@property(readonly, copy, nonatomic) NSString *userUnlockedFilterId;
@property(readonly, nonatomic) SCVenueFilterSelector *venueFilterSelector;
@property(readonly, copy, nonatomic) NSArray *venues;
@end

