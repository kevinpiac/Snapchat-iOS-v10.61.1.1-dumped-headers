//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UICollectionView, UIView;

@protocol SCSearchTransitioning <NSObject>
@property(readonly, nonatomic) UIView *containerView;
@property(nonatomic) double contentViewAlpha;
@property(readonly, nonatomic) UICollectionView *searchTransitionCollectionView;
- (UIView *)transitionSectionHeaderForSection:(long long)arg1;
@end

