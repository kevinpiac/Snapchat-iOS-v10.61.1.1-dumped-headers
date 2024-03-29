//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedCall, SCFriendsFeedChatMessage, SCFriendsFeedMediaSaveMessage, SCFriendsFeedMultiRecipientContent, SCFriendsFeedSavedSnapMessage, SCFriendsFeedScreenshotMessage, SCFriendsFeedSnapMessage;

@interface SCFriendsFeedMessageContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedSnapMessage *_snap_snap;
    SCFriendsFeedCall *_call_callContent;
    SCFriendsFeedScreenshotMessage *_screenshot_screenshot;
    SCFriendsFeedMediaSaveMessage *_mediaSave_mediaSave;
    SCFriendsFeedChatMessage *_chat_chat;
    SCFriendsFeedMultiRecipientContent *_multiRecipient_multiRecipientContent;
    SCFriendsFeedSavedSnapMessage *_savedSnap_savedSnap;
}

+ (id)callWithCallContent:(id)arg1;
+ (id)chatWithChat:(id)arg1;
+ (id)mediaSaveWithMediaSave:(id)arg1;
+ (id)multiRecipientWithMultiRecipientContent:(id)arg1;
+ (id)savedSnapWithSavedSnap:(id)arg1;
+ (id)screenshotWithScreenshot:(id)arg1;
+ (id)snapWithSnap:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSnap:(CDUnknownBlockType)arg1 call:(CDUnknownBlockType)arg2 screenshot:(CDUnknownBlockType)arg3 mediaSave:(CDUnknownBlockType)arg4 chat:(CDUnknownBlockType)arg5 multiRecipient:(CDUnknownBlockType)arg6 savedSnap:(CDUnknownBlockType)arg7;

@end

