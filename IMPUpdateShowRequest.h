//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringValue, IMPLogoDisplayUpdate, IMPShowTypeUpdate, NSString;

@interface IMPUpdateShowRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringValue *backgroundImageURL; // @dynamic backgroundImageURL;
@property(retain, nonatomic) GPBStringValue *deeplink; // @dynamic deeplink;
@property(retain, nonatomic) GPBStringValue *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasBackgroundImageURL; // @dynamic hasBackgroundImageURL;
@property(nonatomic) _Bool hasDeeplink; // @dynamic hasDeeplink;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasHorizontalLogoURL; // @dynamic hasHorizontalLogoURL;
@property(nonatomic) _Bool hasLogoURL; // @dynamic hasLogoURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOverlayButtonText; // @dynamic hasOverlayButtonText;
@property(nonatomic) _Bool hasProfileLogoDisplay; // @dynamic hasProfileLogoDisplay;
@property(nonatomic) _Bool hasShowTileImageURL; // @dynamic hasShowTileImageURL;
@property(nonatomic) _Bool hasShowType; // @dynamic hasShowType;
@property(nonatomic) _Bool hasWebsiteURL; // @dynamic hasWebsiteURL;
@property(retain, nonatomic) GPBStringValue *horizontalLogoURL; // @dynamic horizontalLogoURL;
@property(retain, nonatomic) GPBStringValue *logoURL; // @dynamic logoURL;
@property(retain, nonatomic) GPBStringValue *name; // @dynamic name;
@property(retain, nonatomic) GPBStringValue *overlayButtonText; // @dynamic overlayButtonText;
@property(retain, nonatomic) IMPLogoDisplayUpdate *profileLogoDisplay; // @dynamic profileLogoDisplay;
@property(copy, nonatomic) NSString *showId; // @dynamic showId;
@property(retain, nonatomic) GPBStringValue *showTileImageURL; // @dynamic showTileImageURL;
@property(retain, nonatomic) IMPShowTypeUpdate *showType; // @dynamic showType;
@property(retain, nonatomic) GPBStringValue *websiteURL; // @dynamic websiteURL;

@end
