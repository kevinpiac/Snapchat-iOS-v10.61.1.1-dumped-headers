//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString, SASAudioStitch;

@interface SASAudioStitchMediaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SASAudioStitch *audioStitch; // @dynamic audioStitch;
@property(copy, nonatomic) NSString *entityKind; // @dynamic entityKind;
@property(nonatomic) _Bool hasAudioStitch; // @dynamic hasAudioStitch;
@property(retain, nonatomic) NSMutableDictionary *signedUrls; // @dynamic signedUrls;
@property(readonly, nonatomic) unsigned long long signedUrls_Count; // @dynamic signedUrls_Count;

@end

