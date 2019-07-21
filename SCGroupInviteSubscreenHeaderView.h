//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCGradientView, UIButton, UILabel;
@protocol SCGroupInviteSubscreenHeaderViewDelegate;

@interface SCGroupInviteSubscreenHeaderView : UIView
{
    UILabel *_headerLabel;
    UIButton *_dismissArrow;
    SCGradientView *_bottomGradient;
    _Bool _respectsTopOfScreenSafeAreaInsets;
    id <SCGroupInviteSubscreenHeaderViewDelegate> _delegate;
    double _bottomShadowAlpha;
}

- (void).cxx_destruct;
- (void)_dismissButtonPressed:(id)arg1;
- (double)_itemsVerticalSpacing;
@property(nonatomic) double bottomShadowAlpha; // @synthesize bottomShadowAlpha=_bottomShadowAlpha;
@property(nonatomic) __weak id <SCGroupInviteSubscreenHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool respectsTopOfScreenSafeAreaInsets; // @synthesize respectsTopOfScreenSafeAreaInsets=_respectsTopOfScreenSafeAreaInsets;
- (void)setBottomShadowAlphaBasedOnScrollOffset:(double)arg1;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end
