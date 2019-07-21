//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCUnifiedProfileListCellLayoutAttributes : NSObject <NSCopying>
{
    double _leftIconMarginX;
    double _rightIconMarginX;
    double _listCellHeight;
    double _leftIconLabelPadding;
    struct CGSize _leftIconSize;
    struct CGSize _rightIconSize;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLeftIconSize:(struct CGSize)arg1 leftIconMarginX:(double)arg2 rightIconSize:(struct CGSize)arg3 rightIconMarginX:(double)arg4 listCellHeight:(double)arg5 leftIconLabelPadding:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double leftIconLabelPadding; // @synthesize leftIconLabelPadding=_leftIconLabelPadding;
@property(readonly, nonatomic) double leftIconMarginX; // @synthesize leftIconMarginX=_leftIconMarginX;
@property(readonly, nonatomic) struct CGSize leftIconSize; // @synthesize leftIconSize=_leftIconSize;
@property(readonly, nonatomic) double listCellHeight; // @synthesize listCellHeight=_listCellHeight;
@property(readonly, nonatomic) double rightIconMarginX; // @synthesize rightIconMarginX=_rightIconMarginX;
@property(readonly, nonatomic) struct CGSize rightIconSize; // @synthesize rightIconSize=_rightIconSize;

@end
