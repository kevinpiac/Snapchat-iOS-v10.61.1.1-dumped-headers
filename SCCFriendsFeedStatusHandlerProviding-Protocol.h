//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSArray, SCCFriendsFeedStatus;

@protocol SCCFriendsFeedStatusHandlerProviding <NSObject, SCComposerJsConvertible>
- (SCCFriendsFeedStatus *)getDefaultFeedStatus;
- (void)getHandlerForGroupsWithIds:(NSArray *)arg1 callback:(void (^)(id <SCCFriendsFeedStatusHandling>, NSDictionary *))arg2;
- (void)getHandlerForUsersWithIds:(NSArray *)arg1 callback:(void (^)(id <SCCFriendsFeedStatusHandling>, NSDictionary *))arg2;
@end

