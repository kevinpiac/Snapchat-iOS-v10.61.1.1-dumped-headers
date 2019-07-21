//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCMapCarouselEmbeddedScreenshotViewDelegate-Protocol.h"
#import "SCMapCarouselFocusableRow-Protocol.h"
#import "SCMapCarouselInlineChatViewDelegate-Protocol.h"
#import "SCMapCarouselRow-Protocol.h"
#import "SCMapCarouselShareLocationDelegate-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCExperimentManager, SCLocationSharingPreferencesV1, SCMapCarouselInlineChatView, SCMapCarouselItemCell, SCMapExploreDataStoreV1, SCMapLoggerEventSender, SCMapPerson, SCMapReplySessionLogger, SCMapUserPreferences, UIView;
@protocol SCImageDownloading, SCMapCarouselFocusDelegate, SCMapCarouselPersonRowControllerDelegate, SCMapCarouselRowHeightUpdatesObserver, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding, SCMapReplyScreenshotGenerating;

@interface SCMapCarouselPersonRowController : NSObject <SCMapPersonLocationsListener, SCAvatarViewDelegate, SCMapPeopleFriendsListener, SCMapCarouselShareLocationDelegate, SCMapCarouselInlineChatViewDelegate, SCMapCarouselEmbeddedScreenshotViewDelegate, SCMapCarouselRow, SCMapCarouselFocusableRow>
{
    _Bool _willBecomeFocused;
    _Bool _isInFocusMode;
    NSString *_currentUserId;
    id <SCMapCarouselPersonRowControllerDelegate> _delegate;
    SCMapLoggerEventSender *_logEventSender;
    SCExperimentManager *_experimentManager;
    id <SCImageDownloading> _imageDownloader;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    SCMapExploreDataStoreV1 *_mapExploreDataStore;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    SCMapUserPreferences *_mapUserPreferences;
    unsigned long long _options;
    SCMapPerson *_person;
    SCMapCarouselItemCell *_cell;
    SCMapCarouselInlineChatView *_inlineChatField;
    id <SCMapReplyScreenshotGenerating> _screenshotGenerator;
    _Bool _hideScreenshot;
    _Bool _screenshotViewEnabled;
    UIView *_temporaryAvatarSnapshotView;
    id <SCMapCarouselFocusDelegate> _focusDelegate;
    id <SCMapCarouselRowHeightUpdatesObserver> _heightUpdatesObserver;
    SCMapReplySessionLogger *_mapReplySessionLoggerForFocusedTextReply;
}

- (void).cxx_destruct;
- (void)_acquireFocus;
- (id)_createMapReplySessionLoggerWithType:(long long)arg1;
- (void)_didTapChatButton;
- (void)_getCounterpartRowControllerAfterExitingFocusModeIfNecessary:(CDUnknownBlockType)arg1;
- (_Bool)_isInlineReplyEnabled;
- (void)_removeScreenshot;
- (void)_setTemporaryAvatarSnapshotView:(id)arg1;
- (_Bool)_shouldSendScreenshot;
- (_Bool)_shouldShowExploreButton;
- (_Bool)_shouldShowLocationShareButton;
- (_Bool)_shouldShowScreenshot;
- (_Bool)_shouldShowSendButton;
- (_Bool)_shouldShowUpdateStatusButton;
- (void)_showFullscreenChat;
- (void)_showInlineChat;
- (void)_updateUI;
- (Class)cellClass;
- (void)configureForInlineReplyModeWithScreenshotGenerator:(id)arg1;
- (id)createCopyForFocusMode;
- (void)didEndDisplayingCell:(id)arg1;
- (void)embeddedScreenshotView:(id)arg1 wantsToChangeEnabledStateTo:(_Bool)arg2;
- (void)embeddedScreenshotViewDidTapX:(id)arg1;
@property(nonatomic) __weak id <SCMapCarouselFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (double)heightForFocusModeWithMaximumHeight:(double)arg1 width:(double)arg2;
- (double)heightForWidth:(double)arg1;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver; // @synthesize heightUpdatesObserver=_heightUpdatesObserver;
- (id)initWithCurrentUserId:(id)arg1 delegate:(id)arg2 experimentManager:(id)arg3 imageDownloader:(id)arg4 locationSharingPreferences:(id)arg5 logEventSender:(id)arg6 mapExploreDataStore:(id)arg7 mapPeopleFriendsProvider:(id)arg8 mapPersonLocationsProvider:(id)arg9 mapUserPreferences:(id)arg10 options:(unsigned long long)arg11 person:(id)arg12;
- (void)locationSharingView:(id)arg1 didTapDismissButton:(id)arg2;
- (void)mapCarouselInlineChatViewPressedCamera:(id)arg1;
- (void)mapCarouselInlineChatViewPressedSend:(id)arg1;
- (_Bool)mapCarouselInlineChatViewShouldBeginEditingText:(id)arg1;
- (void)mapCarouselInlineChatViewTextDidChange:(id)arg1;
- (void)mapCarouselInlineChatViewWillResignFocus:(id)arg1;
@property(retain, nonatomic) SCMapReplySessionLogger *mapReplySessionLoggerForFocusedTextReply; // @synthesize mapReplySessionLoggerForFocusedTextReply=_mapReplySessionLoggerForFocusedTextReply;
- (void)peopleFriendsProvider:(id)arg1 didUpdateStoryForUserIds:(id)arg2;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)peopleFriendsProviderDidUpdateFeedItems:(id)arg1;
@property(readonly, copy, nonatomic) SCMapPerson *person; // @synthesize person=_person;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)prepareToEnterFocusModeState;
- (void)prepareToLeaveFocusModeState;
- (id)reuseIdentifier;
- (void)setContentHidden:(_Bool)arg1;
- (void)setFocusModeState:(_Bool)arg1;
- (id)uniqueRowIdentifier;
- (void)updateCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

