//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastBroadcastInitRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUBroadcastBroadcastInitRequest : NSObject <SOJUBroadcastBroadcastInitRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSNumber *_lastUpdatedTimestamp;
    NSString *_lastUpdatedHashcode;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_maxVideoHeight;
    NSNumber *_maxVideoWidth;
    NSString *_region;
    NSString *_country;
    NSNumber *_getSubscriptionList;
    NSString *_overrideRulefile;
    NSString *_channelHashCodes;
    NSNumber *_getCollectionV2;
    NSNumber *_tilesV2Enabled;
    NSNumber *_connectionClass;
    NSString *_reachability;
    NSNumber *_sponsoredCollectionEnabled;
    NSNumber *_cheetahEnabled;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *channelHashCodes; // @synthesize channelHashCodes=_channelHashCodes;
@property(readonly, copy, nonatomic) NSNumber *cheetahEnabled; // @synthesize cheetahEnabled=_cheetahEnabled;
- (_Bool)cheetahEnabledValue;
@property(readonly, copy, nonatomic) NSNumber *connectionClass; // @synthesize connectionClass=_connectionClass;
- (long long)connectionClassEnum;
- (int)connectionClassValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *getCollectionV2; // @synthesize getCollectionV2=_getCollectionV2;
- (_Bool)getCollectionV2Value;
@property(readonly, copy, nonatomic) NSNumber *getSubscriptionList; // @synthesize getSubscriptionList=_getSubscriptionList;
- (_Bool)getSubscriptionListValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (int)heightValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 lastUpdatedTimestamp:(id)arg4 lastUpdatedHashcode:(id)arg5 height:(id)arg6 width:(id)arg7 maxVideoHeight:(id)arg8 maxVideoWidth:(id)arg9 region:(id)arg10 country:(id)arg11 getSubscriptionList:(id)arg12 overrideRulefile:(id)arg13 channelHashCodes:(id)arg14 getCollectionV2:(id)arg15 tilesV2Enabled:(id)arg16 connectionClass:(id)arg17 reachability:(id)arg18 sponsoredCollectionEnabled:(id)arg19 cheetahEnabled:(id)arg20;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastUpdatedHashcode; // @synthesize lastUpdatedHashcode=_lastUpdatedHashcode;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
- (long long)lastUpdatedTimestampValue;
@property(readonly, copy, nonatomic) NSNumber *maxVideoHeight; // @synthesize maxVideoHeight=_maxVideoHeight;
- (int)maxVideoHeightValue;
@property(readonly, copy, nonatomic) NSNumber *maxVideoWidth; // @synthesize maxVideoWidth=_maxVideoWidth;
- (int)maxVideoWidthValue;
@property(readonly, copy, nonatomic) NSString *overrideRulefile; // @synthesize overrideRulefile=_overrideRulefile;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *reachability; // @synthesize reachability=_reachability;
- (long long)reachabilityEnum;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *sponsoredCollectionEnabled; // @synthesize sponsoredCollectionEnabled=_sponsoredCollectionEnabled;
- (_Bool)sponsoredCollectionEnabledValue;
@property(readonly, copy, nonatomic) NSNumber *tilesV2Enabled; // @synthesize tilesV2Enabled=_tilesV2Enabled;
- (_Bool)tilesV2EnabledValue;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (int)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
