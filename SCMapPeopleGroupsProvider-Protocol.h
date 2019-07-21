//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCMapPeopleGroupsListenerAnnouncer, SCStoriesThumbnailInfo;

@protocol SCMapPeopleGroupsProvider <NSObject>
- (_Bool)canCreateGroupChatForPeople:(NSArray *)arg1;
- (NSString *)displayNameForExistingGroupChatContainingPeople:(NSArray *)arg1;
- (NSString *)groupIdForGroupChatContainingPeople:(NSArray *)arg1 ignoreLocal:(_Bool)arg2;
- (SCMapPeopleGroupsListenerAnnouncer *)groupsListenerAnnouncer;
- (_Bool)isStoryUnviewedForGroupId:(NSString *)arg1;
- (NSArray *)orderedPeopleForGroupId:(NSString *)arg1;
- (SCStoriesThumbnailInfo *)storyThumbnailForGroupId:(NSString *)arg1;
@end

