//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCGradientView, SCUnifiedProfileCharmsCardViewCell, UILabel, UIScrollView;

@interface SCUnifiedProfileCharmsCardViewCellDescriptionView : UIView <UIScrollViewDelegate>
{
    UILabel *_description;
    UIScrollView *_descriptionScrollView;
    SCGradientView *_topGradient;
    SCGradientView *_bottomGradient;
    double _contentOffsetYRatio;
    SCUnifiedProfileCharmsCardViewCell *_cell;
}

- (void).cxx_destruct;
- (void)_resetGradientView;
@property(nonatomic) __weak SCUnifiedProfileCharmsCardViewCell *cell; // @synthesize cell=_cell;
- (struct CGSize)descriptionSizeWithHeightLimit:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

