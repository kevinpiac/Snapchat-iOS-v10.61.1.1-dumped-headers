//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastArticleMetadataList-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBroadcastArticleMetadataList : NSObject <SOJUBroadcastArticleMetadataList>
{
    NSArray *_tiles;
    NSNumber *_generationTs;
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
@property(readonly, copy, nonatomic) NSNumber *generationTs; // @synthesize generationTs=_generationTs;
- (long long)generationTsValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTiles:(id)arg1 generationTs:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

