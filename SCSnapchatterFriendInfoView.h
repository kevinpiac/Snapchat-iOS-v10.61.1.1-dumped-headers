//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, UILabel;
@protocol SCLegacyItemDownloading;

@interface SCSnapchatterFriendInfoView : UIView <SCSnapchatterViewModelConfigurable>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    double _primarySecondaryLabelPadding;
    NSString *_friendScore;
    id <SCLegacyItemDownloading> _infoFetcher;
    id _viewModel;
}

- (void).cxx_destruct;
- (id)_secondaryLabelTextWithFriendScore;
- (void)_updateFriendScore:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setInfoFetcher:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
