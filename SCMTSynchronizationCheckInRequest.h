//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCMTSynchronizationCheckInRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *latestTileSetIdsArray; // @dynamic latestTileSetIdsArray;
@property(readonly, nonatomic) unsigned long long latestTileSetIdsArray_Count; // @dynamic latestTileSetIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *loadingTileSetIdsArray; // @dynamic loadingTileSetIdsArray;
@property(readonly, nonatomic) unsigned long long loadingTileSetIdsArray_Count; // @dynamic loadingTileSetIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *servingTileSetIdsArray; // @dynamic servingTileSetIdsArray;
@property(readonly, nonatomic) unsigned long long servingTileSetIdsArray_Count; // @dynamic servingTileSetIdsArray_Count;

@end

