//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCLensExplorerContentProtocol-Protocol.h"

@class CAGradientLayer, FBKVOController, NSString, SCLensExplorerContentViewConfiguration, SCLensExplorerRoundedView, SCLoadingIndicatorView, UICollectionView, UICollectionViewLayout;

@interface SCLensExplorerContentView : UIView <SCLensExplorerContentProtocol>
{
    SCLoadingIndicatorView *_loadingIndicator;
    SCLensExplorerRoundedView *_backgroundRoundedView;
    CAGradientLayer *_gradientLayer;
    FBKVOController *_kvoController;
    UICollectionViewLayout *_collectionViewLayout;
    SCLensExplorerContentViewConfiguration *_configuration;
    UICollectionView *_collectionView;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
- (void)_handleScrollWithOffset:(struct CGPoint)arg1;
- (void)_prepareCollectionView;
- (void)_prepareGradientView;
- (void)_prepareLoadingIndicator;
- (void)_prepareRoundedContainerView;
- (void)_subscribe;
@property(readonly, nonatomic) UIView *backgroundRoundedView; // @synthesize backgroundRoundedView=_backgroundRoundedView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)dealloc;
- (void)hideLoadingIndicator;
- (id)initWithFrame:(struct CGRect)arg1 contentInsets:(struct UIEdgeInsets)arg2 collectionViewLayout:(id)arg3 configuration:(id)arg4;
- (void)showLoadingIndicator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

