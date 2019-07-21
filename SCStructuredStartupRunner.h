//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SCAsyncCommandRunner, SCPerformerPool, SCStructuredStartupLogger;

@interface SCStructuredStartupRunner : NSObject
{
    SCStructuredStartupLogger *_logger;
    SCPerformerPool *_mainPerformerPool;
    unsigned long long _totalNumberOfCommands;
    SCAsyncCommandRunner *_underlyingCommandRunner;
    NSLock *_runnerLock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long count;
- (id)initWithLogger:(id)arg1 performerPool:(id)arg2;
- (void)insertCommand:(id)arg1;
- (void)insertCommand:(id)arg1 dependUponCommand:(id)arg2;
- (void)run:(id *)arg1;
@property(readonly, nonatomic) unsigned long long state;

@end
