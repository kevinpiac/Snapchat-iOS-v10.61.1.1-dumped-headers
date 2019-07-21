//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCQueuePerformer, UIImage, UIImageView;

@interface SCAsyncAssetImageView : UIView
{
    UIImageView *_imageView;
    SCQueuePerformer *_performer;
    NSString *_imageName;
}

- (void).cxx_destruct;
- (void)_handleLoadedImage:(id)arg1 imageName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadImageWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long contentMode;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageName:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
