//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCShakeAsyncLogManager : NSObject
{
    NSMutableDictionary *shakeIdToSemaphore;
    NSMutableDictionary *shakeIdToNumLogs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)dumpLogsAsyncForShakeId:(id)arg1 project:(id)arg2 asyncLogSources:(id)arg3 inPath:(id)arg4;
- (id)init;
- (void)waitLogsForShakeId:(id)arg1;

@end

