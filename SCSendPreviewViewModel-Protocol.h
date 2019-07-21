//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;
@protocol SCSendPreviewMediaView;

@protocol SCSendPreviewViewModel <NSObject>
- (UIView<SCSendPreviewMediaView> *)mediaView;
- (long long)shareType;
- (long long)viewStyle;

@optional
- (NSString *)chatMessage;
- (double)mediaViewAspectRatio;
- (void)setPreviewBlobImage:(UIImage *)arg1;
- (_Bool)shouldPadMediaView;
- (NSString *)subtitle;
- (NSString *)title;
@end

