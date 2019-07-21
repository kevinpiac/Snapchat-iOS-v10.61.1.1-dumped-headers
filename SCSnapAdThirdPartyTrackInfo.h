//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCSnapAdsIdentifier;

@interface SCSnapAdThirdPartyTrackInfo : NSObject <NSCopying>
{
    _Bool _wasTopSnapFullyViewed;
    SCSnapAdsIdentifier *_adIdentifier;
    unsigned long long _adProductType;
    long long _topSnapMediaType;
    long long _topSnapMediaDurationInMillis;
    double _topSnapTotalViewTimeInMillis;
    double _topSnapMaxUnobstructedViewTimeInMillis;
    double _topSnapTotalAudibleViewTimeInMillis;
    double _topSnapTotalUnobstructedViewTimeInMillis;
    double _topSnapMaxUnobstructedAudibleViewTimeInMillis;
    double _topSnapTotalUnobstructedAudibleViewTimeInMillis;
    long long _topSnapCappedMaxViewDurationMillis;
    long long _timeSinceAdRenderInMillis;
    long long _adFirstRenderTimestampInMillis;
    long long _firstReactionTimestampInMillis;
    NSArray *_audioQuadrantStates;
    NSArray *_trackURLs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adFirstRenderTimestampInMillis; // @synthesize adFirstRenderTimestampInMillis=_adFirstRenderTimestampInMillis;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
@property(readonly, copy, nonatomic) NSArray *audioQuadrantStates; // @synthesize audioQuadrantStates=_audioQuadrantStates;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long firstReactionTimestampInMillis; // @synthesize firstReactionTimestampInMillis=_firstReactionTimestampInMillis;
- (unsigned long long)hash;
- (id)initWithAdIdentifier:(id)arg1 adProductType:(unsigned long long)arg2 topSnapMediaType:(long long)arg3 topSnapMediaDurationInMillis:(long long)arg4 topSnapTotalViewTimeInMillis:(double)arg5 topSnapMaxUnobstructedViewTimeInMillis:(double)arg6 topSnapTotalAudibleViewTimeInMillis:(double)arg7 topSnapTotalUnobstructedViewTimeInMillis:(double)arg8 topSnapMaxUnobstructedAudibleViewTimeInMillis:(double)arg9 topSnapTotalUnobstructedAudibleViewTimeInMillis:(double)arg10 topSnapCappedMaxViewDurationMillis:(long long)arg11 wasTopSnapFullyViewed:(_Bool)arg12 timeSinceAdRenderInMillis:(long long)arg13 adFirstRenderTimestampInMillis:(long long)arg14 firstReactionTimestampInMillis:(long long)arg15 audioQuadrantStates:(id)arg16 trackURLs:(id)arg17;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long timeSinceAdRenderInMillis; // @synthesize timeSinceAdRenderInMillis=_timeSinceAdRenderInMillis;
@property(readonly, nonatomic) long long topSnapCappedMaxViewDurationMillis; // @synthesize topSnapCappedMaxViewDurationMillis=_topSnapCappedMaxViewDurationMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedAudibleViewTimeInMillis; // @synthesize topSnapMaxUnobstructedAudibleViewTimeInMillis=_topSnapMaxUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapMaxUnobstructedViewTimeInMillis; // @synthesize topSnapMaxUnobstructedViewTimeInMillis=_topSnapMaxUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationInMillis; // @synthesize topSnapMediaDurationInMillis=_topSnapMediaDurationInMillis;
@property(readonly, nonatomic) long long topSnapMediaType; // @synthesize topSnapMediaType=_topSnapMediaType;
@property(readonly, nonatomic) double topSnapTotalAudibleViewTimeInMillis; // @synthesize topSnapTotalAudibleViewTimeInMillis=_topSnapTotalAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedAudibleViewTimeInMillis; // @synthesize topSnapTotalUnobstructedAudibleViewTimeInMillis=_topSnapTotalUnobstructedAudibleViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalUnobstructedViewTimeInMillis; // @synthesize topSnapTotalUnobstructedViewTimeInMillis=_topSnapTotalUnobstructedViewTimeInMillis;
@property(readonly, nonatomic) double topSnapTotalViewTimeInMillis; // @synthesize topSnapTotalViewTimeInMillis=_topSnapTotalViewTimeInMillis;
@property(readonly, copy, nonatomic) NSArray *trackURLs; // @synthesize trackURLs=_trackURLs;
@property(readonly, nonatomic) _Bool wasTopSnapFullyViewed; // @synthesize wasTopSnapFullyViewed=_wasTopSnapFullyViewed;

@end

