//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCDynamicCaptionTextColor, SCDynamicCaptionTextPadding;

@interface SCDynamicCaptionFontStyle : NSObject <NSCopying, NSCoding>
{
    NSString *_fontName;
    NSString *_fontURL;
    double _fontSize;
    double _minFontSize;
    double _fontBorderWidth;
    SCDynamicCaptionTextColor *_textColor;
    SCDynamicCaptionTextColor *_borderColor;
    long long _textTransform;
    long long _textDecoration;
    long long _textAlignment;
    NSArray *_textShadows;
    SCDynamicCaptionTextPadding *_textPadding;
    double _letterSpacing;
    double _lineHeight;
    NSString *_backgroundImageURL;
    long long _backgroundRepeat;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, nonatomic) long long backgroundRepeat; // @synthesize backgroundRepeat=_backgroundRepeat;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *borderColor; // @synthesize borderColor=_borderColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double fontBorderWidth; // @synthesize fontBorderWidth=_fontBorderWidth;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, copy, nonatomic) NSString *fontURL; // @synthesize fontURL=_fontURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontName:(id)arg1 fontURL:(id)arg2 fontSize:(double)arg3 minFontSize:(double)arg4 fontBorderWidth:(double)arg5 textColor:(id)arg6 borderColor:(id)arg7 textTransform:(long long)arg8 textDecoration:(long long)arg9 textAlignment:(long long)arg10 textShadows:(id)arg11 textPadding:(id)arg12 letterSpacing:(double)arg13 lineHeight:(double)arg14 backgroundImageURL:(id)arg15 backgroundRepeat:(long long)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(readonly, nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(readonly, nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) long long textDecoration; // @synthesize textDecoration=_textDecoration;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextPadding *textPadding; // @synthesize textPadding=_textPadding;
@property(readonly, copy, nonatomic) NSArray *textShadows; // @synthesize textShadows=_textShadows;
@property(readonly, nonatomic) long long textTransform; // @synthesize textTransform=_textTransform;

@end

