//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer;

@interface SCStickerPillRainbowView : UIView
{
    CAGradientLayer *_gradientLayer;
    CALayer *_borderMask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *borderMask; // @synthesize borderMask=_borderMask;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;

@end

