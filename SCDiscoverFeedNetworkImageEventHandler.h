//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, UIView;

@interface SCDiscoverFeedNetworkImageEventHandler : NSObject <SCEventListener>
{
    UIView *_parentView;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

- (void).cxx_destruct;
- (void)_calculateCellFrameAndDispatchEventIfNecessary:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithView:(id)arg1 eventAnnouncer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
