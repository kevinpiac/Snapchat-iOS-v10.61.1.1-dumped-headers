//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SPCGPoint;

@interface SCGIGroupInviteEventInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endEpoch; // @dynamic endEpoch;
@property(copy, nonatomic) NSString *eventDescription; // @dynamic eventDescription;
@property(copy, nonatomic) NSString *eventTitle; // @dynamic eventTitle;
@property(nonatomic) _Bool hasLocationLatLng; // @dynamic hasLocationLatLng;
@property(retain, nonatomic) NSMutableArray *joinedPeopleArray; // @dynamic joinedPeopleArray;
@property(readonly, nonatomic) unsigned long long joinedPeopleArray_Count; // @dynamic joinedPeopleArray_Count;
@property(copy, nonatomic) NSString *locationAddressInfo; // @dynamic locationAddressInfo;
@property(copy, nonatomic) NSString *locationDisplayString; // @dynamic locationDisplayString;
@property(retain, nonatomic) SPCGPoint *locationLatLng; // @dynamic locationLatLng;
@property(copy, nonatomic) NSString *locationVenueId; // @dynamic locationVenueId;
@property(nonatomic) long long startEpoch; // @dynamic startEpoch;

@end

