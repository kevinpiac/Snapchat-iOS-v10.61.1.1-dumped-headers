//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatHamburgerRoundedCornerCellDelegate-Protocol.h"
#import "SCChatHamburgerTableSectionProtocol-Protocol.h"
#import "SCChatStoryIconUpdater-Protocol.h"
#import "SCHamburgerFriendGestureDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class NSDictionary, NSString, SCUserSession, UIView;
@protocol SCChatHamburgerTableSectionDataSource, SCChatHamburgerTableSectionDelegate, SCChatHamburgerTableSectionFriendsDelegate, SCChatHamburgerTableSectionGroupSettingDataSource, SCChatHamburgerTableSectionPresentationDelegate, SCChatStoryDelegate;

@interface SCChatHamburgerTableSectionFriends : NSObject <SCChatHamburgerRoundedCornerCellDelegate, SCMiniProfileViewControllerDelegate, SCStoriesModelUpdateListener, SCChatHamburgerTableSectionProtocol, SCChatConversationUpdaterListener, SCHamburgerFriendGestureDelegate, SCChatStoryIconUpdater>
{
    SCUserSession *_userSession;
    NSString *_identifier;
    unsigned long long _previousParticipantsNum;
    _Bool _isGroupConversation;
    _Bool _memberListCollapsed;
    id <SCChatHamburgerTableSectionDataSource> tableDataSource;
    id <SCChatHamburgerTableSectionDelegate> tableDelegate;
    id <SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate;
    id <SCChatHamburgerTableSectionFriendsDelegate> _delegate;
    id <SCChatHamburgerTableSectionGroupSettingDataSource> _dataSource;
    id <SCChatStoryDelegate> _storyDelegate;
    NSDictionary *_reuseCellClassesByIdentifiers;
    UIView *_dismissView;
}

- (void).cxx_destruct;
- (void)_handleFriendCellTapped:(id)arg1;
- (void)_handleShowMoreCellTapped;
- (void)_presentMiniprofileForSnapchatter:(id)arg1;
- (_Bool)_shouldShowViewMoreCell;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionGroupSettingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionFriendsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didConversationViewModelChange:(id)arg1;
@property(nonatomic) __weak UIView *dismissView; // @synthesize dismissView=_dismissView;
- (void)hamburgerFriendCell:(id)arg1 didPressOnStoryIcon:(id)arg2;
- (void)hamburgerFriendCell:(id)arg1 didTapAddFriend:(id)arg2;
- (void)hamburgerFriendCellDidPressOnBitmoji:(id)arg1;
- (void)hamburgerRoundedCornerCellTapped:(id)arg1;
- (double)heightForCellAtIndex:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 identifier:(id)arg2 isGroupConversation:(_Bool)arg3;
@property(nonatomic) _Bool memberListCollapsed; // @synthesize memberListCollapsed=_memberListCollapsed;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2;
- (unsigned long long)numberOfCells;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate;
- (void)reloadStoryIcon;
- (void)reloadStoryIconForUsername:(id)arg1;
- (void)resetSection;
@property(copy, nonatomic) NSDictionary *reuseCellClassesByIdentifiers; // @synthesize reuseCellClassesByIdentifiers=_reuseCellClassesByIdentifiers;
@property(nonatomic) __weak id <SCChatStoryDelegate> storyDelegate; // @synthesize storyDelegate=_storyDelegate;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionDataSource> tableDataSource; // @synthesize tableDataSource;
@property(nonatomic) __weak id <SCChatHamburgerTableSectionDelegate> tableDelegate; // @synthesize tableDelegate;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (id)storyDismissView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
