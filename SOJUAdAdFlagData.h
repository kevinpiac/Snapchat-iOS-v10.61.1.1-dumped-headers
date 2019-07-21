//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdAdFlagData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdAdFlagData : NSObject <SOJUAdAdFlagData>
{
    NSNumber *_adFlagged;
    NSString *_adFlaggedReason;
    NSString *_adFlaggedNote;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *adFlagged; // @synthesize adFlagged=_adFlagged;
@property(readonly, copy, nonatomic) NSString *adFlaggedNote; // @synthesize adFlaggedNote=_adFlaggedNote;
@property(readonly, copy, nonatomic) NSString *adFlaggedReason; // @synthesize adFlaggedReason=_adFlaggedReason;
- (long long)adFlaggedReasonEnum;
- (_Bool)adFlaggedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAdFlagged:(id)arg1 adFlaggedReason:(id)arg2 adFlaggedNote:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
