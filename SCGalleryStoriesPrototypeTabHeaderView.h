//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class SCLoadingIndicatorView, UIImageView, UILabel, UIView;
@protocol SCGalleryStoriesPrototypeTabHeaderViewDelegate;

@interface SCGalleryStoriesPrototypeTabHeaderView : UICollectionReusableView
{
    UILabel *_label;
    UIView *_tweaksButton;
    UIImageView *_doneIcon;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCGalleryStoriesPrototypeTabHeaderViewDelegate> _delegate;
}

+ (double)headerHeight;
- (void).cxx_destruct;
- (void)_didTapTweaks:(id)arg1;
@property(nonatomic) __weak id <SCGalleryStoriesPrototypeTabHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateInProgress:(_Bool)arg1 count:(unsigned long long)arg2;

@end

