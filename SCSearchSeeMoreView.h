//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCShapeView, UILabel;
@protocol SCSearchSeeMoreViewDelegate;

@interface SCSearchSeeMoreView : UIView <SCViewModelConfigurable, SCRoundedCornerConfigurable>
{
    SCShapeView *_backgroundView;
    UILabel *_viewMoreLabel;
    _Bool _highlighted;
    id _viewModel;
    unsigned long long _roundedCorners;
    id <SCSearchSeeMoreViewDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_onTap;
@property(nonatomic) __weak id <SCSearchSeeMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
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

