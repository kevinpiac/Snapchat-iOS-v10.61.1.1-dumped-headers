//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UICollectionView;

@interface SCTaggingCarouselContainerView : UIView
{
    CAGradientLayer *_gradientLayer;
    UICollectionView *_carouselCollectionView;
}

+ (id)inputViewGradientBackgroundColorsForOpacityFactor:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *carouselCollectionView; // @synthesize carouselCollectionView=_carouselCollectionView;
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2;
- (void)layoutSubviews;

@end

