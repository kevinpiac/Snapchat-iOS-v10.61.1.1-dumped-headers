//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCChatLocationSharingControllerDataListener-Protocol.h"
#import "SCChatLocationSharingControllerDelegate-Protocol.h"
#import "SCGroupMapViewDelegate-Protocol.h"
#import "SCMiniProfileMapRowControllerDelegate-Protocol.h"

@class NSString, SCChatLocationSharingController, SCEmbeddedMapViewLoggingSession, SCUserSession;
@protocol SCChatGroup, SCMiniProfileMapSectionControllerDelegate;

@interface SCMiniProfileMapSectionController : SCMiniProfileSectionController <SCMiniProfileMapRowControllerDelegate, SCChatLocationSharingControllerDelegate, SCChatLocationSharingControllerDataListener, SCGroupMapViewDelegate>
{
    _Bool _isGroup;
    NSString *_userId;
    id <SCChatGroup> _group;
    SCUserSession *_userSession;
    id <SCMiniProfileMapSectionControllerDelegate> _delegate;
    SCChatLocationSharingController *_locationSharingController;
    SCEmbeddedMapViewLoggingSession *_mapLoggingSession;
}

- (void).cxx_destruct;
- (void)_requestLocation;
- (void)_sendLocation;
- (void)_shareLocation;
- (void)chatLocationSharingController:(id)arg1 didUpdateCellTypes:(id)arg2 shouldAnimate:(_Bool)arg3;
- (void)chatLocationSharingController:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)groupMapView:(id)arg1 didTapPlaceModel:(id)arg2;
- (void)groupMapView:(id)arg1 wantsToShowGroupOnMap:(id)arg2;
- (void)groupMapView:(id)arg1 wantsToShowPersonOnMap:(id)arg2;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;
- (id)initWithUserId:(id)arg1 orGroup:(id)arg2 userSession:(id)arg3 delegate:(id)arg4;
- (id)initWithUserId:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;
- (void)mapRowController:(id)arg1 didTapPersonLocation:(id)arg2;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;
- (_Bool)willDisplayMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

