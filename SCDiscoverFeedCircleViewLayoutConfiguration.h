//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedCircleViewLayoutConfiguration : NSObject <NSCopying>
{
    double _iconWidthToBoundsWidthRatio;
    double _displayLabelWidthToBoundsWidthRatio;
    double _iconTopMarginToBoundsHeightRatio;
    double _displayLabelTopMarginToBoundsHeightRatio;
    double _displayLabelBottomMarginToBoundsHeightRatio;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double displayLabelBottomMarginToBoundsHeightRatio; // @synthesize displayLabelBottomMarginToBoundsHeightRatio=_displayLabelBottomMarginToBoundsHeightRatio;
@property(readonly, nonatomic) double displayLabelTopMarginToBoundsHeightRatio; // @synthesize displayLabelTopMarginToBoundsHeightRatio=_displayLabelTopMarginToBoundsHeightRatio;
@property(readonly, nonatomic) double displayLabelWidthToBoundsWidthRatio; // @synthesize displayLabelWidthToBoundsWidthRatio=_displayLabelWidthToBoundsWidthRatio;
- (unsigned long long)hash;
@property(readonly, nonatomic) double iconTopMarginToBoundsHeightRatio; // @synthesize iconTopMarginToBoundsHeightRatio=_iconTopMarginToBoundsHeightRatio;
@property(readonly, nonatomic) double iconWidthToBoundsWidthRatio; // @synthesize iconWidthToBoundsWidthRatio=_iconWidthToBoundsWidthRatio;
- (id)initWithIconWidthToBoundsWidthRatio:(double)arg1 displayLabelWidthToBoundsWidthRatio:(double)arg2 iconTopMarginToBoundsHeightRatio:(double)arg3 displayLabelTopMarginToBoundsHeightRatio:(double)arg4 displayLabelBottomMarginToBoundsHeightRatio:(double)arg5;
- (_Bool)isEqual:(id)arg1;

@end

