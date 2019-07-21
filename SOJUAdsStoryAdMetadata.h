//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdsStoryAdMetadata-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdsStoryAdInsertionConfig, SOJUAdsStoryAdRequestConfig;

@interface SOJUAdsStoryAdMetadata : NSObject <SOJUAdsStoryAdMetadata>
{
    SOJUAdsStoryAdInsertionConfig *_adInsertionConfig;
    SOJUAdsStoryAdRequestConfig *_adRequestConfig;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
    NSArray *_adCannotFollowSnapIds;
    NSNumber *_enableFullView;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *adCannotFollowSnapIds; // @synthesize adCannotFollowSnapIds=_adCannotFollowSnapIds;
@property(readonly, copy, nonatomic) SOJUAdsStoryAdInsertionConfig *adInsertionConfig; // @synthesize adInsertionConfig=_adInsertionConfig;
@property(readonly, copy, nonatomic) SOJUAdsStoryAdRequestConfig *adRequestConfig; // @synthesize adRequestConfig=_adRequestConfig;
@property(readonly, copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *enableFullView; // @synthesize enableFullView=_enableFullView;
- (_Bool)enableFullViewValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAdInsertionConfig:(id)arg1 adRequestConfig:(id)arg2 adUnitId:(id)arg3 targetingParameters:(id)arg4 adCannotFollowSnapIds:(id)arg5 enableFullView:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

