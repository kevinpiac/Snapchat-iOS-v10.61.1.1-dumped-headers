//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCConversationSticker, SCConversationStickerUsageHistory;

@interface SCConversationStickerUsageHistoryBySticker : NSObject <NSCopying>
{
    SCConversationSticker *_sticker;
    SCConversationStickerUsageHistory *_usageHistory;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSticker:(id)arg1 usageHistory:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCConversationSticker *sticker; // @synthesize sticker=_sticker;
@property(readonly, copy, nonatomic) SCConversationStickerUsageHistory *usageHistory; // @synthesize usageHistory=_usageHistory;

@end
