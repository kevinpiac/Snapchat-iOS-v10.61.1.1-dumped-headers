//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCAdsBottomSnap, SCAdsPoliticalAdInfo, SCAdsTopSnap, SCAdsZipPackageInfo;

@interface SCAdsAdSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adSnapType; // @dynamic adSnapType;
@property(retain, nonatomic) SCAdsBottomSnap *bottomSnap; // @dynamic bottomSnap;
@property(copy, nonatomic) NSString *brandHeadlineMessage; // @dynamic brandHeadlineMessage;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(copy, nonatomic) NSData *creativeId; // @dynamic creativeId;
@property(nonatomic) _Bool hasBottomSnap; // @dynamic hasBottomSnap;
@property(nonatomic) _Bool hasPoliticalAdInf; // @dynamic hasPoliticalAdInf;
@property(nonatomic) _Bool hasTopSnap; // @dynamic hasTopSnap;
@property(nonatomic) _Bool hasZipPackageInfo; // @dynamic hasZipPackageInfo;
@property(nonatomic) _Bool isSharable; // @dynamic isSharable;
@property(nonatomic) _Bool isUnskippable; // @dynamic isUnskippable;
@property(retain, nonatomic) SCAdsPoliticalAdInfo *politicalAdInf; // @dynamic politicalAdInf;
@property(nonatomic) int slugType; // @dynamic slugType;
@property(retain, nonatomic) SCAdsTopSnap *topSnap; // @dynamic topSnap;
@property(retain, nonatomic) SCAdsZipPackageInfo *zipPackageInfo; // @dynamic zipPackageInfo;

@end

