//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesTransferSession.h"

@class NSDate, NSMutableArray, NSUUID, SCSpectaclesDevice, SCSpectaclesTaskMediaTransfer;

@interface SCSpectaclesMutableTransferSession : SCSpectaclesTransferSession
{
    long long _transferChannel;
    SCSpectaclesTaskMediaTransfer *_currentMediaTask;
    SCSpectaclesTaskMediaTransfer *_previousMediaTask;
    SCSpectaclesDevice *_internalDevice;
    NSMutableArray *_completedTasksInternal;
    NSUUID *_batchIDInternal;
    NSDate *_internalSessionStartTime;
    unsigned long long _transferTypeInternal;
    unsigned long long _getHdStartSourceInternal;
}

- (void).cxx_destruct;
- (id)batchID;
@property(retain, nonatomic) NSUUID *batchIDInternal; // @synthesize batchIDInternal=_batchIDInternal;
- (long long)channel;
- (id)completedTasks;
@property(retain, nonatomic) NSMutableArray *completedTasksInternal; // @synthesize completedTasksInternal=_completedTasksInternal;
- (unsigned long long)component;
@property(retain, nonatomic) SCSpectaclesTaskMediaTransfer *currentMediaTask; // @synthesize currentMediaTask=_currentMediaTask;
- (id)currentlyTransferringContent;
- (id)device;
- (unsigned long long)getHdStartSource;
@property(nonatomic) unsigned long long getHdStartSourceInternal; // @synthesize getHdStartSourceInternal=_getHdStartSourceInternal;
- (id)initWithDevice:(id)arg1 transferType:(unsigned long long)arg2;
@property(retain, nonatomic) SCSpectaclesDevice *internalDevice; // @synthesize internalDevice=_internalDevice;
@property(retain, nonatomic) NSDate *internalSessionStartTime; // @synthesize internalSessionStartTime=_internalSessionStartTime;
- (_Bool)isContentPartOfCurrentTransferBatch:(id)arg1 component:(unsigned long long)arg2;
- (void)markTaskComplete:(id)arg1;
- (long long)numberOfContentBeingTransferred;
- (long long)numberOfContentTransferred;
- (long long)numberOfContentTransferredForComponent:(unsigned long long)arg1;
@property(retain, nonatomic) SCSpectaclesTaskMediaTransfer *previousMediaTask; // @synthesize previousMediaTask=_previousMediaTask;
- (id)previouslyTransferringContent;
- (float)progress;
- (id)sessionStartTime;
@property(nonatomic) long long transferChannel; // @synthesize transferChannel=_transferChannel;
@property(nonatomic) unsigned long long transferTypeInternal; // @synthesize transferTypeInternal=_transferTypeInternal;
- (unsigned long long)transferType;
- (id)transferredContent;
- (id)untransferredContent;
- (id)untransferredCountByComponent;

@end

