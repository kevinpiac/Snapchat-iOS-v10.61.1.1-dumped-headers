//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCChatNotificationTracker : NSObject
{
    NSMutableDictionary *_chatNotificationItemCache;
    NSString *_userName;
    SCQueuePerformer *_queuePerformer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addEntry:(id)arg1 fromPush:(_Bool)arg2;
- (id)init;
- (void)receivedChatMessage:(id)arg1;
- (void)receivedChatNotification:(id)arg1;
- (void)receivedSojuMessage:(id)arg1;
- (void)removeOldRecords;
- (void)reportFromLaunch:(_Bool)arg1;
- (void)setUsername:(id)arg1;
- (_Bool)shouldTrack;

@end
