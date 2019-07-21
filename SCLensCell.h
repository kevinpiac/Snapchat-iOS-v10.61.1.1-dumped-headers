//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensCellDebugView, SCLoadingIndicatorView, UIImageView, UIView;

@interface SCLensCell : UICollectionViewCell <SCTraceEnabled>
{
    SCLensCellDebugView *_cellDebugView;
    long long _contentAccessibilityIndex;
    NSString *_contentAccessibilityIdentifier;
    UIView *_containerView;
    UIImageView *_lensIcon;
    long long _lensStatus;
    UIImageView *_overlayImage;
    UIView *_blueDotView;
    UIView *_rankingDebugDotView;
    SCLoadingIndicatorView *_progressIndicator;
}

- (void).cxx_destruct;
- (void)_updateAccessibilityIdentifier;
@property(retain, nonatomic) UIView *blueDotView; // @synthesize blueDotView=_blueDotView;
@property(readonly, nonatomic) SCLensCellDebugView *cellDebugView;
- (void)configureQALabelsWithLens:(id)arg1;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)fillViewWithLensIcon:(id)arg1 status:(long long)arg2;
- (struct CGRect)getSquareFromSourceRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *lensIcon; // @synthesize lensIcon=_lensIcon;
@property(nonatomic) long long lensStatus; // @synthesize lensStatus=_lensStatus;
@property(retain, nonatomic) UIImageView *overlayImage; // @synthesize overlayImage=_overlayImage;
- (void)prepareForReuse;
@property(retain, nonatomic) SCLoadingIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UIView *rankingDebugDotView; // @synthesize rankingDebugDotView=_rankingDebugDotView;
- (void)setAccessibilityContentId:(id)arg1 index:(long long)arg2;
- (void)setIconTransform:(struct CGAffineTransform)arg1;
- (void)setNewLensBadgeHidden:(_Bool)arg1;
- (void)setRankingDebugBadgeHidden:(_Bool)arg1;
- (void)setSelectionTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)subviewRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
