//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GAPICustomHttpPattern, NSMutableArray, NSString;

@interface GAPIHttpRule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalBindingsArray; // @dynamic additionalBindingsArray;
@property(readonly, nonatomic) unsigned long long additionalBindingsArray_Count; // @dynamic additionalBindingsArray_Count;
@property(copy, nonatomic) NSString *body; // @dynamic body;
@property(retain, nonatomic) GAPICustomHttpPattern *custom; // @dynamic custom;
@property(copy, nonatomic) NSString *delete_p; // @dynamic delete_p;
@property(copy, nonatomic) NSString *get; // @dynamic get;
@property(copy, nonatomic) NSString *patch; // @dynamic patch;
@property(readonly, nonatomic) int patternOneOfCase; // @dynamic patternOneOfCase;
@property(copy, nonatomic) NSString *post; // @dynamic post;
@property(copy, nonatomic) NSString *put; // @dynamic put;
@property(copy, nonatomic) NSString *selector; // @dynamic selector;

@end

