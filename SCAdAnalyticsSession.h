//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSession-Protocol.h"

@class NSNumber, NSString, SCAdItemLoadStatus, SCAdSnapAppInfoLogParameters, SCAdTrackerHelper, SCCompositeAdDataSource, SCOperaPlaylistItemGroup, SCOperaViewController, SCStopwatch, SCUserSession;
@protocol SCOperaPlaylistItemController;

@interface SCAdAnalyticsSession : NSObject <SCOperaSession>
{
    SCCompositeAdDataSource *_adDataSource;
    SCStopwatch *_storyViewStopwatch;
    SCStopwatch *_topSnapStopwatch;
    SCStopwatch *_attachmentViewStopwatch;
    long long _viewLocation;
    NSNumber *_storySessionId;
    NSString *_deepLinkId;
    SCOperaPlaylistItemGroup *_currentItemGroup;
    SCAdItemLoadStatus *_adItemLoadStatus;
    _Bool _isOnLongform;
    SCUserSession *_userSession;
    SCAdTrackerHelper *_adTrackerHelper;
    SCAdSnapAppInfoLogParameters *_appInfoLogParams;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
}

- (void).cxx_destruct;
- (void)_logAdGroupViewWithItemGroup:(id)arg1;
- (void)_logAppInstallAttachmentWithItem:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_logCameraViewWithItem:(id)arg1 params:(id)arg2;
- (void)_logCloseTileViewWithItem:(id)arg1 didAdvanceToNext:(_Bool)arg2;
- (void)_logLongformVideoViewWithItem:(id)arg1 params:(id)arg2 context:(id)arg3;
- (void)_logRemoteWebViewWithItem:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_logTopSnapAdViewWithItem:(id)arg1 context:(id)arg2 params:(id)arg3 dismissModelDurationInSec:(double)arg4;
- (void)_populateCommonLogParamWithItem:(id)arg1 logParamBuilder:(id)arg2;
- (void)_populateLongformCommonLogParamWithItem:(id)arg1 logParamBuilder:(id)arg2;
- (void)_updateUnSkippableAdLongformTimeViewedWithItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 adDataSource:(id)arg2 viewLocation:(long long)arg3 storySessionId:(id)arg4 deepLinkId:(id)arg5 adTrackerHelper:(id)arg6 appInfoLogParams:(id)arg7;
- (void)logCloseViewWithItem:(id)arg1 context:(id)arg2 params:(id)arg3 dismissModelDurationInSec:(double)arg4;
- (void)logScreenShotViewWithItem:(id)arg1;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (id)registeredEventsForOperaSession;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

