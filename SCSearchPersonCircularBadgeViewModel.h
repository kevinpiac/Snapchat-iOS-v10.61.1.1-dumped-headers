//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface SCSearchPersonCircularBadgeViewModel : NSObject <NSCopying>
{
    double _diameter;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double diameter; // @synthesize diameter=_diameter;
- (unsigned long long)hash;
- (id)initWithDiameter:(double)arg1 color:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

