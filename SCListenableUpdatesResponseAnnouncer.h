//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUpdatesResponseListenerAnnouncer.h"

@class SCUpdatesResponseListenerAnnouncerChangeListenerAnnouncer;

@interface SCListenableUpdatesResponseAnnouncer : SCUpdatesResponseListenerAnnouncer
{
    SCUpdatesResponseListenerAnnouncerChangeListenerAnnouncer *_listenerChangeAnnouncer;
}

- (void).cxx_destruct;
- (void)addAnnouncerListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)init;
@property(retain, nonatomic) SCUpdatesResponseListenerAnnouncerChangeListenerAnnouncer *listenerChangeAnnouncer; // @synthesize listenerChangeAnnouncer=_listenerChangeAnnouncer;
- (void)removeAnnouncerListener:(id)arg1;
- (void)removeListener:(id)arg1;

@end

