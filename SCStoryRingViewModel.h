//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor, UIImage;

@interface SCStoryRingViewModel : NSObject <NSCopying>
{
    double _borderWidth;
    double _borderInnerPadding;
    UIColor *_borderColor;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) double borderInnerPadding; // @synthesize borderInnerPadding=_borderInnerPadding;
@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (id)initWithBorderWidth:(double)arg1 borderInnerPadding:(double)arg2 borderColor:(id)arg3 iconImage:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end

