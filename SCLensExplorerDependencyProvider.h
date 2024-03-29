//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerDependencyProviderProtocol-Protocol.h"

@class NSString, SCLensExplorerDebugPresenter, SCLensExplorerSectionCreator, SCUserSession;
@protocol SCCache, SCImageDownloading, SCLensChallengesScheduleProtocol, SCLensExplorerLensUnlockerProtocol, SCLensExplorerNavigationProviderProtocol, SCLensExplorerOperaPresenterFactoryProtocol, SCLensExplorerStoryItemCreatorProtocol, SCLensExplorerStudySettingsProviderProtocol, SCRequestManager;

@interface SCLensExplorerDependencyProvider : NSObject <SCLensExplorerDependencyProviderProtocol>
{
    SCUserSession *_userSession;
    id <SCLensExplorerNavigationProviderProtocol> _navigationDelegateProvider;
    id <SCLensExplorerLensUnlockerProtocol> _lensUnlocker;
    SCLensExplorerDebugPresenter *_debugPresenter;
    SCLensExplorerSectionCreator *_lensExplorerLensSectionCreator;
    id <SCImageDownloading> _imageDownloader;
    id <SCRequestManager> _requestManager;
    id <SCCache> _animationCache;
    id <SCCache> _stickerCache;
    id <SCCache> _impressionCache;
    id <SCLensExplorerStudySettingsProviderProtocol> _studySettingsProvider;
    id <SCLensExplorerStoryItemCreatorProtocol> _storyItemCreator;
    id <SCLensExplorerOperaPresenterFactoryProtocol> _operaPresenterFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCCache> animationCache; // @synthesize animationCache=_animationCache;
- (id)bitmojiImageFetcher;
- (id)blacklistFilter;
- (id)createDebugViewControllerForStoryId:(id)arg1 debugHtml:(id)arg2 lastStreamToken:(id)arg3;
- (id)createLensExplorerRankingLoggerWithQueuePerformer:(id)arg1;
- (id)createSearchSession;
- (id)createSearchViewControllerWithLensExplorerUnlocker:(id)arg1 parentView:(id)arg2;
- (id)createSilentUnlocker;
- (id)encryptedCacheWithName:(id)arg1 cacheSizePolicy:(id)arg2;
@property(readonly, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) id <SCCache> impressionCache; // @synthesize impressionCache=_impressionCache;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegateProvider:(id)arg2;
- (id)lensChallengesCameraPresenter;
@property(readonly, nonatomic) id <SCLensChallengesScheduleProtocol> lensChallengesSchedule;
- (id)lensUnlockableDataStore;
- (id)lensUserProvider;
- (id)liveLensPreviewCameraPresenter;
@property(readonly, nonatomic) id <SCLensExplorerOperaPresenterFactoryProtocol> operaPresenterFactory; // @synthesize operaPresenterFactory=_operaPresenterFactory;
- (id)profilePresenter;
@property(readonly, nonatomic) id <SCRequestManager> requestManager; // @synthesize requestManager=_requestManager;
@property(readonly, nonatomic) id <SCCache> stickerCache; // @synthesize stickerCache=_stickerCache;
@property(readonly, nonatomic) id <SCLensExplorerStoryItemCreatorProtocol> storyItemCreator; // @synthesize storyItemCreator=_storyItemCreator;
@property(readonly, nonatomic) id <SCLensExplorerStudySettingsProviderProtocol> studySettingsProvider; // @synthesize studySettingsProvider=_studySettingsProvider;
- (id)userPreferences;
- (id)userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

