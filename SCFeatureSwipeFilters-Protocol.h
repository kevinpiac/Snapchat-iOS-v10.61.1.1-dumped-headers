//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString, SCFeature, SCFiltersState, SCImageProcessLensCommand, SCPreviewView, SCSmartSwipeFilterView, SCSnapCommonLoggingParameters, SCVideoTracker, UIView;
@protocol SCFeatureImagePlayback, SCFeatureSwipeFilters, SCFeatureSwipeFiltersDelegate, SCFeatureVideoPlayback;

@protocol SCFeatureSwipeFilters
- (void)addDebugView:(UIView *)arg1;
- (long long)currentFilterSpeedForType:(long long)arg1;
@property(nonatomic) __weak id <SCFeatureSwipeFiltersDelegate> delegate;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(void (^)(UIImage *))arg2;
- (void)filtersTurnedOn;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
- (_Bool)isReverseMotionFilterSelected;
- (void)lensAppliedImageWithLensCommand:(SCImageProcessLensCommand *)arg1 completionHandler:(void (^)(UIImage *))arg2;
@property(readonly, nonatomic) SCPreviewView *previewView;
- (void)replaceFiltersWithState:(SCFiltersState *)arg1 lastState:(SCFiltersState *)arg2;
@property(retain, nonatomic) NSData *reversedAudioData;
- (void)setAudioProcessorFilterStyleId:(NSString *)arg1;
@property(retain, nonatomic) SCSmartSwipeFilterView *smartSwipeFilterView;
@property(retain, nonatomic) UIView *trackingObjectContainerView;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartImageSwipeFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartVideoSwipeFilters;
- (void)updateSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
- (SCVideoTracker *)videoTracker;
@end

