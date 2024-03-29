//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSnapchatterCellViewActionable-Protocol.h"
#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCSearchActionButton;
@protocol SCSnapchatterCellViewActionHandling;

@interface SCSnapchatterButtonAccessoryView : UIView <SCSnapchatterViewModelConfigurable, SCSnapchatterCellViewActionable>
{
    SCSearchActionButton *_actionButton;
    SCLazy *_sideActionButton;
    id _viewModel;
    id <SCSnapchatterCellViewActionHandling> _actionHandlingDelegate;
}

- (void).cxx_destruct;
- (void)_handleButtonTap:(id)arg1;
- (id)_newActionSideButton;
@property(nonatomic) __weak id <SCSnapchatterCellViewActionHandling> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

