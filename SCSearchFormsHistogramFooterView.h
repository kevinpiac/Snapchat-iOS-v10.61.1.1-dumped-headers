//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCSearchFormsHistogramFooterViewModel, UIImageView, UILabel;

@interface SCSearchFormsHistogramFooterView : UITableViewHeaderFooterView <SCViewModelConfigurable>
{
    SCSearchFormsHistogramFooterViewModel *_viewModel;
    UIImageView *_imageView;
    UILabel *_histogramTitleLabel;
}

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

