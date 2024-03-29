//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdStoryImpressionTrack-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdTileImpressionTrack;

@interface SOJUAdStoryImpressionTrack : NSObject <SOJUAdStoryImpressionTrack>
{
    NSNumber *_timeViewedSeconds;
    NSNumber *_mediaDurationSeconds;
    NSNumber *_snapCount;
    NSNumber *_viewedSnapIndex;
    NSString *_exitEvent;
    NSNumber *_uniqueSwipeUps;
    NSNumber *_totalSwipeUps;
    NSNumber *_isAudioOn;
    NSArray *_snapImpressions;
    SOJUAdTileImpressionTrack *_tileImpression;
    NSString *_creativeId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimeViewedSeconds:(id)arg1 mediaDurationSeconds:(id)arg2 snapCount:(id)arg3 viewedSnapIndex:(id)arg4 exitEvent:(id)arg5 uniqueSwipeUps:(id)arg6 totalSwipeUps:(id)arg7 isAudioOn:(id)arg8 snapImpressions:(id)arg9 tileImpression:(id)arg10 creativeId:(id)arg11;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn; // @synthesize isAudioOn=_isAudioOn;
- (_Bool)isAudioOnValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *mediaDurationSeconds; // @synthesize mediaDurationSeconds=_mediaDurationSeconds;
- (float)mediaDurationSecondsValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *snapCount; // @synthesize snapCount=_snapCount;
- (int)snapCountValue;
@property(readonly, copy, nonatomic) NSArray *snapImpressions; // @synthesize snapImpressions=_snapImpressions;
@property(readonly, copy, nonatomic) SOJUAdTileImpressionTrack *tileImpression; // @synthesize tileImpression=_tileImpression;
@property(readonly, copy, nonatomic) NSNumber *timeViewedSeconds; // @synthesize timeViewedSeconds=_timeViewedSeconds;
- (float)timeViewedSecondsValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *totalSwipeUps; // @synthesize totalSwipeUps=_totalSwipeUps;
- (int)totalSwipeUpsValue;
@property(readonly, copy, nonatomic) NSNumber *uniqueSwipeUps; // @synthesize uniqueSwipeUps=_uniqueSwipeUps;
- (int)uniqueSwipeUpsValue;
@property(readonly, copy, nonatomic) NSNumber *viewedSnapIndex; // @synthesize viewedSnapIndex=_viewedSnapIndex;
- (int)viewedSnapIndexValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

