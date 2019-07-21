//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableActionAddFriend-Protocol.h"

@class NSNumber, NSString;

@interface SOJUScannableActionAddFriend : NSObject <SOJUScannableActionAddFriend>
{
    NSString *_username;
    NSString *_displayName;
    NSString *_userEmoji;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiSnapcodeSelfieId;
    NSNumber *_isPopular;
    NSString *_displayUsername;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 userEmoji:(id)arg3 userId:(id)arg4 bitmojiAvatarId:(id)arg5 bitmojiSelfieId:(id)arg6 bitmojiSnapcodeSelfieId:(id)arg7 isPopular:(id)arg8 displayUsername:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isPopular; // @synthesize isPopular=_isPopular;
- (_Bool)isPopularValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *userEmoji; // @synthesize userEmoji=_userEmoji;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

