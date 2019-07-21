//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIColor, UIFont;

@interface SCSponsoredSlug : NSObject <NSObject, NSCoding, NSCopying>
{
    UIFont *_font;
    double _fontSize;
    UIColor *_textColor;
    UIColor *_dropshadowColor;
    NSString *_text;
    NSString *_longformText;
    NSNumber *_timeBeforeFadeout;
    NSNumber *_longformTimeBeforeFadeout;
    NSNumber *_hmargin;
    NSNumber *_vmargin;
    long long _position;
    NSString *_sponsoredText;
    NSString *_sponsoredChannelText;
    struct CGSize _dropshadowOffset;
}

+ (id)adSlugDefaultValues;
+ (id)defaultValues;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didDecodeObject;
@property(readonly, nonatomic) UIColor *dropshadowColor; // @synthesize dropshadowColor=_dropshadowColor;
@property(readonly, nonatomic) struct CGSize dropshadowOffset; // @synthesize dropshadowOffset=_dropshadowOffset;
- (void)encodeWithCoder:(id)arg1;
- (void)fc_setNilValueForKey:(id)arg1;
- (void)fc_setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hmargin; // @synthesize hmargin=_hmargin;
- (id)init;
- (id)initAdSlug;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *longformText; // @synthesize longformText=_longformText;
@property(readonly, nonatomic) NSNumber *longformTimeBeforeFadeout; // @synthesize longformTimeBeforeFadeout=_longformTimeBeforeFadeout;
- (id)overrideWithSlug:(id)arg1;
- (id)overrideWithText:(id)arg1;
- (void)parseParameters:(id)arg1;
- (void)parseStyle:(id)arg1;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *sponsoredChannelText; // @synthesize sponsoredChannelText=_sponsoredChannelText;
@property(readonly, copy, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) NSNumber *timeBeforeFadeout; // @synthesize timeBeforeFadeout=_timeBeforeFadeout;
@property(readonly, nonatomic) NSNumber *vmargin; // @synthesize vmargin=_vmargin;
- (void)willEncodeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

