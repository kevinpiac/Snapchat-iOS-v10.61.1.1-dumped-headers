//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCCognacLeaderboardsCreateLeaderboardRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(nonatomic) long long maxScore; // @dynamic maxScore;
@property(nonatomic) long long minScore; // @dynamic minScore;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int orderingType; // @dynamic orderingType;
@property(nonatomic) long long scoreDecimalOffset; // @dynamic scoreDecimalOffset;
@property(nonatomic) int scoreType; // @dynamic scoreType;

@end
