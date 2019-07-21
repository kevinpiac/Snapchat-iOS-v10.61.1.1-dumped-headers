//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCAvatarViewDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSearchImageActionButtonDelegate-Protocol.h"

@class NSString, SCActionModel, SCAvatarView, SCEventListenerAnnouncer, SCLazy, SCOfficialBadgeDisplayNameLabel, SCSearchActionButton, SCSearchFriendProvider, UIImageView, UILabel, UIView;
@protocol SCActionHandling;

@interface SCSearchPersonCollectionViewCell : SCSearchCollectionViewCell <SCSearchImageActionButtonDelegate, SCAvatarViewDelegate, SCActionable, SCEventAnnouncing, SCEventListener>
{
    SCAvatarView *_avatarView;
    SCLazy *_badgeViewLazyCreator;
    SCOfficialBadgeDisplayNameLabel *_nameLabel;
    UILabel *_usernameLabel;
    UIImageView *_feediconImageView;
    UILabel *_friendmojiLabel;
    UILabel *_scoreLabel;
    UILabel *_suggestedReasonLabel;
    UIView *_separatorView;
    UILabel *_actionText;
    _Bool _isFriendmojiOfficialEmoji;
    SCSearchActionButton *_actionButton;
    SCLazy *_dismissButton;
    SCLazy *_debugButton;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_storyThumbnailTapActionModel;
    SCActionModel *_debugActionModel;
    SCActionModel *_bitmojiThumbnailTapActionModel;
    SCLazy *_emojiMaskViewLazyCreator;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    long long _viewStyle;
    SCSearchFriendProvider *_friendProvider;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_debugGesture:(id)arg1;
- (void)_handleAction:(id)arg1 fromSourceView:(id)arg2;
- (void)_handleButtonTap:(id)arg1;
- (void)_handleThumbnailTapFromView:(id)arg1 withActionModel:(id)arg2;
- (void)_setupAddFriendLayoutWithDismissButton:(_Bool)arg1 showSeparator:(_Bool)arg2;
- (void)_setupBadgeView;
- (void)_setupDebugButton:(id)arg1;
- (void)_setupEmojiMaskView;
- (void)_updateAddFriendModel:(id)arg1;
- (void)_updateBackgroundColorForLabelsWithColor:(id)arg1;
- (void)_updateLabelsWithName:(id)arg1 username:(id)arg2 friendmoji:(id)arg3 isOfficial:(_Bool)arg4 suggestedReason:(id)arg5 feediconImage:(id)arg6 actionText:(id)arg7;
- (void)_updateProfileImageWithViewModel:(id)arg1 snapchatter:(id)arg2 searchPerson:(id)arg3;
- (void)_updateScoreViewWithScore:(id)arg1 forFriendWithUsername:(id)arg2;
- (void)_updateScoreWithSnapchatter:(id)arg1 viewModel:(id)arg2;
- (void)_updateWithPersonViewModel:(id)arg1;
- (void)_updateWithPersonViewModel:(id)arg1 searchPerson:(id)arg2 localSnapchatter:(id)arg3;
- (void)_updateWithViewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
- (void)handleLongPressAction;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapAction;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (_Bool)hasOverridedLongPressAction;
- (_Bool)hasOverridedTapAction;
- (void)imageActionButton:(id)arg1 didTriggerActionModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)removeListener:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImageDownloader:(id)arg1;
- (void)setViewModel:(id)arg1;
@property(nonatomic) long long viewStyle; // @synthesize viewStyle=_viewStyle;
- (_Bool)shouldShowBackgroundView;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

