//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray;

@interface SnapBrainResponse_Results_Interestingness : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDoubleArray *audioCnnFeatureArray; // @dynamic audioCnnFeatureArray;
@property(readonly, nonatomic) unsigned long long audioCnnFeatureArray_Count; // @dynamic audioCnnFeatureArray_Count;
@property(nonatomic) _Bool hasAudio; // @dynamic hasAudio;
@property(nonatomic) double score; // @dynamic score;
@property(retain, nonatomic) GPBDoubleArray *videoCnnFeatureArray; // @dynamic videoCnnFeatureArray;
@property(readonly, nonatomic) unsigned long long videoCnnFeatureArray_Count; // @dynamic videoCnnFeatureArray_Count;

@end

