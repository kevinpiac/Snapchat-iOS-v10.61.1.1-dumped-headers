//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJULoadScheduledLensesResponseV2-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJULoadScheduledLensesResponseV2 : NSObject <SOJULoadScheduledLensesResponseV2>
{
    NSArray *_activeLenses;
    NSArray *_precachedLenses;
    NSNumber *_cacheTtlMillis;
    NSString *_lensListSignature;
    NSString *_preselectedLensId;
    NSArray *_activeRearLenses;
    NSNumber *_medianIndexDepth;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *activeLenses; // @synthesize activeLenses=_activeLenses;
@property(readonly, copy, nonatomic) NSArray *activeRearLenses; // @synthesize activeRearLenses=_activeRearLenses;
@property(readonly, copy, nonatomic) NSNumber *cacheTtlMillis; // @synthesize cacheTtlMillis=_cacheTtlMillis;
- (long long)cacheTtlMillisValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithActiveLenses:(id)arg1 precachedLenses:(id)arg2 cacheTtlMillis:(id)arg3 lensListSignature:(id)arg4 preselectedLensId:(id)arg5 activeRearLenses:(id)arg6 medianIndexDepth:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lensListSignature; // @synthesize lensListSignature=_lensListSignature;
@property(readonly, copy, nonatomic) NSNumber *medianIndexDepth; // @synthesize medianIndexDepth=_medianIndexDepth;
- (long long)medianIndexDepthValue;
@property(readonly, copy, nonatomic) NSArray *precachedLenses; // @synthesize precachedLenses=_precachedLenses;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

