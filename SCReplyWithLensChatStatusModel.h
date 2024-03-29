//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCReplyWithLensChatStatusModel-Protocol.h"

@class NSString;

@interface SCReplyWithLensChatStatusModel : NSObject <SCReplyWithLensChatStatusModel>
{
    NSString *_senderDisplayName;
    NSString *_snapAuthorUserName;
    NSString *_snapAuthorDisplayName;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)payloadFromStatusModel:(id)arg1;
+ (id)statusModelFromChatMessage:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderDisplayName:(id)arg1 snapAuthorUserName:(id)arg2 snapAuthorDisplayName:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *senderDisplayName; // @synthesize senderDisplayName=_senderDisplayName;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *snapAuthorDisplayName; // @synthesize snapAuthorDisplayName=_snapAuthorDisplayName;
@property(readonly, copy, nonatomic) NSString *snapAuthorUserName; // @synthesize snapAuthorUserName=_snapAuthorUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

