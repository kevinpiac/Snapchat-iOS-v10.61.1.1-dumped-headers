//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBitmojiImageParams, SCProductBitmojiSelectorViewController, UIImage;

@protocol SCProductBitmojiSelectorDelegate <NSObject>
- (void)bitmojiSelectorVC:(SCProductBitmojiSelectorViewController *)arg1 didSelectBitmojiImage:(UIImage *)arg2 params:(SCBitmojiImageParams *)arg3;
- (void)dismissBitmojiSelectorVC:(SCProductBitmojiSelectorViewController *)arg1;
@end

