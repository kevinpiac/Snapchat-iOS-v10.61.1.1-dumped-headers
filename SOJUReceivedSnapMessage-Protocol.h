//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUConversationMessage-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUGenericSnap, SOJUHeader, SOJUMediaUrl, SOJUSnapMetadata, SOJUSnapstreakMetadata;

@protocol SOJUReceivedSnapMessage <NSObject, NSCoding, NSCopying, SOJUConversationMessage>
@property(readonly, copy, nonatomic) NSString *animatedSnapType;
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSNumber *captionOrientationDeprecated;
@property(readonly, copy, nonatomic) NSNumber *captionPositionDeprecated;
@property(readonly, copy, nonatomic) NSString *captionTextDeprecated;
@property(readonly, copy, nonatomic) NSString *checksum;
@property(readonly, copy, nonatomic) NSString *contextHint;
@property(readonly, copy, nonatomic) NSNumber *deliveredTimestamp;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadUrl;
@property(readonly, copy, nonatomic) NSNumber *displayTime;
@property(readonly, copy, nonatomic) NSString *egData;
@property(readonly, copy, nonatomic) NSString *esId;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutAlpha;
@property(readonly, copy, nonatomic) NSNumber *fiRetried;
@property(readonly, copy, nonatomic) NSNumber *fiSendTimestamp;
@property(readonly, copy, nonatomic) NSString *fiSenderOutAlpha;
@property(readonly, copy, nonatomic) NSString *fiSenderOutBeta;
@property(readonly, copy, nonatomic) NSString *fiSnapIv;
@property(readonly, copy, nonatomic) NSString *fiSnapKey;
@property(readonly, copy, nonatomic) NSNumber *fiSnapReleaseTs;
@property(readonly, copy, nonatomic) NSNumber *fiVersion;
@property(readonly, copy, nonatomic) NSDictionary *fideliusInfo;
@property(readonly, copy, nonatomic) NSString *filterId;
@property(readonly, copy, nonatomic) SOJUHeader *header;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *mediaType;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion;
@property(readonly, copy, nonatomic) NSArray *replyMedias;
@property(readonly, copy, nonatomic) NSNumber *retried;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp;
@property(readonly, copy, nonatomic) NSNumber *sentTimestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSArray *snapAttachments;
@property(readonly, copy, nonatomic) NSString *snapId;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
@property(readonly, copy, nonatomic) SOJUSnapstreakMetadata *snapstreakMetadata;
@property(readonly, copy, nonatomic) SOJUGenericSnap *sojuNewSnap;
@property(readonly, copy, nonatomic) NSString *sojuNewSnapId;
@property(readonly, copy, nonatomic) NSString *sojuNewSnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *status;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSArray *uvTags;
@property(readonly, copy, nonatomic) NSString *venueId;
@property(readonly, copy, nonatomic) NSNumber *zipped;
@end

