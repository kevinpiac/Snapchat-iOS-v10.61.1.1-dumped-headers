//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserTaggingFriendsProvider-Protocol.h"

@class NSString, SCSortableRecipientFilter, SCUserSession;

@interface SCManagerBasedUserTaggingFriendsProvider : NSObject <SCUserTaggingFriendsProvider>
{
    SCUserSession *_userSession;
    SCSortableRecipientFilter *_friendsFilter;
}

- (void).cxx_destruct;
- (id)_constructDefaultFriendList;
- (id)bitmojiSelfieManager;
- (id)blockedStoryFriends;
- (id)friendsListForUsertaggingWithQueryName:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isStoryPrivacyCustom;
- (_Bool)shouldShowUserTaggingOnboardingTooltip;
- (id)userTagsFromText:(id)arg1 excludeCarouselTaggedUsers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

