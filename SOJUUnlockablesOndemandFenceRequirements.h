//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandFenceRequirements-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandSizeRequirements;

@interface SOJUUnlockablesOndemandFenceRequirements : NSObject <SOJUUnlockablesOndemandFenceRequirements>
{
    SOJUUnlockablesOndemandSizeRequirements *_sizeRequirements;
    NSNumber *_maxCoordinates;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithSizeRequirements:(id)arg1 maxCoordinates:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *maxCoordinates; // @synthesize maxCoordinates=_maxCoordinates;
- (int)maxCoordinatesValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSizeRequirements *sizeRequirements; // @synthesize sizeRequirements=_sizeRequirements;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
