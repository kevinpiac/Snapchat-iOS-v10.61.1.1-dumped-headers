//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSSMLoggingContext, SCSSMUpNextLoggingExtension;

@interface SCSSMImpressionLoggingExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLoggingContext; // @dynamic hasLoggingContext;
@property(nonatomic) _Bool hasUpNext; // @dynamic hasUpNext;
@property(retain, nonatomic) SCSSMLoggingContext *loggingContext; // @dynamic loggingContext;
@property(retain, nonatomic) SCSSMUpNextLoggingExtension *upNext; // @dynamic upNext;
@property(copy, nonatomic) NSString *variantLoggingKey; // @dynamic variantLoggingKey;

@end

