//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCShapeView, UIImage, UIImageView;

@interface SCSearchBorderedImageView : UIView
{
    SCShapeView *_backgroundShapeView;
    UIImageView *_imageView;
    double _borderWidth;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 borderColor:(id)arg4;
- (void)layoutSubviews;

@end

