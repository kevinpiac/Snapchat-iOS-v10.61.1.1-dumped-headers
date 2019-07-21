//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiFetchSelfieRequest-Protocol.h"

@class NSNumber, NSString;

@interface SCBitmojiFetchSelfieRequest : NSObject <SCBitmojiFetchSelfieRequest>
{
    _Bool _willAcceptPriorAvatarVersion;
    NSString *_userId;
    NSString *_avatarId;
    NSString *_dratiniId;
    NSNumber *_scale;
    unsigned long long _modifier;
    unsigned long long _type;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *dratiniId; // @synthesize dratiniId=_dratiniId;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserId:(id)arg1 avatarId:(id)arg2 dratiniId:(id)arg3 scale:(id)arg4 modifier:(unsigned long long)arg5 type:(unsigned long long)arg6 willAcceptPriorAvatarVersion:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long modifier; // @synthesize modifier=_modifier;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) _Bool willAcceptPriorAvatarVersion; // @synthesize willAcceptPriorAvatarVersion=_willAcceptPriorAvatarVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

