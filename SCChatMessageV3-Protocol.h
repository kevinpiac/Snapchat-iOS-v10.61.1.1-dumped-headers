//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, SCChatGroupUpdateContent, SCChatMediaContent, SCChatMediaSave, SCChatMessageParcel, SCChatSticker, SCSnapState, SOJUKhaleesiShare, SOJUNycShare, SOJUSearchShareStory, SOJUSearchShareStorySnap, SOJUSnapMetadata, SOJUSnapchatter, SOJUStoryShare;

@protocol SCChatMessageV3 <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, copy, nonatomic) SCChatSticker *chatSticker;
@property(readonly, copy, nonatomic) NSString *consistentId;
@property(readonly, copy, nonatomic) NSString *conversationId;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData;
@property(readonly, copy, nonatomic) NSString *encryptedId;
@property(readonly, nonatomic) long long groupId;
@property(readonly, copy, nonatomic) SCChatGroupUpdateContent *groupUpdate;
@property(readonly, nonatomic) _Bool isPendingSnap;
@property(readonly, nonatomic) _Bool isSavedToMemories;
@property(readonly, nonatomic) _Bool isScreenRecording;
@property(readonly, nonatomic) _Bool isSnapEnvelopeReleased;
@property(readonly, copy, nonatomic) NSString *iterToken;
@property(readonly, copy, nonatomic) SOJUKhaleesiShare *khaleesiShare;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
@property(readonly, nonatomic) _Bool markedForDeletionByServer;
@property(readonly, copy, nonatomic) SCChatMediaContent *media;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes;
@property(readonly, copy, nonatomic) SCChatMediaSave *mediaSave;
@property(readonly, copy, nonatomic) NSString *mediaSendTaskId;
@property(readonly, copy, nonatomic) NSArray *medias;
@property(readonly, copy, nonatomic) SCChatMessageParcel *messageParcel;
@property(readonly, copy, nonatomic) NSString *messageSender;
@property(readonly, copy, nonatomic) NSDate *messageTimestamp;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
@property(readonly, copy, nonatomic) SOJUNycShare *nycShare;
@property(readonly, copy, nonatomic) SCChatMediaContent *overlayMedia;
@property(readonly, copy, nonatomic) NSDictionary *preserveState;
@property(readonly, copy, nonatomic) NSString *recipientForOneOnOneChat;
@property(readonly, copy, nonatomic) NSDictionary *releaseState;
@property(readonly, copy, nonatomic) NSArray *replyMedias;
@property(readonly, nonatomic) unsigned long long retentionInMinutes;
@property(readonly, copy, nonatomic) NSDictionary *savedState;
@property(readonly, nonatomic) long long screenCaptureSource;
@property(readonly, copy, nonatomic) SOJUSearchShareStorySnap *searchSnapShare;
@property(readonly, copy, nonatomic) SOJUSearchShareStory *searchStoryShare;
@property(readonly, copy, nonatomic) NSDate *sendStartTimestamp;
@property(readonly, nonatomic) long long sendStatus;
@property(readonly, copy, nonatomic) NSDate *sentTimestamp;
@property(readonly, nonatomic) _Bool shouldRetryMediaSendTask;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
@property(readonly, copy, nonatomic) NSString *snapServerId;
@property(readonly, copy, nonatomic) SCSnapState *snapState;
@property(readonly, copy, nonatomic) SOJUSnapchatter *snapchatterShare;
@property(readonly, copy, nonatomic) SOJUStoryShare *storyShare;
@property(readonly, copy, nonatomic) NSString *storyTitle;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSNumber *typeVersion;
@end

