//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray, STOAdPlacement_AdPlacementMetadata, STOAdPlacement_FixedAdSlots;

@interface STOAdPlacement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STOAdPlacement_AdPlacementMetadata *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(readonly, nonatomic) int adPlacementOneOfCase; // @dynamic adPlacementOneOfCase;
@property(nonatomic) int adSetting; // @dynamic adSetting;
@property(retain, nonatomic) NSMutableArray *adsArray; // @dynamic adsArray;
@property(readonly, nonatomic) unsigned long long adsArray_Count; // @dynamic adsArray_Count;
@property(retain, nonatomic) GPBInt32Array *fixedAdIndexesArray; // @dynamic fixedAdIndexesArray;
@property(readonly, nonatomic) unsigned long long fixedAdIndexesArray_Count; // @dynamic fixedAdIndexesArray_Count;
@property(retain, nonatomic) STOAdPlacement_FixedAdSlots *fixedAdSlots; // @dynamic fixedAdSlots;

@end

