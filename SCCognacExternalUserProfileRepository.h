//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCCognacExternalUserProfileRepository : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_appIdToProfileInfos;
}

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_setUserProfile:(id)arg1;
- (id)_userProfileWithAppId:(id)arg1;
- (void)cleanUp;
- (id)init;
- (void)setUserProfile:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)userProfileWithAppId:(id)arg1 avatarId:(id)arg2;

@end

