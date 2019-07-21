//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSNumber, NSString, SCContextSnapProInfo;

@interface SCContextUserInfo : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_username;
    NSString *_userId;
    NSString *_displayName;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSNumber *_isPopular;
    NSString *_emoji;
    NSNumber *_hasOfficialBadge;
    SCContextSnapProInfo *_snapProInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) NSNumber *hasOfficialBadge; // @synthesize hasOfficialBadge=_hasOfficialBadge;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(id)arg6 emoji:(id)arg7 hasOfficialBadge:(id)arg8 snapProInfo:(id)arg9;
@property(retain, nonatomic) NSNumber *isPopular; // @synthesize isPopular=_isPopular;
@property(retain, nonatomic) SCContextSnapProInfo *snapProInfo; // @synthesize snapProInfo=_snapProInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

