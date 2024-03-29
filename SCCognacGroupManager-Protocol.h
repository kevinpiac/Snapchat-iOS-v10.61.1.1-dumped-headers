//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCCognacGroup;

@protocol SCCognacGroupManager <NSObject>
- (void)createGroupWithFriends:(NSArray *)arg1 completion:(void (^)(_Bool, NSString *, NSArray *))arg2;
- (id <SCCognacGroup>)existingGroupForFriends:(NSArray *)arg1;
- (id <SCCognacGroup>)groupForGroupId:(NSString *)arg1;
- (NSArray *)groupsForGroupIds:(NSArray *)arg1;
@end

