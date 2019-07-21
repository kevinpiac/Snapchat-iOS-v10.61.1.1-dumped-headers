//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdClientRankingModel-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdClientRankingModel : NSObject <SOJUAdClientRankingModel>
{
    NSString *_modelId;
    NSNumber *_avgTimeViewedWeight;
    NSNumber *_stdWeight;
    NSNumber *_constant;
    NSNumber *_threshold;
    NSNumber *_numSnaps;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *avgTimeViewedWeight; // @synthesize avgTimeViewedWeight=_avgTimeViewedWeight;
- (float)avgTimeViewedWeightValue;
@property(readonly, copy, nonatomic) NSNumber *constant; // @synthesize constant=_constant;
- (float)constantValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithModelId:(id)arg1 avgTimeViewedWeight:(id)arg2 stdWeight:(id)arg3 constant:(id)arg4 threshold:(id)arg5 numSnaps:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(readonly, copy, nonatomic) NSNumber *numSnaps; // @synthesize numSnaps=_numSnaps;
- (int)numSnapsValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *stdWeight; // @synthesize stdWeight=_stdWeight;
- (float)stdWeightValue;
@property(readonly, copy, nonatomic) NSNumber *threshold; // @synthesize threshold=_threshold;
- (float)thresholdValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
