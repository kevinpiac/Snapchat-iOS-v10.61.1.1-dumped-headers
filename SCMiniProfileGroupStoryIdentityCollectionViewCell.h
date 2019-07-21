//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class SCGroupStoryDescriptionLabel, SCNetworkImageView, UIImageView, UILabel;
@protocol SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate;

@interface SCMiniProfileGroupStoryIdentityCollectionViewCell : SCMiniProfileCollectionViewCell
{
    SCNetworkImageView *_networkImageView;
    UILabel *_titleLabel;
    SCGroupStoryDescriptionLabel *_subtitleLabel;
    UIImageView *_subtitleIconImageView;
    id <SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate> _delegate;
}

+ (double)height;
+ (id)subtitleFont;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setImageDownloader:(id)arg1 groupStory:(id)arg2;

@end

