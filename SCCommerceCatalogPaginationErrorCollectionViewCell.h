//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, UILabel;
@protocol SCCommerceCatalogPaginationErrorCollectionViewCellDelegate;

@interface SCCommerceCatalogPaginationErrorCollectionViewCell : UICollectionViewCell <SCViewModelConfigurable>
{
    UILabel *_errorTextLabel;
    id _viewModel;
    id <SCCommerceCatalogPaginationErrorCollectionViewCellDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_retryButtonTapped;
- (void)_setup;
- (void)_setupErrorTextLabel;
- (void)_setupRetryButton;
@property(nonatomic) __weak id <SCCommerceCatalogPaginationErrorCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

