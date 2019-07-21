//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString, SCMTOneSnapInfo, SCMTPublicMediaInfo, SCMTStreamingMediaInfo;

@interface SCSCOREMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(nonatomic) _Bool frontFacing; // @dynamic frontFacing;
@property(nonatomic) _Bool hasPublicMediaInfo; // @dynamic hasPublicMediaInfo;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasStreamingSnapInfo; // @dynamic hasStreamingSnapInfo;
@property(nonatomic) _Bool isInfiniteDuration; // @dynamic isInfiniteDuration;
@property(copy, nonatomic) NSString *mediaIdMsm; // @dynamic mediaIdMsm;
@property(copy, nonatomic) NSString *mediaIv; // @dynamic mediaIv;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) double mediaLengthSecs; // @dynamic mediaLengthSecs;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSMutableArray *mediaVariantsArray; // @dynamic mediaVariantsArray;
@property(readonly, nonatomic) unsigned long long mediaVariantsArray_Count; // @dynamic mediaVariantsArray_Count;
@property(nonatomic) int orientation; // @dynamic orientation;
@property(retain, nonatomic) SCMTPublicMediaInfo *publicMediaInfo; // @dynamic publicMediaInfo;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) SCMTOneSnapInfo *streamingSnapInfo; // @dynamic streamingSnapInfo;
@property(copy, nonatomic) NSString *thumbnailDominantColor; // @dynamic thumbnailDominantColor;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(retain, nonatomic) GPBEnumArray *thumbnailVariantsArray; // @dynamic thumbnailVariantsArray;
@property(readonly, nonatomic) unsigned long long thumbnailVariantsArray_Count; // @dynamic thumbnailVariantsArray_Count;
@property(nonatomic) _Bool zipped; // @dynamic zipped;

@end

