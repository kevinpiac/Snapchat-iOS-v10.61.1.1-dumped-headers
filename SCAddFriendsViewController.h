//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCShakeToReportDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, SCAddFriendsQueryResultControllerHandler, SCAddFriendsQuickAddLogger, SCLazy, SCSearchQueryResultController, SCUserSession, UICollectionView;
@protocol SCImageDownloading, SCLegacyItemDownloading, SCPageViewLogging, SCSnapchattersDataSearching;

@interface SCAddFriendsViewController : SIGSubscreenViewController <SCShakeToReportDelegate>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    id <SCSnapchattersDataSearching> _snapchattersDataSearcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCUserSession *_userSession;
    NSDictionary *_additionalActionHandlersMap;
    UICollectionView *_collectionView;
    SCSearchQueryResultController *_queryResultController;
    SCAddFriendsQuickAddLogger *_seenAndAddEventLogger;
    long long _previousStatusBarStyle;
    id <SCPageViewLogging> _pageViewLogger;
    long long _placement;
    double _pageSessionStartTime;
    SCAddFriendsQueryResultControllerHandler *_queryResultControllerHandler;
    NSObject *_cameraAndChatDelegateHandler;
}

- (void).cxx_destruct;
- (void)_setupCollectionView;
@property(retain, nonatomic) NSDictionary *additionalActionHandlersMap; // @synthesize additionalActionHandlersMap=_additionalActionHandlersMap;
@property(retain, nonatomic) NSObject *cameraAndChatDelegateHandler; // @synthesize cameraAndChatDelegateHandler=_cameraAndChatDelegateHandler;
- (id)defaultProjectNameV2;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 snapchattersDataMutator:(id)arg3 snapchattersDataSearcher:(id)arg4 viewedIncomingFriendsTracker:(id)arg5 imageDownloader:(id)arg6 labelInfoProvider:(id)arg7 userInfoProvider:(id)arg8 userSession:(id)arg9 placement:(long long)arg10 pageViewLogger:(id)arg11;
- (id)loadScrollView;
- (void)loadView;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (_Bool)viewControllerPrefersSelfDismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

