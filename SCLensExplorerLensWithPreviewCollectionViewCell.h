//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensExplorerBaseLensCollectionViewCell.h"

@class SCNetworkImageView, UIImageView;

@interface SCLensExplorerLensWithPreviewCollectionViewCell : SCLensExplorerBaseLensCollectionViewCell
{
    SCNetworkImageView *_previewImageView;
    UIImageView *_animatedImageView;
}

- (void).cxx_destruct;
- (void)_playAnimation;
- (void)_prepareAnimatedImageView;
- (void)_preparePreviewImageView;
- (void)_stopAnimation;
- (struct CGRect)iconViewFrame;
- (void)setViewModel:(id)arg1;

@end

