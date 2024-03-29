//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCAvatarFallbackNetworkImage, SCNetworkImage, UIImage;

@interface SCBitmojiAvatarViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCNetworkImage *_image_networkImage;
    UIImage *_image_loadingImage;
    SCAvatarFallbackNetworkImage *_image_fallbackNetworkImage;
    _Bool _image_shouldTrimBitmojiToCircle;
    NSAttributedString *_emoji_emoji;
}

+ (id)emojiWithEmoji:(id)arg1;
+ (id)imageWithNetworkImage:(id)arg1 loadingImage:(id)arg2 fallbackNetworkImage:(id)arg3 shouldTrimBitmojiToCircle:(_Bool)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchImage:(CDUnknownBlockType)arg1 emoji:(CDUnknownBlockType)arg2;

@end

