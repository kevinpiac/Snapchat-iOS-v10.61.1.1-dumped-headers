//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCGeoFilter;
@protocol SCPreviewFilterDataProvider;

@protocol SCPreviewFilterDataProviderDelegate <NSObject>
- (void)previewFilterDataProviderDidCompleteUpdates:(id <SCPreviewFilterDataProvider>)arg1 succeeded:(_Bool)arg2;
- (void)previewFilterDataProviderDidUpdateAltitude:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateGeoFilterImages:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateSpeed:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateUnlockable:(id <SCPreviewFilterDataProvider>)arg1 unlockable:(SCGeoFilter *)arg2 score:(double)arg3;
- (void)previewFilterDataProviderDidUpdateVenueFilter:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateVenues:(id <SCPreviewFilterDataProvider>)arg1;
- (void)previewFilterDataProviderDidUpdateWeather:(id <SCPreviewFilterDataProvider>)arg1;
- (_Bool)previewFilterDataProviderShouldUpdateUnlockable:(id <SCPreviewFilterDataProvider>)arg1 unlockable:(SCGeoFilter *)arg2;

@optional
- (void)previewBatchCaptureFilterDataProvider:(id <SCPreviewFilterDataProvider>)arg1 setMotionFiltersEnabled:(_Bool)arg2;
- (void)previewBatchCaptureFilterDataProvider:(id <SCPreviewFilterDataProvider>)arg1 updateGeoFiltersFrom:(NSArray *)arg2 to:(NSArray *)arg3;
@end
