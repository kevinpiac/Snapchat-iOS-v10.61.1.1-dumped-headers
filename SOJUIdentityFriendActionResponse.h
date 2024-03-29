//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityFriendActionResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUFriend;

@interface SOJUIdentityFriendActionResponse : NSObject <SOJUIdentityFriendActionResponse>
{
    SOJUFriend *_object;
    NSArray *_friends;
    NSString *_message;
    NSNumber *_logged;
    NSNumber *_showPrivacySettingPrompt;
    NSDictionary *_extraFriendmojiMutableDict;
    NSDictionary *_extraFriendmojiReadOnlyDict;
    NSArray *_suggestedPublishers;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiMutableDict; // @synthesize extraFriendmojiMutableDict=_extraFriendmojiMutableDict;
@property(readonly, copy, nonatomic) NSDictionary *extraFriendmojiReadOnlyDict; // @synthesize extraFriendmojiReadOnlyDict=_extraFriendmojiReadOnlyDict;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithObject:(id)arg1 friends:(id)arg2 message:(id)arg3 logged:(id)arg4 showPrivacySettingPrompt:(id)arg5 extraFriendmojiMutableDict:(id)arg6 extraFriendmojiReadOnlyDict:(id)arg7 suggestedPublishers:(id)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
- (_Bool)loggedValue;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) SOJUFriend *object; // @synthesize object=_object;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *showPrivacySettingPrompt; // @synthesize showPrivacySettingPrompt=_showPrivacySettingPrompt;
- (_Bool)showPrivacySettingPromptValue;
@property(readonly, copy, nonatomic) NSArray *suggestedPublishers; // @synthesize suggestedPublishers=_suggestedPublishers;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

