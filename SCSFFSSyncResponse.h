//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, SCSFFSSyncTokens;

@interface SCSFFSSyncResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *feedEntriesArray; // @dynamic feedEntriesArray;
@property(readonly, nonatomic) unsigned long long feedEntriesArray_Count; // @dynamic feedEntriesArray_Count;
@property(copy, nonatomic) NSData *nextPageTokens; // @dynamic nextPageTokens;
@property(retain, nonatomic) SCSFFSSyncTokens *nextSyncTokens; // @dynamic nextSyncTokens;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSMutableArray *storyViewStateArray; // @dynamic storyViewStateArray;
@property(readonly, nonatomic) unsigned long long storyViewStateArray_Count; // @dynamic storyViewStateArray_Count;
@property(readonly, nonatomic) int tokenOneOfCase; // @dynamic tokenOneOfCase;

@end

