//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLensExplorerLensItemCreator : NSObject <NSCopying, NSCoding>
{
    _Bool _officialLensCreator;
    _Bool _isUserSubscribedForCreator;
    _Bool _snapProIsDeactivated;
    NSString *_userName;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiAvatarSelfieId;
    NSString *_snapProIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserName:(id)arg1 userId:(id)arg2 bitmojiAvatarId:(id)arg3 bitmojiAvatarSelfieId:(id)arg4 officialLensCreator:(_Bool)arg5 isUserSubscribedForCreator:(_Bool)arg6 snapProIdentifier:(id)arg7 snapProIsDeactivated:(_Bool)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isUserSubscribedForCreator; // @synthesize isUserSubscribedForCreator=_isUserSubscribedForCreator;
@property(readonly, nonatomic) _Bool officialLensCreator; // @synthesize officialLensCreator=_officialLensCreator;
@property(readonly, copy, nonatomic) NSString *snapProIdentifier; // @synthesize snapProIdentifier=_snapProIdentifier;
@property(readonly, nonatomic) _Bool snapProIsDeactivated; // @synthesize snapProIsDeactivated=_snapProIsDeactivated;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

