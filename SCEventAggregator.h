//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCLogger, SCQueuePerformer;

@interface SCEventAggregator : NSObject
{
    SCQueuePerformer *_queuePerformer;
    NSMutableDictionary *_events;
    CDUnknownBlockType _logEventsBlock;
    SCLogger *_logger;
    double _delaySeconds;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (CDUnknownBlockType)_createLogEventsBlock;
- (void)_logEvents;
- (void)_logEventsLater;
- (void)_logEventsNow;
- (void)_willResignActive;
@property double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
- (void)event:(id)arg1 parameters:(id)arg2;
- (id)init;
@property(retain) SCLogger *logger; // @synthesize logger=_logger;

@end

