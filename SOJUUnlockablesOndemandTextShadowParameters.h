//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandTextShadowParameters-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandTextShadowParameters : NSObject <SOJUUnlockablesOndemandTextShadowParameters>
{
    NSString *_color;
    NSNumber *_shadowOffsetX;
    NSNumber *_shadowOffsetY;
    NSNumber *_blurRadius;
    NSNumber *_opacity;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *blurRadius; // @synthesize blurRadius=_blurRadius;
- (double)blurRadiusValue;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 shadowOffsetX:(id)arg2 shadowOffsetY:(id)arg3 blurRadius:(id)arg4 opacity:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *opacity; // @synthesize opacity=_opacity;
- (double)opacityValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
- (int)shadowOffsetXValue;
@property(readonly, copy, nonatomic) NSNumber *shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
- (int)shadowOffsetYValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

