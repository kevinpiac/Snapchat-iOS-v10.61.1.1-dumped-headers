//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCMEGetExplorerStatusesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double pollingIntervalSeconds; // @dynamic pollingIntervalSeconds;
@property(retain, nonatomic) NSMutableArray *statusesArray; // @dynamic statusesArray;
@property(readonly, nonatomic) unsigned long long statusesArray_Count; // @dynamic statusesArray_Count;

@end

