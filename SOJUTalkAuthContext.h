//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUTalkAuthContext-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUTalkAuthContext : NSObject <SOJUTalkAuthContext>
{
    NSString *_conversationId;
    NSString *_scopeId;
    NSString *_mac;
    NSString *_token;
    NSDictionary *_usernameToUserId;
    NSString *_sessionType;
    NSString *_sessionId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationId:(id)arg1 scopeId:(id)arg2 mac:(id)arg3 token:(id)arg4 usernameToUserId:(id)arg5 sessionType:(id)arg6 sessionId:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSDictionary *usernameToUserId; // @synthesize usernameToUserId=_usernameToUserId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
