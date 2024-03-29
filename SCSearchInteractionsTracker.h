//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSString, SCPreferences;
@protocol SCPerforming;

@interface SCSearchInteractionsTracker : NSObject <SCEventListener>
{
    id <SCPerforming> _performer;
    SCPreferences *_userPreferences;
    NSString *_lastSessionId;
}

- (void).cxx_destruct;
- (void)_trackInteraction;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserPreferences:(id)arg1;
- (id)interactionDates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

