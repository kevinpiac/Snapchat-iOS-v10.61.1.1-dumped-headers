//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface SCProductLeftRightTableViewCell : UITableViewCell
{
    UILabel *_optionTitleLabel;
    UILabel *_optionValueLabel;
    NSString *_titleText;
    NSString *_valueText;
    unsigned long long _valueLabelStyle;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) unsigned long long valueLabelStyle; // @synthesize valueLabelStyle=_valueLabelStyle;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;

@end
