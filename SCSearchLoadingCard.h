//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCSearchLoadingCellViewModel;

@interface SCSearchLoadingCard : UIView
{
    NSArray *_loadingItemLayers;
    SCSearchLoadingCellViewModel *_viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_resetLoadingItemLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(copy, nonatomic) SCSearchLoadingCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

