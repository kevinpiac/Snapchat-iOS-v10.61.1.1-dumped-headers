//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGallerySnapSource-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUSnapCreatorAttribution;

@interface SOJUGallerySnapSource : NSObject <SOJUGallerySnapSource>
{
    NSNumber *_type;
    NSArray *_attribution;
    NSString *_cameraRollId;
    NSString *_externalId;
    NSString *_saverUserId;
    SOJUSnapCreatorAttribution *_creatorAttribution;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic) NSString *cameraRollId; // @synthesize cameraRollId=_cameraRollId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUSnapCreatorAttribution *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithType:(id)arg1 attribution:(id)arg2 cameraRollId:(id)arg3 externalId:(id)arg4 saverUserId:(id)arg5 creatorAttribution:(id)arg6;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *saverUserId; // @synthesize saverUserId=_saverUserId;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
- (long long)typeEnum;
- (int)typeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

