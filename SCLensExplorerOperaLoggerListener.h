//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSString, SCLensExplorerOperaViewingSession, SCLensExplorerStoryPlayerContext;
@protocol SCLensExplorerLoggerProtocol;

@interface SCLensExplorerOperaLoggerListener : NSObject <SCEventListener>
{
    id <SCLensExplorerLoggerProtocol> _lensExplorerLogger;
    SCLensExplorerStoryPlayerContext *_playerContext;
    SCLensExplorerOperaViewingSession *_viewingSession;
}

- (void).cxx_destruct;
- (void)_createItemViewingSessionWithData:(id)arg1;
- (void)_handleFeedItemActionWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleImpressionEventWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleViewingSessionUpdateWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_logFeedItemViewingSessionWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_updateLoggerInfoWithIdentifier:(id)arg1 data:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithLensExplorerLogger:(id)arg1 playerContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

