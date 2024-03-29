//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFilterView.h"

@class SCCAEAGLView, UIImageView;

@interface SCMediaFilterView : SCFilterView
{
    UIImageView *_imageView;
    SCCAEAGLView *_videoView;
}

+ (id)videoFilterViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (void)processImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requiresGPU;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) SCCAEAGLView *videoView; // @synthesize videoView=_videoView;

@end

