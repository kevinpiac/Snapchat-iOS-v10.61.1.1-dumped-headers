//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSString, UIColor, UILabel;

@interface SCMapExploreDescriptionView : UIView
{
    UILabel *_descriptionLabel;
    UILabel *_footerLabel;
    CALayer *_topDividerLayer;
    CAShapeLayer *_unviewedDotLayer;
    _Bool _showsUnreadDot;
    UIColor *_footerAndUnreadDotColor;
}

+ (double)heightWithWidth:(double)arg1 descriptionText:(id)arg2 footerText:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *descriptionText;
@property(retain, nonatomic) UIColor *footerAndUnreadDotColor; // @synthesize footerAndUnreadDotColor=_footerAndUnreadDotColor;
@property(copy, nonatomic) NSString *footerText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool showsUnreadDot; // @synthesize showsUnreadDot=_showsUnreadDot;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

