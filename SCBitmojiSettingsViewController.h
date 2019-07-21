//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCBitmojiAvatarBuilderRouterDelegate-Protocol.h"
#import "SCBitmojiSelfieManagerListener-Protocol.h"
#import "SCBitmojiSettingViewDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiLinkPageLogger, SCBitmojiManager, SCBitmojiSelfieManager, SCBitmojiService, SCBitmojiSettingsView, SCDisposableObserver;
@protocol SCBitmojiAppDeepLinking, SCBitmojiAvatarBuilderRouting, SCBitmojiAvatarProvider, SCBitmojiFashionPresenting, SCBitmojiSelfieProviding, SCDownloadableContentManaging, SCPageViewLogging;

@interface SCBitmojiSettingsViewController : SCGenericSettingsViewController <SCBitmojiSelfieManagerListener, SCBitmojiSettingViewDelegate, SCBitmojiAvatarBuilderRouterDelegate>
{
    id <SCBitmojiAppDeepLinking> _bitmojiAppDeepLinker;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    id <SCBitmojiAvatarBuilderRouting> _bitmojiAvatarBuilderRouter;
    id <SCBitmojiFashionPresenting> _bitmojiFashionPresenter;
    SCBitmojiLinkPageLogger *_bitmojiLinkPageLogger;
    SCBitmojiManager *_bitmojiManager;
    SCBitmojiSelfieManager *_bitmojiSelfieManager;
    id <SCBitmojiSelfieProviding> _bitmojiSelfieProvider;
    SCBitmojiService *_bitmojiService;
    NSString *_displayName;
    id <SCPageViewLogging> _pageViewLogger;
    unsigned long long _status;
    SCBitmojiSettingsView *_bitmojiSettingsView;
    NSArray *_selfieStickerIds;
    _Bool _inOnboardScreen;
    NSString *_pageViewPageName;
    long long _exitType;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    SCDisposableObserver *_avatarIdObserver;
}

- (void).cxx_destruct;
- (void)_appDidBecomeActive;
- (void)_changeOutfitWithCell:(id)arg1 unlinkingView:(id)arg2;
- (void)_changeSelfieWithCell:(id)arg1 unlinkingView:(id)arg2;
- (void)_performUnlinkAction:(id)arg1;
- (void)_refreshView;
- (void)_setBackupLinkingSucceededViewImage;
- (void)_setBackupUnlinkingViewImage;
- (void)_updateSettingsViewIfBitmojiJustLinkedWithAvatarId:(id)arg1 stickerId:(id)arg2 scale:(unsigned long long)arg3;
- (void)_updateSettingsViewIfBitmojiLinkedWithScale:(unsigned long long)arg1;
- (void)_updateSettingsViewToChangeAvatar;
- (void)_updateSettingsViewToConfirmLink;
- (id)bitmojiAvatarBuilderPresentingViewController;
- (void)dealloc;
- (void)didPressChangeDratiniCell:(id)arg1 unlinkingView:(id)arg2 settingsView:(id)arg3;
- (void)didPressChangeOutfitCell:(id)arg1 unlinkingView:(id)arg2 settingsView:(id)arg3;
- (void)didPressEditBitmojiCell:(id)arg1 unlinkingView:(id)arg2 settingsView:(id)arg3;
- (void)didPressLinkButton:(id)arg1 linkingView:(id)arg2 settingsView:(id)arg3;
- (void)didPressUnlinkButton:(id)arg1 unlinkingView:(id)arg2 settingsView:(id)arg3;
- (id)getTitle;
- (id)initWithBitmojiAppDeepLinker:(id)arg1 bitmojiAvatarProvider:(id)arg2 bitmojiFashionPresenter:(id)arg3 bitmojiLinkPageLogger:(id)arg4 bitmojiAvatarBuilderRouter:(id)arg5 bitmojiManager:(id)arg6 bitmojiSelfieManager:(id)arg7 bitmojiSelfieProvider:(id)arg8 bitmojiService:(id)arg9 displayName:(id)arg10 pageViewLogger:(id)arg11 status:(unsigned long long)arg12 downloadableContentManager:(id)arg13;
- (id)initWithPage:(unsigned long long)arg1 status:(unsigned long long)arg2 userSession:(id)arg3;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (void)selfiePackDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

