//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMTGetLatestTileSetResponse;

@interface SCMTGetMapTilesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewerTileSet; // @dynamic hasNewerTileSet;
@property(retain, nonatomic) SCMTGetLatestTileSetResponse *newerTileSet; // @dynamic newerTileSet;
@property(retain, nonatomic) NSMutableArray *tilesArray; // @dynamic tilesArray;
@property(readonly, nonatomic) unsigned long long tilesArray_Count; // @dynamic tilesArray_Count;

@end

