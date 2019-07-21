//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSSRVCreateSharingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *destinationId; // @dynamic destinationId;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *emoji; // @dynamic emoji;
@property(nonatomic) _Bool isOfficialUser; // @dynamic isOfficialUser;
@property(retain, nonatomic) NSMutableArray *languagePreferencesArray; // @dynamic languagePreferencesArray;
@property(readonly, nonatomic) unsigned long long languagePreferencesArray_Count; // @dynamic languagePreferencesArray_Count;
@property(nonatomic) int requestOrigin; // @dynamic requestOrigin;
@property(nonatomic) long long sharerIdHash; // @dynamic sharerIdHash;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

