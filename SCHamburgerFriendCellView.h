//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCAddFriendButtonViewModel-Protocol.h"
#import "SCAvatarViewDelegate-Protocol.h"

@class Friend, NSString, SCAddFriendButtonV2, SCAvatarView, SCHamburgerFriendCellViewModel, SCUserSession, UILabel;
@protocol SCHamburgerFriendCellViewEventDelegate;

@interface SCHamburgerFriendCellView : UIView <SCAddFriendButtonViewModel, SCAvatarViewDelegate>
{
    SCAvatarView *_avatarView;
    UILabel *_displayNameLabel;
    UILabel *_usernameScoreLabel;
    SCAddFriendButtonV2 *_addButton;
    Friend *_friendForCell;
    SCUserSession *_userSession;
    id <SCHamburgerFriendCellViewEventDelegate> _delegate;
    SCHamburgerFriendCellViewModel *_viewModel;
}

- (void).cxx_destruct;
- (double)_addButtonWidth;
- (double)_maxTextLabelWidth;
- (void)_updateAddButton;
- (void)_updateAvatarView;
- (void)_updateDisplayNameLabel;
- (void)_updateFriendForCell;
- (void)_updateUsernameAndScoreLabel;
- (id)avatarView;
- (long long)buttonState;
- (long long)buttonStyle;
- (void)buttonV2Pressed:(id)arg1 friend:(id)arg2;
@property(nonatomic) __weak id <SCHamburgerFriendCellViewEventDelegate> delegate; // @synthesize delegate=_delegate;
- (id)friend;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)initAddFriendButton;
- (void)initDisplayNameLabel;
- (void)initUsernameScoreLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCHamburgerFriendCellViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
