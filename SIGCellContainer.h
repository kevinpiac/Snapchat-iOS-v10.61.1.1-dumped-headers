//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGCell;

@interface SIGCellContainer : UIView
{
    UIView *_border;
    UIView *_background;
    unsigned long long _groupingStyle;
    unsigned long long _positionStyle;
    SIGCell *_underlyingCell;
}

+ (double)heightForContainerWithCellStyle:(unsigned long long)arg1 inPosition:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long groupingStyle; // @synthesize groupingStyle=_groupingStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long positionStyle; // @synthesize positionStyle=_positionStyle;
@property(readonly, nonatomic) SIGCell *underlyingCell; // @synthesize underlyingCell=_underlyingCell;

@end

