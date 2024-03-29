//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataMigrating-Protocol.h"

@class SCDocObjectContext, SCLazy, SCQueuePerformer;

@interface SCLegacyFriendToSnapchatterMigrator : NSObject <SCSnapchattersDataMigrating>
{
    SCDocObjectContext *_docObjectContext;
    SCLazy *_friendsProvider;
    SCLazy *_blockedFriendsProvider;
    SCLazy *_contactNonSnapchatterProvider;
    SCLazy *_userInfoMutator;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_deleteAllSnapchatterDataWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didMigrateFriendToSnapchatterWithFriendsFilePath:(id)arg1 success:(_Bool)arg2;
- (void)_migrateFriendToSnapchatterAndDeleteFriendsFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkFriendsFileAndLog;
- (void)deleteAllSnapchatterDataWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 friendsProvider:(id)arg2 blockedFriendsProvider:(id)arg3 contactNonSnapchatterProvider:(id)arg4 userInfoMutator:(id)arg5;
- (void)migrateFriendToSnapchatterAndDeleteFriendsFile;
- (void)migrateFriendToSnapchatterWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

