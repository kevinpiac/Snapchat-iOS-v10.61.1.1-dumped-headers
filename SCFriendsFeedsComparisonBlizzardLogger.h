//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLogger;

@interface SCFriendsFeedsComparisonBlizzardLogger : NSObject <SCTraceEnabled>
{
    SCLogger *_logger;
}

- (void).cxx_destruct;
- (void)_logFeedEntriesEntryToEntryComparison:(id)arg1 blizzardMetric:(id)arg2;
- (void)_logFeedEntriesOrderComparison:(id)arg1 blizzardMetric:(id)arg2;
- (void)_logFeedEntriesSetComparison:(id)arg1 blizzardMetric:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (void)performComparisonLoggingWithParams:(id)arg1 arroyoDebugInfo:(id)arg2 fsnDebugInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

