//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCChatStickerFavoritesDelegate;

@interface SCChatStickerFavoritesGenerator : NSObject
{
    id <SCChatStickerFavoritesDelegate> _delegate;
}

- (void).cxx_destruct;
- (struct NSDictionary *)_allAvailableCustomStickers:(struct NSDictionary *)arg1 customStickerManager:(id)arg2;
- (id)_generateFavoriteStickersWithHistory:(struct NSDictionary *)arg1 validPacksIds:(id)arg2 includeFriendBitmojis:(_Bool)arg3 customStickerManager:(id)arg4;
- (long long)_maxUsageCountInStickerUsageArray:(id)arg1;
- (id)_sortedFavoriteStickersWithHistory:(struct NSDictionary *)arg1 maxNumOfStickers:(long long)arg2 excludedStickers:(id)arg3 forDay:(long long)arg4 validPacksIds:(id)arg5 includeFriendBitmojis:(_Bool)arg6 includeCustomSticker:(_Bool)arg7;
- (id)generateFavoriteStickersWithValidPacksIds:(id)arg1 includeFriendBitmojis:(_Bool)arg2 customStickerManager:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

