//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCChatNotificationTrackingItem : NSObject
{
    _Bool _receivedPush;
    _Bool _receivedChat;
    _Bool _reported;
    NSDate *_createTime;
    NSString *_messageId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
- (id)initWithMessageId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property _Bool receivedChat; // @synthesize receivedChat=_receivedChat;
@property _Bool receivedPush; // @synthesize receivedPush=_receivedPush;
@property _Bool reported; // @synthesize reported=_reported;

@end

