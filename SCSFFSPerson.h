//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREUUID;

@interface SCSFFSPerson : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @dynamic bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @dynamic bitmojiSelfieId;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) SCSCOREUUID *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

