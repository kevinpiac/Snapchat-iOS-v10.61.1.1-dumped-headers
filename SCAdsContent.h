//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCAdsContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *adKey; // @dynamic adKey;
@property(nonatomic) int adType; // @dynamic adType;
@property(copy, nonatomic) NSString *brandHeadlineMessage; // @dynamic brandHeadlineMessage;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(copy, nonatomic) NSString *creativeId; // @dynamic creativeId;
@property(retain, nonatomic) NSMutableArray *renditionV2Array; // @dynamic renditionV2Array;
@property(readonly, nonatomic) unsigned long long renditionV2Array_Count; // @dynamic renditionV2Array_Count;

@end
