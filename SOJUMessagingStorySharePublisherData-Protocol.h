//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUMessagingStorySharePublisherData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSNumber *isUserPopular;
@property(readonly, copy, nonatomic) NSNumber *live;
@property(readonly, copy, nonatomic) NSString *profileDescription;
@property(readonly, copy, nonatomic) NSNumber *publishTimestamp;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end

