//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesTextPadding-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesTextPadding : NSObject <SOJUUnlockablesTextPadding>
{
    NSNumber *_top;
    NSNumber *_left;
    NSNumber *_right;
    NSNumber *_bottom;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *bottom; // @synthesize bottom=_bottom;
- (double)bottomValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithTop:(id)arg1 left:(id)arg2 right:(id)arg3 bottom:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *left; // @synthesize left=_left;
- (double)leftValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *right; // @synthesize right=_right;
- (double)rightValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *top; // @synthesize top=_top;
- (double)topValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

