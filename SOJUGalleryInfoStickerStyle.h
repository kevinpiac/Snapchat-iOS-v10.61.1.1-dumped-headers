//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryInfoStickerStyle-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryDateInfoFilter, SOJUGalleryGroupInfoFilterStyle, SOJUGalleryMentionStickerStyle, SOJUGalleryRatingStickerStyle, SOJUGalleryRequestStickerStyle, SOJUGalleryVenueFilterInfoStyle;

@interface SOJUGalleryInfoStickerStyle : NSObject <SOJUGalleryInfoStickerStyle>
{
    SOJUGalleryDateInfoFilter *_date;
    NSString *_weather;
    SOJUGalleryAltitudeInfoFilterStyle *_altitude;
    SOJUGalleryRatingStickerStyle *_rating;
    SOJUGalleryVenueFilterInfoStyle *_venue;
    SOJUGalleryGroupInfoFilterStyle *_group;
    SOJUGalleryMentionStickerStyle *_mention;
    SOJUGalleryRequestStickerStyle *_request;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUGalleryAltitudeInfoFilterStyle *altitude; // @synthesize altitude=_altitude;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUGalleryDateInfoFilter *date; // @synthesize date=_date;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUGalleryGroupInfoFilterStyle *group; // @synthesize group=_group;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 weather:(id)arg2 altitude:(id)arg3 rating:(id)arg4 venue:(id)arg5 group:(id)arg6 mention:(id)arg7 request:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUGalleryMentionStickerStyle *mention; // @synthesize mention=_mention;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUGalleryRatingStickerStyle *rating; // @synthesize rating=_rating;
@property(readonly, copy, nonatomic) SOJUGalleryRequestStickerStyle *request; // @synthesize request=_request;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilterInfoStyle *venue; // @synthesize venue=_venue;
@property(readonly, copy, nonatomic) NSString *weather; // @synthesize weather=_weather;
- (long long)weatherEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

