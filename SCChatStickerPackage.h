//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SOJUStickerPack, SOJUStickerPackMetadata;

@interface SCChatStickerPackage : NSObject
{
    NSString *_normalIconName;
    NSString *_highlightedIconName;
    SOJUStickerPackMetadata *_metadata;
    NSArray *_stickers;
    long long _type;
    SOJUStickerPack *_stickerPack;
    long long _priority;
}

- (void).cxx_destruct;
- (void)_fetchIconForStickerPack:(id)arg1 target:(long long)arg2 highlighted:(_Bool)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_generateStickersWithMetadata:(id)arg1;
- (void)_generateStickersWithMetadata:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 exclusiveSoloOrFriend:(_Bool)arg4;
- (void)_generateStickersWithMetadata:(id)arg1 friendAvatarId:(id)arg2;
- (id)categoryId;
- (id)chatStickerPackWithBitmojiAvatarId:(id)arg1 friendAvatarId:(id)arg2 exclusiveSoloOrFriend:(_Bool)arg3;
- (void)fetchFavoriteStickers:(id)arg1 chatStickerManager:(id)arg2 bitmojiStickerManager:(id)arg3 customStickerManager:(id)arg4 friendAvatarId:(id)arg5 experimentManager:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)fetchHighlightedIconForTarget:(long long)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchNormalIconForTarget:(long long)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchSearchedStickers:(id)arg1 bitmojiStickerManager:(id)arg2 friendAvatarId:(id)arg3;
- (id)initWithStickerPack:(id)arg1 metadata:(id)arg2;
- (id)initWithStickerPackMetadata:(id)arg1 friendAvatarId:(id)arg2 bitmojiStickerManager:(id)arg3;
- (id)initWithType:(long long)arg1;
@property(readonly, nonatomic) _Bool isBitmoji;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isHometab;
@property(readonly, nonatomic) _Bool isSnapart;
- (id)packId;
- (id)packType;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SOJUStickerPack *stickerPack; // @synthesize stickerPack=_stickerPack;
- (id)target;
- (id)url;

@end

