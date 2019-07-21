//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAArroyoFeedComparison : SCAUserTrackedEvent
{
    NSNumber *foundDiscrepancy;
    NSNumber *fsnEntriesTotal;
    NSNumber *arroyoEntriesTotal;
    NSNumber *fsnOnlyEntries;
    NSNumber *arroyoOnlyEntries;
    NSNumber *orderMismatch;
    NSNumber *fsnGroupVersionGreater;
    NSNumber *arroyoGroupVersionGreater;
    NSNumber *fsnLastEventUpdateTimestampGreater;
    NSNumber *arroyoLastEventUpdateTimestampGreater;
    NSNumber *oneOnOneUserMessageSeqMismatch;
    NSNumber *oneOnOneOtherUserMessageSeqMismatch;
    NSNumber *oneOnOneUserUpdateSeqMismatch;
    NSNumber *oneOnOneOtherUserUpdateSeqMismatch;
    NSNumber *groupUserMessageSeqMismatch;
    NSNumber *groupOtherUserMessageSeqMismatch;
    NSNumber *fsnOnlyReceivedSnapsEntries;
    NSNumber *arroyoOnlyReceivedSnapsEntries;
    NSNumber *fsnOnlySentSnapsEntries;
    NSNumber *arroyoOnlySentSnapsEntries;
    NSNumber *oneOnOneSnapStateViewedMismatch;
    NSNumber *oneOnOneSnapStateReplayedMismatch;
    NSNumber *oneOnOneSnapStateScreenshottedMismatch;
    NSNumber *oneOnOneSnapStateRecordedMismatch;
    long long feedFetchTriggerType;
    NSString *arroyoEntriesDebugInfo;
    NSString *fsnEntriesDebugInfo;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getArroyoEntriesDebugInfo;
- (long long)getArroyoEntriesTotal;
- (long long)getArroyoGroupVersionGreater;
- (long long)getArroyoLastEventUpdateTimestampGreater;
- (long long)getArroyoOnlyEntries;
- (long long)getArroyoOnlyReceivedSnapsEntries;
- (long long)getArroyoOnlySentSnapsEntries;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFeedFetchTriggerType;
- (_Bool)getFoundDiscrepancy;
- (id)getFsnEntriesDebugInfo;
- (long long)getFsnEntriesTotal;
- (long long)getFsnGroupVersionGreater;
- (long long)getFsnLastEventUpdateTimestampGreater;
- (long long)getFsnOnlyEntries;
- (long long)getFsnOnlyReceivedSnapsEntries;
- (long long)getFsnOnlySentSnapsEntries;
- (long long)getGroupOtherUserMessageSeqMismatch;
- (long long)getGroupUserMessageSeqMismatch;
- (long long)getOneOnOneOtherUserMessageSeqMismatch;
- (long long)getOneOnOneOtherUserUpdateSeqMismatch;
- (long long)getOneOnOneSnapStateRecordedMismatch;
- (long long)getOneOnOneSnapStateReplayedMismatch;
- (long long)getOneOnOneSnapStateScreenshottedMismatch;
- (long long)getOneOnOneSnapStateViewedMismatch;
- (long long)getOneOnOneUserMessageSeqMismatch;
- (long long)getOneOnOneUserUpdateSeqMismatch;
- (_Bool)getOrderMismatch;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setArroyoEntriesDebugInfo:(id)arg1;
- (void)setArroyoEntriesTotal:(long long)arg1;
- (void)setArroyoGroupVersionGreater:(long long)arg1;
- (void)setArroyoLastEventUpdateTimestampGreater:(long long)arg1;
- (void)setArroyoOnlyEntries:(long long)arg1;
- (void)setArroyoOnlyReceivedSnapsEntries:(long long)arg1;
- (void)setArroyoOnlySentSnapsEntries:(long long)arg1;
- (void)setFeedFetchTriggerType:(long long)arg1;
- (void)setFoundDiscrepancy:(_Bool)arg1;
- (void)setFsnEntriesDebugInfo:(id)arg1;
- (void)setFsnEntriesTotal:(long long)arg1;
- (void)setFsnGroupVersionGreater:(long long)arg1;
- (void)setFsnLastEventUpdateTimestampGreater:(long long)arg1;
- (void)setFsnOnlyEntries:(long long)arg1;
- (void)setFsnOnlyReceivedSnapsEntries:(long long)arg1;
- (void)setFsnOnlySentSnapsEntries:(long long)arg1;
- (void)setGroupOtherUserMessageSeqMismatch:(long long)arg1;
- (void)setGroupUserMessageSeqMismatch:(long long)arg1;
- (void)setOneOnOneOtherUserMessageSeqMismatch:(long long)arg1;
- (void)setOneOnOneOtherUserUpdateSeqMismatch:(long long)arg1;
- (void)setOneOnOneSnapStateRecordedMismatch:(long long)arg1;
- (void)setOneOnOneSnapStateReplayedMismatch:(long long)arg1;
- (void)setOneOnOneSnapStateScreenshottedMismatch:(long long)arg1;
- (void)setOneOnOneSnapStateViewedMismatch:(long long)arg1;
- (void)setOneOnOneUserMessageSeqMismatch:(long long)arg1;
- (void)setOneOnOneUserUpdateSeqMismatch:(long long)arg1;
- (void)setOrderMismatch:(_Bool)arg1;

@end

