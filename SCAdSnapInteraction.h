//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAdInteractionProtocol-Protocol.h"
#import "SCAdLongformInteractionProtocol-Protocol.h"
#import "SCAdSnapThirdPartyTrackInfo-Protocol.h"
#import "SCAdSnapTrackInfo-Protocol.h"
#import "SCAdTopSnapInteractionProtocol-Protocol.h"

@class NSArray, NSString, SCAdSnapThirdPartyViewingStatus, SCAdSnapViewingStatus;

@interface SCAdSnapInteraction : NSObject <SCAdInteractionProtocol, SCAdTopSnapInteractionProtocol, SCAdLongformInteractionProtocol, SCAdSnapThirdPartyTrackInfo, SCAdSnapTrackInfo>
{
    SCAdSnapViewingStatus *_viewingStatus;
    SCAdSnapThirdPartyViewingStatus *_thirdPartyViewingStatus;
    unsigned long long _adProductType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double adFirstRenderTimestamp;
- (void)adHideWithSkipEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *adKey;
- (void)adLongPressed;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
- (void)adScreenshotTaken;
- (void)adShowOnTopSnap:(_Bool)arg1 currentMediaVolumePercent:(double)arg2;
- (void)adSnapHideOnTopSnap:(_Bool)arg1 skipEvent:(id)arg2;
@property(readonly, nonatomic) long long adType;
@property(readonly, nonatomic) NSArray *audioQuadrantStates;
@property(readonly, nonatomic) NSArray *collectionItemInteractions;
@property(readonly, nonatomic) long long deepLinkFallBackToAppStoreCount;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview;
@property(readonly, nonatomic) long long deepLinkFromCardCount;
@property(readonly, copy, nonatomic) NSString *deepLinkUri;
@property(readonly, nonatomic) long long deltaInMillis;
@property(readonly, nonatomic) long long firstReactionTimeMillis;
- (id)initWithAdType:(long long)arg1 adProductType:(unsigned long long)arg2 adKey:(id)arg3 snapIndex:(long long)arg4 topSnapMediaDurationMillis:(long long)arg5 responseReceiveTimeInMillis:(double)arg6 longformMediaDurationMillis:(long long)arg7;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) _Bool isPixelCookieAvailable;
@property(readonly, nonatomic) _Bool loadedOnEntry;
@property(readonly, nonatomic) _Bool loadedOnExit;
@property(readonly, nonatomic) double longformMaxViewedDurationInMillis;
@property(readonly, nonatomic) long long longformMediaDurationMillis;
@property(readonly, nonatomic) long long longformReportedMaxViewDurationMillis;
@property(readonly, nonatomic) NSArray *maxMediaVolumeForMediaPlayback;
- (void)obstructedOnTopSnap:(_Bool)arg1;
- (void)onAudibilityChange:(double)arg1;
- (void)resetForSwipeBackTracking;
- (void)setDeepLinkFromCard:(_Bool)arg1 deepLinkFallBackToAppStore:(_Bool)arg2 deepLinkFallBackToWebview:(_Bool)arg3 interactionZoneItemIndex:(id)arg4 deepLinkUri:(id)arg5;
- (void)setLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3 interactionZoneItemIndex:(id)arg4;
- (void)setLongformMediaDurationMillis:(long long)arg1 longformMediaDurationMillis:(long long)arg2;
- (void)setPixelCookieAvailability:(_Bool)arg1;
- (void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2 topSnapMedia:(long long)arg3;
@property(readonly, copy, nonatomic) NSString *skipEvent;
@property(readonly, nonatomic) long long snapIndex;
@property(readonly, nonatomic) unsigned long long swipeCount;
- (void)swipeUpToCard;
- (void)swipedFromTopSnap:(_Bool)arg1 exitEvent:(id)arg2 currentMediaVolumePercent:(double)arg3;
@property(readonly, nonatomic) long long timeSinceAdRenderMillis;
@property(readonly, nonatomic) long long topSnapCappedMaxViewDurationMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) long long topSnapMedia;
@property(readonly, nonatomic) long long topSnapMediaDurationMillis;
@property(readonly, nonatomic) long long topSnapReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapTimeViewedMillis;
@property(readonly, nonatomic) double topSnapTotalAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalViewTimeInMillis;
@property(readonly, nonatomic) long long topSnapUnCappedMaxViewDurationMillis;
@property(readonly, nonatomic) double topSnapUncappedMaxUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) double topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis;
- (void)unobstructedOnTopSnap:(_Bool)arg1 currentMediaVolumePercent:(double)arg2;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds;
@property(readonly, nonatomic) _Bool wasFullyVisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
