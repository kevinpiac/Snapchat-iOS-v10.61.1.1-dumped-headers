//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchatterUserInfoMutator-Protocol.h"

@class User;

@interface SCLegacySnapchatterUserInfoMutatorAdaptor : NSObject <SCSnapchatterUserInfoMutator>
{
    User *_user;
    struct mutex _isContactSyncEnabledLock;
    struct mutex _storyPrivacyLock;
    struct mutex _shouldShowQuickAddUnitLock;
    struct mutex _suggestedFriendSyncVersionLock;
    struct mutex _lastFindFriendsFullSyncTimestampLock;
    struct mutex _registrationSuggestionPagePositionLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg1;
- (void)setIsContactSyncEnabled:(_Bool)arg1;
- (void)setLastFindFriendsFullSyncTimestamp:(id)arg1;
- (void)setShouldShowQuickAddUnit:(_Bool)arg1;
- (void)setStoryPrivacy:(long long)arg1;
- (void)setSuggestedFriendSyncVersion:(long long)arg1;
- (void)updateWithRegistrationSuggestionPagePosition:(long long)arg1;

@end

