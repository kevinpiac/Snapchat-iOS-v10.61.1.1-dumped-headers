//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SnapBrainResponse_Results_Context : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *detectionsArray; // @dynamic detectionsArray;
@property(readonly, nonatomic) unsigned long long detectionsArray_Count; // @dynamic detectionsArray_Count;
@property(retain, nonatomic) NSMutableArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;

@end

