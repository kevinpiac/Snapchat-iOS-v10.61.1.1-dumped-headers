//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, UIImageView, UILabel;

@interface SCActionMenuTableViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_label;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (void)animateIcon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLoading:(_Bool)arg1;
- (void)setMenuItem:(id)arg1;

@end

