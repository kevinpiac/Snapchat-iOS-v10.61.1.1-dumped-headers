//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMPUploaderDetailsDelegate-Protocol.h"

@class AMPEventConfigurer, AMPEventLogger, AMPExperimentProvider, NSString, SCLogger;

@interface AMPUploadDetailsLogger : NSObject <AMPUploaderDetailsDelegate>
{
    AMPEventConfigurer *_eventConfigurer;
    AMPEventLogger *_eventLogger;
    SCLogger *_scLogger;
    NSString *_logQueueName;
    AMPExperimentProvider *_experimentProvider;
}

- (void).cxx_destruct;
- (_Bool)_is2XXStatus:(long long)arg1;
- (void)_logBlizzardRequestMetrics:(id)arg1;
@property(retain, nonatomic) AMPEventConfigurer *eventConfigurer; // @synthesize eventConfigurer=_eventConfigurer;
@property(retain, nonatomic) AMPEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
- (id)initWithConfigurer:(id)arg1 eventLogger:(id)arg2 logQueueName:(id)arg3 scLogger:(id)arg4 experimentProvider:(id)arg5;
@property(readonly, nonatomic) NSString *logQueueName; // @synthesize logQueueName=_logQueueName;
@property(retain, nonatomic) SCLogger *scLogger; // @synthesize scLogger=_scLogger;
- (void)uploader:(id)arg1 didCompleteUploadWithDetails:(id)arg2;

@end

