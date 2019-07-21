//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIImage;

@protocol SCChatMediaCardViewModel <NSObject>
- (UIImage *)accessoryIcon;
- (NSString *)actionText;
- (NSAttributedString *)attributedSubtitle;
- (NSAttributedString *)attributedTitle;
- (UIImage *)defaultThumbnailImage;
@property(readonly, nonatomic) _Bool disableV2ContextMenu;
- (_Bool)isCircularThumbnail;
@property(readonly, nonatomic) _Bool isGrayScale;
@property(readonly, nonatomic) _Bool shouldActOnGesture;
@property(readonly, nonatomic) _Bool shouldShowDefaultThumbnail;
@property(readonly, nonatomic) _Bool shouldUseV3Cache;
@property(readonly, copy, nonatomic) NSString *thumbnailCacheId;
@property(readonly, nonatomic) UIImage *thumbnailImage;
- (NSString *)trackingId;
- (long long)type;
@end

