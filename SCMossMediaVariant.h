//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCBoltContentDescriptor, SCMossMediaVariantMetadata;

@interface SCMossMediaVariant : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentDescriptor *contentDescriptor; // @dynamic contentDescriptor;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCMossMediaVariantMetadata *metadata; // @dynamic metadata;
@property(nonatomic) int status; // @dynamic status;
@property(readonly, nonatomic) int variantContentOneOfCase; // @dynamic variantContentOneOfCase;
@property(nonatomic) int variantName; // @dynamic variantName;

@end

