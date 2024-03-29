//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadableItem-Protocol.h"

@class NSNumber, NSString;

@interface SCChatStorySnapDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    NSString *_storySnapId;
    NSString *_conversationId;
    NSString *_messageId;
    NSString *_senderUsername;
    NSNumber *_sequenceNumber;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)initWithStorySnapId:(id)arg1 senderUsername:(id)arg2 sequenceNumber:(id)arg3 conversationId:(id)arg4 messageId:(id)arg5;
- (id)mediaId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, copy, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

