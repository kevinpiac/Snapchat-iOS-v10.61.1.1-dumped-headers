//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCShapeView, UIButton, UIImageView, UILabel;
@protocol SCActionHandling;

@interface SCSendToCTAWithIconAndSecondaryButtonCollectionViewCell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCActionable>
{
    SCShapeView *_backgroundShapeView;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIButton *_secondaryButton;
    SCActionModel *_primaryTapActionModel;
    SCActionModel *_secondaryTapActionModel;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleCellTapAction:(id)arg1;
- (void)_handleSecondaryButtonTap;
- (id)_secondaryButton;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

