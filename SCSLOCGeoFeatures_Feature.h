//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREGeoBoundingBox, SCSCOREGeoPoint, SCSCOREGeoPolygon;

@interface SCSLOCGeoFeatures_Feature : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) SCSCOREGeoBoundingBox *bbox; // @dynamic bbox;
@property(retain, nonatomic) SCSCOREGeoPoint *center; // @dynamic center;
@property(nonatomic) _Bool hasBbox; // @dynamic hasBbox;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasPolygon; // @dynamic hasPolygon;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) SCSCOREGeoPolygon *polygon; // @dynamic polygon;
@property(nonatomic) double relevance; // @dynamic relevance;

@end
