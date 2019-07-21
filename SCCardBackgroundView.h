//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, UIImageView;

@interface SCCardBackgroundView : UIView
{
    unsigned long long _shadowEdges;
    double _cornerRadius;
    unsigned long long _corners;
    UIColor *_backgroundFillColor;
    UIImageView *_topShadowImageView;
    UIImageView *_leftShadowImageView;
    UIImageView *_rightShadowImageView;
    struct CGSize _previousBoundsSize;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *leftShadowImageView; // @synthesize leftShadowImageView=_leftShadowImageView;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) UIImageView *rightShadowImageView; // @synthesize rightShadowImageView=_rightShadowImageView;
@property(nonatomic) unsigned long long shadowEdges; // @synthesize shadowEdges=_shadowEdges;
@property(retain, nonatomic) UIImageView *topShadowImageView; // @synthesize topShadowImageView=_topShadowImageView;
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;

@end
