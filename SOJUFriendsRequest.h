//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendsRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUFriendsRequest : NSObject <SOJUFriendsRequest>
{
    NSString *_friendsSyncToken;
    NSNumber *_requestTokenOnly;
    NSString *_addedFriendsSyncToken;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncToken; // @synthesize addedFriendsSyncToken=_addedFriendsSyncToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken; // @synthesize friendsSyncToken=_friendsSyncToken;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriendsSyncToken:(id)arg1 requestTokenOnly:(id)arg2 addedFriendsSyncToken:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *requestTokenOnly; // @synthesize requestTokenOnly=_requestTokenOnly;
- (_Bool)requestTokenOnlyValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
