//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStorySnapShareOperaContent-Protocol.h"

@class NSDate, NSString, SCChatMediaContentMetadata, SCStorySnapMediaContent;

@interface SCChatMapSnapOperaContent : NSObject <SCChatStorySnapShareOperaContent>
{
    NSString *_conversationId;
    SCStorySnapMediaContent *_media;
    SCChatMediaContentMetadata *_mediaMetadata;
    NSString *_messageId;
    NSString *_messageSender;
    NSDate *_messageTimestamp;
    long long _messageType;
    NSString *_storySnapId;
    NSString *_pointOfInterestId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 storySnapId:(id)arg3 pointOfInterestId:(id)arg4 media:(id)arg5 mediaMetadata:(id)arg6 messageType:(long long)arg7 messageSender:(id)arg8 messageTimestamp:(id)arg9;
- (void)invalidateContent;
- (_Bool)isContentLoadedInCache;
- (_Bool)isContentUnarchived;
- (_Bool)isLoadStateFailed;
- (void)loadContent;
@property(readonly, nonatomic) SCStorySnapMediaContent *media; // @synthesize media=_media;
@property(readonly, nonatomic) SCChatMediaContentMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
- (long long)mediaType;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, copy, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) NSString *operaPageId;
@property(readonly, nonatomic) NSString *pointOfInterestId; // @synthesize pointOfInterestId=_pointOfInterestId;
@property(readonly, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
- (void)unarchiveContentWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

