//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32Array, NSData, NSString;

@interface STMTrimCustomTrackRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32Array *audioSamplesArray; // @dynamic audioSamplesArray;
@property(readonly, nonatomic) unsigned long long audioSamplesArray_Count; // @dynamic audioSamplesArray_Count;
@property(copy, nonatomic) NSData *encAudioData; // @dynamic encAudioData;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;
@property(copy, nonatomic) NSString *trackName; // @dynamic trackName;
@property(nonatomic) int version; // @dynamic version;

@end

