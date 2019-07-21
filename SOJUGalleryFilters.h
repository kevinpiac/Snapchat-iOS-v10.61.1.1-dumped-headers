//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryFilters-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUContextFilterMetadata, SOJUGalleryStreakFilter, SOJUGalleryVenueFilter;

@interface SOJUGalleryFilters : NSObject <SOJUGalleryFilters>
{
    NSArray *_visualFilters;
    NSString *_visualFilterSelectedType;
    NSArray *_infoFilters;
    NSString *_infoFilterSelectedType;
    NSArray *_speedMotionFilters;
    NSString *_speedMotionFilterSelectedType;
    NSNumber *_reverseMotionFilterEnabled;
    NSNumber *_reverseMotionFilterSelected;
    NSArray *_geoFilters;
    NSString *_geoFilterSelectedId;
    SOJUGalleryVenueFilter *_venueFilter;
    NSNumber *_venueFilterSelected;
    SOJUGalleryStreakFilter *_streakFilter;
    NSNumber *_streakFilterSelected;
    SOJUContextFilterMetadata *_contextFilters;
    NSString *_contextFilterSelectedId;
    NSArray *_geoFilterSelectedIds;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contextFilterSelectedId; // @synthesize contextFilterSelectedId=_contextFilterSelectedId;
@property(readonly, copy, nonatomic) SOJUContextFilterMetadata *contextFilters; // @synthesize contextFilters=_contextFilters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *geoFilterSelectedId; // @synthesize geoFilterSelectedId=_geoFilterSelectedId;
@property(readonly, copy, nonatomic) NSArray *geoFilterSelectedIds; // @synthesize geoFilterSelectedIds=_geoFilterSelectedIds;
@property(readonly, copy, nonatomic) NSArray *geoFilters; // @synthesize geoFilters=_geoFilters;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *infoFilterSelectedType; // @synthesize infoFilterSelectedType=_infoFilterSelectedType;
- (long long)infoFilterSelectedTypeEnum;
@property(readonly, copy, nonatomic) NSArray *infoFilters; // @synthesize infoFilters=_infoFilters;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithVisualFilters:(id)arg1 visualFilterSelectedType:(id)arg2 infoFilters:(id)arg3 infoFilterSelectedType:(id)arg4 speedMotionFilters:(id)arg5 speedMotionFilterSelectedType:(id)arg6 reverseMotionFilterEnabled:(id)arg7 reverseMotionFilterSelected:(id)arg8 geoFilters:(id)arg9 geoFilterSelectedId:(id)arg10 venueFilter:(id)arg11 venueFilterSelected:(id)arg12 streakFilter:(id)arg13 streakFilterSelected:(id)arg14 contextFilters:(id)arg15 contextFilterSelectedId:(id)arg16 geoFilterSelectedIds:(id)arg17;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *reverseMotionFilterEnabled; // @synthesize reverseMotionFilterEnabled=_reverseMotionFilterEnabled;
- (_Bool)reverseMotionFilterEnabledValue;
@property(readonly, copy, nonatomic) NSNumber *reverseMotionFilterSelected; // @synthesize reverseMotionFilterSelected=_reverseMotionFilterSelected;
- (_Bool)reverseMotionFilterSelectedValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *speedMotionFilterSelectedType; // @synthesize speedMotionFilterSelectedType=_speedMotionFilterSelectedType;
- (long long)speedMotionFilterSelectedTypeEnum;
@property(readonly, copy, nonatomic) NSArray *speedMotionFilters; // @synthesize speedMotionFilters=_speedMotionFilters;
@property(readonly, copy, nonatomic) SOJUGalleryStreakFilter *streakFilter; // @synthesize streakFilter=_streakFilter;
@property(readonly, copy, nonatomic) NSNumber *streakFilterSelected; // @synthesize streakFilterSelected=_streakFilterSelected;
- (_Bool)streakFilterSelectedValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilter *venueFilter; // @synthesize venueFilter=_venueFilter;
@property(readonly, copy, nonatomic) NSNumber *venueFilterSelected; // @synthesize venueFilterSelected=_venueFilterSelected;
- (_Bool)venueFilterSelectedValue;
@property(readonly, copy, nonatomic) NSString *visualFilterSelectedType; // @synthesize visualFilterSelectedType=_visualFilterSelectedType;
- (long long)visualFilterSelectedTypeEnum;
@property(readonly, copy, nonatomic) NSArray *visualFilters; // @synthesize visualFilters=_visualFilters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

