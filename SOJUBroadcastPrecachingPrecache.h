//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastPrecachingPrecache-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastPrecachingLookaheadPrecache;

@interface SOJUBroadcastPrecachingPrecache : NSObject <SOJUBroadcastPrecachingPrecache>
{
    NSNumber *_useServerPreloadingLogic;
    NSArray *_entities;
    NSArray *_defaults;
    NSArray *_lookaheadPrecache;
    SOJUBroadcastPrecachingLookaheadPrecache *_defaultLookaheadPrecache;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUBroadcastPrecachingLookaheadPrecache *defaultLookaheadPrecache; // @synthesize defaultLookaheadPrecache=_defaultLookaheadPrecache;
@property(readonly, copy, nonatomic) NSArray *defaults; // @synthesize defaults=_defaults;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUseServerPreloadingLogic:(id)arg1 entities:(id)arg2 defaults:(id)arg3 lookaheadPrecache:(id)arg4 defaultLookaheadPrecache:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *lookaheadPrecache; // @synthesize lookaheadPrecache=_lookaheadPrecache;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *useServerPreloadingLogic; // @synthesize useServerPreloadingLogic=_useServerPreloadingLogic;
- (_Bool)useServerPreloadingLogicValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

