//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectActivityMonitor-Protocol.h"

@class NSString;
@protocol SCGraphene;

@interface SCDocObjectLoggingActivityMonitor : NSObject <SCDocObjectActivityMonitor>
{
    CDUnknownFunctionPointerType _errorLogger;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)docObjectContextDidDequeueChangesBlockWithDuration:(double)arg1;
- (void)docObjectContextDidEncounterDiskFull;
- (void)docObjectContextDidEncounterError:(struct Error)arg1 fatal:(_Bool)arg2;
- (void)docObjectContextDidExecutePerformChangesWithDuration:(double)arg1;
- (void)docObjectContextDidFetchWithDuration:(double)arg1;
- (void)docObjectContextTransactionCommitDuration:(double)arg1;
- (id)initWithErrorLogger:(CDUnknownFunctionPointerType)arg1 graphene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
