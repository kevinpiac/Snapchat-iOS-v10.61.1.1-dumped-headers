//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTodayWidgetService-Protocol.h"

@class NSOperationQueue, NSString, SCScopedAccess, SCUserSession;

@interface SCTodayWidgetService : NSObject <SCSnapchattersDataRequestListener, SCTodayWidgetService>
{
    SCUserSession *_userSession;
    SCScopedAccess *_storiesThumbnailCoordinator;
    SCScopedAccess *_scopedLazyStoriesDataCoordinator;
    NSString *_widgetBundleIdentifier;
    NSOperationQueue *_workerQueue;
    _Bool _visible;
}

- (void).cxx_destruct;
- (void)_checkForFirstRun;
- (void)_clearWidgetFriendsData;
- (void)_disableTodayWidget;
- (void)_enableTodayWidget;
- (void)_friendListUpdated;
- (void)_handleFetchedStoriesSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadBitmojiForSnapchatter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadStoryThumbnailForWidgetFriend:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_logWidgetAdded;
- (void)_logWidgetViewed:(long long)arg1;
- (void)_logWidgetViewedIfApplicable;
- (void)_setWidgetVisibility:(_Bool)arg1;
- (void)_updateWidgetData;
- (void)_updateWidgetDataWithSnapchatters:(id)arg1;
- (void)_widgetSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)invalidate;
- (void)logDeeplinkAction:(unsigned long long)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

