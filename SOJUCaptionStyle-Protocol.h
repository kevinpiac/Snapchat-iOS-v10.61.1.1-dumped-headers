//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCaptionShadow;

@protocol SOJUCaptionStyle <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *backgroundColor;
@property(readonly, copy, nonatomic) NSNumber *backgroundCornerRadius;
@property(readonly, copy, nonatomic) NSString *backgroundImageUrl;
@property(readonly, copy, nonatomic) NSString *boldTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *borderWidth;
@property(readonly, copy, nonatomic) NSString *caps;
@property(readonly, copy, nonatomic) NSNumber *colorChangeable;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSArray *effect;
@property(readonly, copy, nonatomic) NSArray *fontColor;
@property(readonly, copy, nonatomic) NSString *fontColorMode;
@property(readonly, copy, nonatomic) NSString *fontFamilyName;
@property(readonly, copy, nonatomic) NSString *fontName;
@property(readonly, copy, nonatomic) NSString *fontPatternImageUrl;
@property(readonly, copy, nonatomic) NSString *italicsBoldTypefaceUrl;
@property(readonly, copy, nonatomic) NSString *italicsTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *kerning;
@property(readonly, copy, nonatomic) NSNumber *leading;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *regularTypefaceUrl;
@property(readonly, copy, nonatomic) NSNumber *rotation;
@property(readonly, copy, nonatomic) SOJUCaptionShadow *shadow;
@property(readonly, copy, nonatomic) NSArray *styleProperty;
@end

