//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSUPGetSearchHistoryResponse_QueryInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long queryTimeSecs; // @dynamic queryTimeSecs;
@property(copy, nonatomic) NSString *s2CellId; // @dynamic s2CellId;
@property(copy, nonatomic) NSString *searchQueryText; // @dynamic searchQueryText;

@end

