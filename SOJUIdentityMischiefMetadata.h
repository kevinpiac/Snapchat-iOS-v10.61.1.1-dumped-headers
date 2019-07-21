//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityMischiefMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUIdentityMischiefMetadata : NSObject <SOJUIdentityMischiefMetadata>
{
    NSString *_mischiefName;
    NSArray *_participants;
    NSArray *_exParticipants;
    NSNumber *_version;
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
@property(readonly, copy, nonatomic) NSArray *exParticipants; // @synthesize exParticipants=_exParticipants;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMischiefName:(id)arg1 participants:(id)arg2 exParticipants:(id)arg3 version:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mischiefName; // @synthesize mischiefName=_mischiefName;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *version; // @synthesize version=_version;
- (long long)versionValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

