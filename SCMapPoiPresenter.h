//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapTapToPlayPresenterDelegate-Protocol.h"

@class FriendStories, NSString, SCMTTileSetId, SCMapLoggerSession, SCMapTapToPlayPresenter, SCUserSession, SCXRenderLockManager, UIView;
@protocol NavigationDelegate, SCCanceling, SCMapPoiPresenterDelegate;

@interface SCMapPoiPresenter : NSObject <SCMapTapToPlayPresenterDelegate>
{
    SCMapTapToPlayPresenter *_tapToPlayPresenter;
    UIView *_baseView;
    SCMapLoggerSession *_loggerSession;
    SCUserSession *_userSession;
    SCMTTileSetId *_tileSetId;
    SCXRenderLockManager *_renderLockManager;
    id <NavigationDelegate> _navigationDelegate;
    double _zoomLevel;
    FriendStories *_presentedFriendStories;
    id <SCCanceling> _fullManifestRequest;
    id <SCMapPoiPresenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_cleanUp;
- (id)_friendStoriesForPoi:(id)arg1 tileSetId:(id)arg2 reportedIds:(id)arg3 mapSourceType:(long long)arg4;
- (id)baseViewForFriendStories:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCMapPoiPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDismissTapToPlayPresenter:(id)arg1;
- (void)dismissStory;
- (id)initWithLoggerSession:(id)arg1 userSession:(id)arg2 tileSetId:(id)arg3 zoomLevel:(double)arg4 renderLockManager:(id)arg5 navigationDelegate:(id)arg6;
- (void)presentPoi:(id)arg1 baseView:(id)arg2 mapSourceType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

