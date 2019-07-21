//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol SCDiscoverFeedAccessoryLoadingViewDelegate;

@interface SCDiscoverFeedAccessoryLoadingView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id <SCDiscoverFeedAccessoryLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_swipeGestureUp:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (double)contentWidth;
@property(nonatomic) __weak id <SCDiscoverFeedAccessoryLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)layoutSubviews;

@end
