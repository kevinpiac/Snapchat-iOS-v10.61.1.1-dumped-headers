//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface UserSubscribedLives : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *subscribedDetails; // @dynamic subscribedDetails;
@property(readonly, nonatomic) unsigned long long subscribedDetails_Count; // @dynamic subscribedDetails_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
