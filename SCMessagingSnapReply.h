//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingExternalMedia, SCMessagingNote, SCMessagingShare, SCMessagingSnap, SCMessagingSticker, SCMessagingText;

@interface SCMessagingSnapReply : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOriginalSnap; // @dynamic hasOriginalSnap;
@property(retain, nonatomic) SCMessagingSnap *originalSnap; // @dynamic originalSnap;
@property(readonly, nonatomic) int replyContentOneOfCase; // @dynamic replyContentOneOfCase;
@property(retain, nonatomic) SCMessagingExternalMedia *replyExternalMedia; // @dynamic replyExternalMedia;
@property(retain, nonatomic) SCMessagingNote *replyNote; // @dynamic replyNote;
@property(retain, nonatomic) SCMessagingShare *replyShare; // @dynamic replyShare;
@property(retain, nonatomic) SCMessagingSnap *replySnap; // @dynamic replySnap;
@property(retain, nonatomic) SCMessagingSticker *replySticker; // @dynamic replySticker;
@property(retain, nonatomic) SCMessagingText *replyText; // @dynamic replyText;

@end

