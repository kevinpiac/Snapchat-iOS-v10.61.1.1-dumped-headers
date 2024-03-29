//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSOrderedSet, NSString, SCGradientView, SCGrowingButton, SCLoadingIndicatorView, UIButton, UICollectionView, UILabel;
@protocol SCSendConfirmationViewControllerDelegate;

@interface SCSendConfirmationView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIView *_contentView;
    SCGrowingButton *_sendButton;
    UIButton *_sendLabelButton;
    UILabel *_hintLabel;
    NSArray *_labelInfos;
    SCLoadingIndicatorView *_sendingIndicator;
    UIView *_sendButtonContainerView;
    double _buttonLabelExtraWidth;
    unsigned long long _sendButtonStyle;
    NSString *_currentUserId;
    _Bool _ctaButtonEnabled;
    UIButton *_addMoreButton;
    NSOrderedSet *_orderedItemIds;
    UICollectionView *_recipientsCollectionView;
    _Bool _showGradientLayer;
    SCGradientView *_gradientView;
    _Bool _pillEnabled;
    double _buttonRightOffset;
    double _buttonHeight;
    _Bool _addToMyStory;
    _Bool _addToMyGallery;
    _Bool _quickSend;
    id <SCSendConfirmationViewControllerDelegate> _delegate;
    double _contentBottomInset;
    NSArray *_friendRecipients;
    NSArray *_quickAddRecipients;
    NSArray *_contactSnapchatterRecipients;
    NSArray *_usernameSearchedRecipients;
    NSArray *_mischiefsSelected;
    NSArray *_sharedStoriesSelected;
    NSArray *_groupStoriesSelected;
    NSArray *_businessProfilesSelected;
    NSArray *_appStoriesSelected;
}

- (void).cxx_destruct;
- (void)_addDisplayname:(id)arg1 labelInfos:(id)arg2 labelInfoMaps:(id)arg3 type:(long long)arg4 searchKey:(id)arg5 start:(double *)arg6 itemId:(id)arg7;
- (void)_addMoreButton;
- (struct CGRect)_addMoreButtonFrame;
- (void)_addMoreButtonTouchDown;
- (void)_addMoreButtonTouchUpInside:(id)arg1;
- (void)_addMoreButtonTouchUpOutside;
- (void)_appendViewModels:(id)arg1 labelInfos:(id)arg2 labelInfoMaps:(id)arg3 type:(long long)arg4 start:(double *)arg5;
- (struct CGRect)_contentViewFrame;
- (void)_didSelectLabelInfo:(id)arg1;
- (id)_displayedLabelInfos;
- (struct CGRect)_hintLabelFrame;
- (id)_orderedLabelInfos:(id)arg1 labelInfoMaps:(id)arg2;
- (struct CGRect)_recipientsCollectionViewFrame;
- (void)_recipientsScrollViewTapped:(id)arg1;
- (_Bool)_respondsToTappingOnRecipientsEvents;
- (struct CGRect)_rightGradientFrame;
- (void)_scrollToLastItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_selectedRecipientsCount;
- (struct CGRect)_sendButtonFrame;
- (double)_sendButtonHeight;
- (double)_sendButtonImageRightOffset;
- (void)_sendButtonPressed;
- (double)_sendButtonTopMargin;
- (double)_sendButtonWidth;
- (void)_sendLabelButtonPressed;
- (void)_setupBackground;
- (id)_truncatedRecipientsListWithCount:(id)arg1;
- (void)_updateAddMoreButtonFrame;
- (void)_updateRecipientsAnimated:(_Bool)arg1;
@property(nonatomic) _Bool addToMyGallery; // @synthesize addToMyGallery=_addToMyGallery;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
- (id)allPersonRecipients;
@property(readonly, copy, nonatomic) NSArray *appStoriesSelected; // @synthesize appStoriesSelected=_appStoriesSelected;
@property(readonly, copy, nonatomic) NSArray *businessProfilesSelected; // @synthesize businessProfilesSelected=_businessProfilesSelected;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *contactSnapchatterRecipients; // @synthesize contactSnapchatterRecipients=_contactSnapchatterRecipients;
@property(nonatomic) double contentBottomInset; // @synthesize contentBottomInset=_contentBottomInset;
@property(nonatomic) __weak id <SCSendConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forceUpdateRecipients;
@property(copy, nonatomic) NSArray *friendRecipients; // @synthesize friendRecipients=_friendRecipients;
@property(copy, nonatomic) NSArray *groupStoriesSelected; // @synthesize groupStoriesSelected=_groupStoriesSelected;
- (_Bool)hasOnlyFriendRecipients;
- (_Bool)hasSelectedRecipients;
- (_Bool)hasSelectedStories;
- (void)hideSendingIndicator;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showHintLabel:(_Bool)arg2 currentUserId:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 showHintLabel:(_Bool)arg2 currentUserId:(id)arg3 sendToCTAButtonEnabled:(_Bool)arg4;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *mischiefsSelected; // @synthesize mischiefsSelected=_mischiefsSelected;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *quickAddRecipients; // @synthesize quickAddRecipients=_quickAddRecipients;
@property(nonatomic) _Bool quickSend; // @synthesize quickSend=_quickSend;
- (void)scrollToLeft;
- (id)sendingIndicator;
@property(copy, nonatomic) NSArray *sharedStoriesSelected; // @synthesize sharedStoriesSelected=_sharedStoriesSelected;
- (void)showSendingIndicator;
- (void)showTapToAddLabel;
- (void)updateHintLabelWithAttributedText:(id)arg1 visible:(_Bool)arg2;
- (void)updateViewModel:(id)arg1;
- (void)updateViewModel:(id)arg1 orderedItemIds:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *usernameSearchedRecipients; // @synthesize usernameSearchedRecipients=_usernameSearchedRecipients;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

