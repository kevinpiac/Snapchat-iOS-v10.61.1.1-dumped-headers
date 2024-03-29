//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersFriendScoreCoordinating-Protocol.h"

@class SCDocObjectContext, SCQueuePerformer, SCSnapchattersFetchService, SCTimeProvider;

@interface SCSnapchattersFriendScoreCoordinator : NSObject <SCSnapchattersFriendScoreCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    SCSnapchattersFetchService *_fetchService;
    SCTimeProvider *_currentDateProvider;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_friendScoreWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processFetchFriendScoreResponse:(id)arg1 snapchatter:(id)arg2 currentDateProvider:(id)arg3 error:(id)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)friendScoreWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDocObjectContext:(id)arg1 fetchService:(id)arg2 currentDateProvider:(id)arg3;

@end

