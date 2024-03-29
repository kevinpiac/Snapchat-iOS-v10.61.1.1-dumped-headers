//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUCashTransaction <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *amount;
@property(readonly, copy, nonatomic) NSArray *cashTagArray;
@property(readonly, copy, nonatomic) NSString *cashTags;
@property(readonly, copy, nonatomic) NSString *conversationId;
@property(readonly, copy, nonatomic) NSNumber *createdAt;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, copy, nonatomic) NSNumber *invisible;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedAt;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributeArray;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *provider;
@property(readonly, copy, nonatomic) NSNumber *rain;
@property(readonly, copy, nonatomic) NSString *recipientId;
@property(readonly, copy, nonatomic) NSNumber *recipientSaveVersion;
@property(readonly, copy, nonatomic) NSNumber *recipientSaved;
@property(readonly, copy, nonatomic) NSString *recipientUsername;
@property(readonly, copy, nonatomic) NSNumber *recipientViewed;
@property(readonly, copy, nonatomic) NSString *senderId;
@property(readonly, copy, nonatomic) NSNumber *senderSaveVersion;
@property(readonly, copy, nonatomic) NSNumber *senderSaved;
@property(readonly, copy, nonatomic) NSString *senderUsername;
@property(readonly, copy, nonatomic) NSNumber *senderViewed;
@property(readonly, copy, nonatomic) NSNumber *status;
@property(readonly, copy, nonatomic) NSArray *textAttributeArray;
@property(readonly, copy, nonatomic) NSString *transactionId;
@end

