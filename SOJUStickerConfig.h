//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStickerConfig-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStickerConfig : NSObject <SOJUStickerConfig>
{
    NSNumber *_maximumSearchResults;
    NSNumber *_maximumSearchEmojis;
    NSNumber *_searchOrder;
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
- (id)initWithMaximumSearchResults:(id)arg1 maximumSearchEmojis:(id)arg2 searchOrder:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *maximumSearchEmojis; // @synthesize maximumSearchEmojis=_maximumSearchEmojis;
- (int)maximumSearchEmojisValue;
@property(readonly, copy, nonatomic) NSNumber *maximumSearchResults; // @synthesize maximumSearchResults=_maximumSearchResults;
- (int)maximumSearchResultsValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *searchOrder; // @synthesize searchOrder=_searchOrder;
- (int)searchOrderValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

