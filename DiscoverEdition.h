//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class Edition, NSString;

@interface DiscoverEdition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) Edition *channel; // @dynamic channel;
@property(nonatomic) long long generationTs; // @dynamic generationTs;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(copy, nonatomic) NSString *validity; // @dynamic validity;

@end

