//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSSet, SCCognacMessageParsingData;

@interface SCChatUIBatchMessageParsingData : NSObject <NSCopying>
{
    NSSet *_messagesBelowTheFold;
    NSSet *_messagesWithDateHeaders;
    NSSet *_messagesWithTimestamps;
    NSDictionary *_messageCornerMasks;
    NSDictionary *_messageHeaderIdentifierMap;
    SCCognacMessageParsingData *_cognacMessageParsingData;
    NSDictionary *_messageGroupMaps;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCCognacMessageParsingData *cognacMessageParsingData; // @synthesize cognacMessageParsingData=_cognacMessageParsingData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithMessagesBelowTheFold:(id)arg1 messagesWithDateHeaders:(id)arg2 messagesWithTimestamps:(id)arg3 messageCornerMasks:(id)arg4 messageHeaderIdentifierMap:(id)arg5 cognacMessageParsingData:(id)arg6 messageGroupMaps:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *messageCornerMasks; // @synthesize messageCornerMasks=_messageCornerMasks;
@property(readonly, copy, nonatomic) NSDictionary *messageGroupMaps; // @synthesize messageGroupMaps=_messageGroupMaps;
@property(readonly, copy, nonatomic) NSDictionary *messageHeaderIdentifierMap; // @synthesize messageHeaderIdentifierMap=_messageHeaderIdentifierMap;
@property(readonly, copy, nonatomic) NSSet *messagesBelowTheFold; // @synthesize messagesBelowTheFold=_messagesBelowTheFold;
@property(readonly, copy, nonatomic) NSSet *messagesWithDateHeaders; // @synthesize messagesWithDateHeaders=_messagesWithDateHeaders;
@property(readonly, copy, nonatomic) NSSet *messagesWithTimestamps; // @synthesize messagesWithTimestamps=_messagesWithTimestamps;

@end

