//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUIdentityMischiefParticipant <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *color;
@property(readonly, copy, nonatomic) NSString *colorHex;
@property(readonly, copy, nonatomic) NSString *display;
@property(readonly, copy, nonatomic) NSNumber *joinTimestamp;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSNumber *videoChatUserId;
@end

