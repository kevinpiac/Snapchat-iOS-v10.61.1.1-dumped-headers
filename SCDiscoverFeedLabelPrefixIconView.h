//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedLabelPrefixIconViewModel, UIImageView, UILabel;

@interface SCDiscoverFeedLabelPrefixIconView : UIView
{
    UIImageView *_prefixIconImageView;
    UILabel *_prefixIconEmojiLabel;
    SCDiscoverFeedLabelPrefixIconViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCDiscoverFeedLabelPrefixIconViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

