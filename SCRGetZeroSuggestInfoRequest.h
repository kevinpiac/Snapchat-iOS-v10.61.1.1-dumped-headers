//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCRGetSearchCardsRequest;

@interface SCRGetZeroSuggestInfoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOriginalRequest; // @dynamic hasOriginalRequest;
@property(retain, nonatomic) NSMutableArray *infoRequestsArray; // @dynamic infoRequestsArray;
@property(readonly, nonatomic) unsigned long long infoRequestsArray_Count; // @dynamic infoRequestsArray_Count;
@property(retain, nonatomic) SCRGetSearchCardsRequest *originalRequest; // @dynamic originalRequest;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;

@end
