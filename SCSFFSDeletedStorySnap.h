//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSStorySnapMetadata;

@interface SCSFFSDeletedStorySnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSStorySnapMetadata *deletedSnap; // @dynamic deletedSnap;
@property(nonatomic) _Bool hasDeletedSnap; // @dynamic hasDeletedSnap;
@property(nonatomic) _Bool hasHighestSequenceNumberActiveSnap; // @dynamic hasHighestSequenceNumberActiveSnap;
@property(retain, nonatomic) SCSFFSStorySnapMetadata *highestSequenceNumberActiveSnap; // @dynamic highestSequenceNumberActiveSnap;

@end

