//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSendToScrollLabeling-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCSendToScrollLabelModel, SCShapeView, UIButton, UILabel, UITapGestureRecognizer, UIView;
@protocol SCActionHandling;

@interface SCSendToGroupEmptyStateCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCRoundedCornerConfigurable, SCViewModelConfigurable, SCSendToScrollLabeling, SCActionable>
{
    UIView *_cardContentView;
    SCShapeView *_backgroundShapeView;
    struct CGRect _shapeLayerPathRect;
    UIButton *_createGroupButton;
    SCActionModel *_tapActionModel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_textLabel;
    unsigned long long _roundedCorners;
    id _viewModel;
    SCSendToScrollLabelModel *_scrollLabelModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_createGroupButtonClicked:(id)arg1;
- (void)_setRoundedCorners:(unsigned long long)arg1 roundedRect:(struct CGRect)arg2;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

