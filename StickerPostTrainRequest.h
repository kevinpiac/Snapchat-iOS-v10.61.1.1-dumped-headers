//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class DdmlResult, GPBStringDoubleDictionary, NSString;

@interface StickerPostTrainRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(copy, nonatomic) NSString *modelId; // @dynamic modelId;
@property(retain, nonatomic) DdmlResult *result; // @dynamic result;
@property(retain, nonatomic) GPBStringDoubleDictionary *weights; // @dynamic weights;
@property(readonly, nonatomic) unsigned long long weights_Count; // @dynamic weights_Count;

@end

