//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class NSString, SCProfileActionButtonIconView, SCUnifiedProfileImageIconView, UILabel, UITapGestureRecognizer;
@protocol SCActionHandling;

@interface SCUnifiedProfilePrivacyExplainerViewCell : SCUnifiedProfileBaseCollectionViewCell <SCActionable>
{
    UILabel *_title;
    UILabel *_subtitle;
    SCUnifiedProfileImageIconView *_leftIcon;
    SCProfileActionButtonIconView *_rightIcon;
    UITapGestureRecognizer *_rightIconTapRecognizer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleRightIconTapAction;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (_Bool)shouldAdjustBackgroundColorForHighlightedState;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

