//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMEMapReplyContext_ExploreUpdate, SCMEMapReplyContext_LocationUpdate, SCMEMapReplyContext_Status;

@interface SCMEMapReplyContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int activityOneOfCase; // @dynamic activityOneOfCase;
@property(copy, nonatomic) NSString *avatarId; // @dynamic avatarId;
@property(retain, nonatomic) SCMEMapReplyContext_ExploreUpdate *explore; // @dynamic explore;
@property(retain, nonatomic) SCMEMapReplyContext_LocationUpdate *location; // @dynamic location;
@property(retain, nonatomic) SCMEMapReplyContext_Status *status; // @dynamic status;
@property(copy, nonatomic) NSString *stickerId; // @dynamic stickerId;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

