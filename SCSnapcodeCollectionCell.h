//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface SCSnapcodeCollectionCell : UICollectionViewCell
{
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)_highlight;
- (id)_imageSelectColor;
- (void)_unhighlight;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadFullScreenImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)showOverlay:(_Bool)arg1;

@end

