//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber;

@protocol SOJUChatConversationMessageUpdates <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *eraseMessages;
@property(readonly, copy, nonatomic) NSNumber *hasMore;
@property(readonly, copy, nonatomic) NSArray *messageUpdatesDeprecated;
@property(readonly, copy, nonatomic) NSArray *preservationMessages;
@property(readonly, copy, nonatomic) NSArray *stateMessages;
@end
