//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCPreferences, SCQueuePerformer;

@interface SCStoryLoggingController : NSObject
{
    SCPreferences *_preferences;
    SCQueuePerformer *_performer;
    _Bool _dedupExperimentEnabled;
}

- (void).cxx_destruct;
- (void)_checkStoryClientIdInPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearStoryClientIdsFromPreferences:(id)arg1;
- (_Bool)_isEnabledByDedupExperiment:(id)arg1;
- (void)checkStoryPostBeenLoggedForClientId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearStoryClientIds:(id)arg1;
- (id)initWithPreferences:(id)arg1 experimentManager:(id)arg2;

@end

