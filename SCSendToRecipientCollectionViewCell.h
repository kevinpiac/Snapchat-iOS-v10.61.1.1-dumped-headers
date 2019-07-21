//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCRoundedCornerConfigurable-Protocol.h"
#import "SCSendToScrollLabeling-Protocol.h"
#import "SCSeparatorConfigurable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCActionModel, SCAvatarView, SCCornerRadii, SCEventListenerAnnouncer, SCGrowingButton, SCNetworkImageView, SCOfficialBadgeDisplayNameLabel, SCSearchActionButton, SCSendToScrollLabelModel, SCShapeView, UIButton, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol SCActionHandling;

@interface SCSendToRecipientCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCRoundedCornerConfigurable, SCViewModelConfigurable, SCSeparatorConfigurable, SCActionable, SCSendToScrollLabeling, SCEventAnnouncing>
{
    UIView *_cardContentView;
    SCShapeView *_backgroundShapeView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    struct CGRect _shapeLayerPathRect;
    struct CGSize _cardContentViewSize;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGesture;
    UIImageView *_checkMarkView;
    SCOfficialBadgeDisplayNameLabel *_nameLabel;
    SCOfficialBadgeDisplayNameLabel *_selectedNameLabel;
    UILabel *_friendmojiLabel;
    UILabel *_streakScoreLabel;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCAvatarView *_avatarView;
    UIImageView *_secondaryIconView;
    UILabel *_secondaryLabel;
    UILabel *_suggestionLabel;
    SCNetworkImageView *_iconImageView;
    SCGrowingButton *_accessoryButton;
    UILabel *_officialFriendmojiLabel;
    UIButton *_selectionView;
    SCSearchActionButton *_secondAccessoryButton;
    SCCornerRadii *_cornerRadii;
    SCEventListenerAnnouncer *_eventAnnouncer;
    unsigned long long _roundedCorners;
    id _viewModel;
    unsigned long long _separatorMask;
    UIColor *_separatorColor;
    id <SCActionHandling> _actionHandler;
    SCSendToScrollLabelModel *_scrollLabelModel;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)_accessoryImageForViewModel:(id)arg1;
- (void)_animateCellBackgroundToColor:(id)arg1;
- (void)_animateSelectionState;
- (void)_announceTapAction;
- (void)_applyShadowIfNeeded:(unsigned long long)arg1;
- (void)_checkmarkAnimationCompletionIsSelected:(_Bool)arg1;
- (void)_clipNameLabelLastInitialIfTooLong;
- (_Bool)_displayInTwoColumn;
- (void)_handleAccessoryButtonTap:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleSecondAccessoryButtonTap:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_initBottomSeparatorIfNeeded;
- (void)_initTopSeparatorIfNeeded;
- (void)_nameLabelAnimationCompletionIsSelected:(_Bool)arg1 viewStyle:(long long)arg2;
- (void)_nameLabelAnimationIsSelected:(_Bool)arg1 viewStyle:(long long)arg2;
- (void)_setCheckmarkViewFrame:(struct CGRect)arg1;
- (void)_setCornerRadii:(id)arg1 roundedRect:(struct CGRect)arg2;
- (void)_setNetworkImageViewForAppStoryViewModel:(id)arg1;
- (void)_setNetworkImageViewForViewModel:(id)arg1;
- (void)_setRoundedCorners:(unsigned long long)arg1 roundedRect:(struct CGRect)arg2;
- (_Bool)_shouldShowAccessoryButtonForViewModel:(id)arg1;
- (_Bool)_shouldShowSecondAccessoryButtonForViewModel:(id)arg1;
- (_Bool)_shouldShowSelectionViewForViewModel:(id)arg1;
- (void)_updateAvatarViewWithViewModel:(id)arg1;
- (void)_updateCornersWithRoundedRect:(struct CGRect)arg1;
- (void)_updateSelection:(_Bool)arg1;
- (void)_updateViewColorsIsSelected:(_Bool)arg1 viewStyle:(long long)arg2;
- (void)_updateWithViewModel:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeListener:(id)arg1;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(readonly, copy, nonatomic) SCSendToScrollLabelModel *scrollLabelModel; // @synthesize scrollLabelModel=_scrollLabelModel;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) unsigned long long separatorMask; // @synthesize separatorMask=_separatorMask;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

