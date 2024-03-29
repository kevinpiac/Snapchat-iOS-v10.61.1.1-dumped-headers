//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAirLogWriter-Protocol.h"

@class NSArray, SCQueuePerformer;

@interface SCSnapchatInternalShakeLogWriter : NSObject <SCSnapAirLogWriter>
{
    SCQueuePerformer *_performer;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_dumpAllLogs:(id)arg1;
- (void)_dumpArroyoLogs:(id)arg1;
- (void)_dumpAudioSessionInfo:(id)arg1;
- (void)_dumpBroadcastInfo:(id)arg1;
- (void)_dumpDiscoverFeedLogs:(id)arg1;
- (void)_dumpExpreimentContexts:(id)arg1;
- (void)_dumpFideliusLogs:(id)arg1;
- (void)_dumpFunctionTraceLogs:(id)arg1;
- (void)_dumpManagedCapturededInfo:(id)arg1;
- (void)_dumpNetWorkTraceLogs:(id)arg1;
- (void)_dumpSceneIntelligenceLogs:(id)arg1;
- (void)_dumpShazamAudio:(id)arg1;
- (void)_dumpStudySettings:(id)arg1;
- (void)_dumpVPSLogs:(id)arg1;
- (id)_trimTimestampForNetworkTraceFile:(id)arg1;
- (_Bool)_writeDataWithFileName:(id)arg1 data:(id)arg2 baseUrl:(id)arg3;
@property(readonly, nonatomic) NSArray *asyncLogSources;
- (id)init;
- (_Bool)writeLogsToURL:(id)arg1;

@end

