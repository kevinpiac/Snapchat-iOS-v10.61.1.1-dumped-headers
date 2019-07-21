//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SCRoundedCornersView : UIView
{
    CAShapeLayer *_maskLayer;
    unsigned long long _corners;
    double _radius;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
- (id)initWithFrame:(struct CGRect)arg1 roundedCorners:(unsigned long long)arg2 radius:(double)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)setRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)updateMaskLayer;

@end

