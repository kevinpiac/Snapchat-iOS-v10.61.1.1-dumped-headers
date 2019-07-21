//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

#import "SCMiniProfileOptionViewDelegate-Protocol.h"

@class NSArray;
@protocol SCMiniProfileMultiOptionCollectionViewCellDelegate;

@interface SCMiniProfileMultiOptionCollectionViewCell : SCMiniProfileCollectionViewCell <SCMiniProfileOptionViewDelegate>
{
    NSArray *_optionViews;
    NSArray *_optionViewModels;
    id <SCMiniProfileMultiOptionCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCMiniProfileMultiOptionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectOptionViewWithActionType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *optionViewModels; // @synthesize optionViewModels=_optionViewModels;
- (void)prepareForReuse;

@end

