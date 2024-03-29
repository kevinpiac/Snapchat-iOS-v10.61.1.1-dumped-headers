//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCSnapcodeTabBarItem, UIColor, UILabel;

@interface SCSnapcodeTabBarItemCell : UICollectionViewCell
{
    UILabel *_label1;
    UILabel *_label2;
    SCSnapcodeTabBarItem *_item;
    double _highlightLevel;
}

+ (double)minimumWidthForItem:(id)arg1;
- (void).cxx_destruct;
- (id)_newLabel;
@property(nonatomic) double highlightLevel; // @synthesize highlightLevel=_highlightLevel;
@property(retain, nonatomic) UIColor *highlightedStateColor;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCSnapcodeTabBarItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIColor *normalStateColor;

@end

