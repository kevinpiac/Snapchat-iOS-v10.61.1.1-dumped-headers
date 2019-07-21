//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface SCDynamicLayoutThemeConfiguration : NSObject <NSCopying>
{
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    long long _statusBarStyle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (unsigned long long)hash;
- (id)initWithForegroundColor:(id)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3 statusBarStyle:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;

@end
