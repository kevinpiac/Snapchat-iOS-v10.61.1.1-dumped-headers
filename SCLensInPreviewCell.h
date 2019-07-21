//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SCCircularBadgeView, SCLens, SCLoadingIndicatorView, UIImageView, UILabel;

@interface SCLensInPreviewCell : UICollectionViewCell
{
    UIImageView *_iconView;
    UIImageView *_iconOverlayView;
    UIImageView *_selectedOverlayView;
    SCLoadingIndicatorView *_loadingIndicator;
    SCCircularBadgeView *_badgeView;
    NSString *_lensId;
    long long _lensStatus;
    UILabel *_debugText;
    SCLens *_lens;
}

+ (id)lensDarkenedOverlayImage;
+ (id)lensSelectedOverlayImage;
- (void).cxx_destruct;
- (void)_resetCell;
- (void)_updateLensStatusAppearance;
- (id)badgeView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCLens *lens; // @synthesize lens=_lens;
@property(nonatomic) long long lensStatus; // @synthesize lensStatus=_lensStatus;
- (void)prepareForReuse;
- (void)setNewLensesBadgeHidden:(_Bool)arg1;
- (void)updateSelectedAppearance:(_Bool)arg1 faded:(_Bool)arg2 animated:(_Bool)arg3;

@end

