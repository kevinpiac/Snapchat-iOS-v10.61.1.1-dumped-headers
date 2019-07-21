//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

@class NSString;

@interface SCOperaPerfTestsLogger : SCOperaPlaylistEventTrackerPlugin
{
    NSString *_currentDisplayingPageId;
    double _eventStartTime;
}

- (void).cxx_destruct;
- (void)_logEndEvent:(id)arg1 pageID:(id)arg2 mediaType:(id)arg3 pageType:(id)arg4;
- (void)_startTrackingEventWithPageID:(id)arg1;
- (id)init;
- (_Bool)isHighPriorityEventListener;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)setPlaylistItemController:(id)arg1;

@end

