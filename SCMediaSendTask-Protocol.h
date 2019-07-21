//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, SCQueuePerformer;
@protocol SCMediaSendTaskDelegate;

@protocol SCMediaSendTask <NSObject, NSCoding>
- (void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1;
- (void)clearInvalidRecipients;
@property(nonatomic) __weak id <SCMediaSendTaskDelegate> delegate;
- (void)didFailToSend;
@property(readonly, copy, nonatomic) NSString *feedId;
- (void)finishDecodingWithPerformer:(SCQueuePerformer *)arg1;
- (NSArray *)groups;
- (NSString *)invalidRecipientsNameString;
- (_Bool)isRecipientSingleGroupOrUser;
- (_Bool)isSendingOneOnOneSnap;
- (_Bool)isValid;
- (NSString *)multiSnapBundleId;
- (void)prepareToBeRemoved;
- (void)sendWithCompletionHandler:(void (^)(_Bool, NSError *))arg1 context:(NSString *)arg2;
- (void)sendWithCompletionHandler:(void (^)(_Bool, NSError *))arg1 isAutoRetry:(_Bool)arg2 context:(NSString *)arg3;
- (NSString *)singleGroupId;
@property(readonly, copy, nonatomic) NSString *taskId;
@property(readonly, nonatomic) long long taskState;
- (void)updateFeedId;
@end

