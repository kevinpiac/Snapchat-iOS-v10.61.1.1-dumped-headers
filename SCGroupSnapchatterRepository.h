//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;
@protocol SCGroupManager;

@interface SCGroupSnapchatterRepository : NSObject
{
    id <SCGroupManager> _groupManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_snapchatterForParticipant:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_snapchatterWithGroup:(id)arg1 userId:(id)arg2 participantConversionBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_snapchatterWithGroup:(id)arg1 username:(id)arg2 participantConversionBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_snapchattersForGroup:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2;
- (void)_snapchattersWithGroup:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_snapchattersWithGroups:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithGroupManager:(id)arg1;
- (void)snapchatterWithGroupId:(id)arg1 userId:(id)arg2 participantConversionBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)snapchatterWithGroupId:(id)arg1 username:(id)arg2 participantConversionBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)snapchattersWithGroupId:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)snapchattersWithGroupIds:(id)arg1 participantConversionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
