//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapChromeButtonControlling-Protocol.h"
#import "SCMapStatusFetchingListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"

@class NSString, NSTimer, SCMapChromeButtonControllerListenerAnnouncer, SCMapChromeTooltip, SCMapExploreDataStoreV1, SCMapLoggerEventSender;
@protocol SCMapPersonLocationsProviding;

@interface SCMapExploreButtonController : NSObject <SCMapStatusFetchingListener, SCMapStatusViewedStateListener, SCMapChromeButtonControlling>
{
    SCMapExploreDataStoreV1 *_exploreDataStore;
    SCMapLoggerEventSender *_mapLoggerEventSender;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    long long _buttonState;
    SCMapChromeTooltip *_tooltip;
    NSString *_emoji;
    NSTimer *_tooltipTimer;
    _Bool _hasDisplayedTooltip;
    SCMapChromeButtonControllerListenerAnnouncer *_announcer;
}

+ (id)_tooltipForExploreDataStore:(id)arg1 mapPersonLocationsProvider:(id)arg2;
- (void).cxx_destruct;
- (void)_showTooltip:(id)arg1;
- (void)_update;
- (id)announcer;
- (long long)buttonState;
- (id)emoji;
- (void)hideTooltipIfNecessary;
- (id)initWithExploreDataStore:(id)arg1 mapLoggerEventSender:(id)arg2 mapPersonLocationsProvider:(id)arg3;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)mapStatusViewedStateFetcher:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)showNoUpdatesTooltip;
- (void)showTooltipIfNecessary;
- (id)tooltip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

