//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSectionKitCollectionViewViewMoreActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCShapeView, UIImageView, UILabel;
@protocol SCSectionKitCollectionViewViewMoreActionableDelegate;

@interface SCUnifiedProfileViewMoreCollectionViewCell : UICollectionViewCell <SCSectionKitCollectionViewViewMoreActionable, SCViewModelConfigurable, SCRoundedCornerConfigurable>
{
    SCShapeView *_backgroundView;
    UILabel *_label;
    UIImageView *_iconView;
    SCLazy *_loadingIndicatorLazy;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
    unsigned long long _roundedCorners;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleTap;
- (void)_setBackgroundViewPath;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
