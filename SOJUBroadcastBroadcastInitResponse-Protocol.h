//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUBroadcastPrecachingPrecache, SOJUBroadcastRuleFileResponse, SOJUDiscoverResponse, SOJUFeatureSettings;

@protocol SOJUBroadcastBroadcastInitResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *channelOrder;
@property(readonly, copy, nonatomic) NSArray *collections;
@property(readonly, copy, nonatomic) NSArray *collectionsV2;
@property(readonly, copy, nonatomic) NSArray *discoverChannelsMetadata;
@property(readonly, copy, nonatomic) SOJUDiscoverResponse *discoverConfig;
@property(readonly, copy, nonatomic) SOJUFeatureSettings *featureSettings;
@property(readonly, copy, nonatomic) NSArray *featuredChannels;
@property(readonly, copy, nonatomic) NSArray *hiddenList;
@property(readonly, copy, nonatomic) SOJUBroadcastPrecachingPrecache *precacheSettings;
@property(readonly, copy, nonatomic) SOJUBroadcastRuleFileResponse *rulefile;
@property(readonly, copy, nonatomic) NSString *sortOrderId;
@property(readonly, copy, nonatomic) NSArray *subscriptionList;
@property(readonly, copy, nonatomic) NSArray *tabs;
@property(readonly, copy, nonatomic) NSString *updatedHashcode;
@property(readonly, copy, nonatomic) NSNumber *updatedTimestamp;
@property(readonly, copy, nonatomic) NSDictionary *webviewMacros;
@end

