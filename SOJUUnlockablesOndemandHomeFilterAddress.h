//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandHomeFilterAddress-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandHomeFilterAddress : NSObject <SOJUUnlockablesOndemandHomeFilterAddress>
{
    NSString *_address;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_lastModifiedTimestamp;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAddress:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 lastModifiedTimestamp:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
- (long long)lastModifiedTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (double)latitudeValue;
@property(readonly, copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
- (double)longitudeValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

