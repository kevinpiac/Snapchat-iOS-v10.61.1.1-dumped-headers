//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2GeoCircle, SCR2GeoPolygon;

@interface SCR2GeoFence : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2GeoCircle *geoCircle; // @dynamic geoCircle;
@property(retain, nonatomic) SCR2GeoPolygon *geoPolygon; // @dynamic geoPolygon;
@property(readonly, nonatomic) int shapeOneOfCase; // @dynamic shapeOneOfCase;

@end
