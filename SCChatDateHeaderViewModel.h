//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIFont;

@interface SCChatDateHeaderViewModel : NSObject <NSCopying>
{
    UIFont *_font;
    double _height;
    NSString *_timestampText;
    double _kerning;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
- (unsigned long long)hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)initWithFont:(id)arg1 height:(double)arg2 margins:(struct UIEdgeInsets)arg3 timestampText:(id)arg4 kerning:(double)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(readonly, nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(readonly, copy, nonatomic) NSString *timestampText; // @synthesize timestampText=_timestampText;

@end

