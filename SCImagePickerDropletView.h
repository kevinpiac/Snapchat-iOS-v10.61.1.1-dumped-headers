//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDrawingDropletView.h"

@class UIActivityIndicatorView, UIImage, UIImageView;

@interface SCImagePickerDropletView : SCDrawingDropletView
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_spinnerView;
    struct CGSize _previousBoundsSize;
    UIImage *_image;
}

+ (id)closedPath;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setCurrentPath:(id)arg1;

@end
