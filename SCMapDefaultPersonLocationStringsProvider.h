//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapPeopleGroupsListener-Protocol.h"
#import "SCMapPersonLocationStringsProvider-Protocol.h"

@class NSString, SCMapPersonLocationStringsListenerAnnouncer;
@protocol SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider;

@interface SCMapDefaultPersonLocationStringsProvider : NSObject <SCMapPeopleFriendsListener, SCMapPeopleGroupsListener, SCMapPersonLocationStringsProvider>
{
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    id <SCMapPeopleGroupsProvider> _groupsProvider;
    NSString *_currentUserId;
    SCMapPersonLocationStringsListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (id)announcer;
- (id)calloutBodyFromPersonLocations:(id)arg1;
- (id)calloutSubtitleFromPersonLocations:(id)arg1 currentUserSharingLocation:(_Bool)arg2;
- (id)calloutTitleFromPersonLocations:(id)arg1;
- (id)initWithFriendsProvider:(id)arg1 groupsProvider:(id)arg2 userId:(id)arg3;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (void)peopleGroupsProviderDidUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

