//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCPCharmGraphic_BitmojiSelfie, SCCPCharmGraphic_Friendmoji, SCCPCharmGraphic_Solomoji;

@interface SCCPCharmGraphic : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCPCharmGraphic_Friendmoji *detailFriendmoji; // @dynamic detailFriendmoji;
@property(readonly, nonatomic) int detailOneOfCase; // @dynamic detailOneOfCase;
@property(retain, nonatomic) SCCPCharmGraphic_Solomoji *detailSolomoji; // @dynamic detailSolomoji;
@property(retain, nonatomic) SCCPCharmGraphic_BitmojiSelfie *previewBitmojiSelfie; // @dynamic previewBitmojiSelfie;
@property(readonly, nonatomic) int previewOneOfCase; // @dynamic previewOneOfCase;
@property(copy, nonatomic) NSString *previewStickerImageId; // @dynamic previewStickerImageId;

@end
