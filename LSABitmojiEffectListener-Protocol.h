//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LSABitmojiEffectListener <NSObject>
- (void)didRequestBitmojiAvatarId;
- (void)didRequestBitmojiInfo;
- (void)didRequestBitmojiWithId:(NSString *)arg1 avatarId:(NSString *)arg2 friendAvatarId:(NSString *)arg3 stickerType:(int)arg4 scale:(long long)arg5;
- (void)didRequestBitmojiWithId:(NSString *)arg1 avatarId:(NSString *)arg2 stickerType:(int)arg3 scale:(long long)arg4;
- (void)didRequestBitmojiWithId:(NSString *)arg1 stickerType:(int)arg2 scale:(long long)arg3;
- (void)didRequestMegapack:(NSString *)arg1;
@end

