//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPExperimentProvider, NSMutableDictionary;

@interface SCBlizzardABEventManager : NSObject
{
    AMPExperimentProvider *_experimentProvider;
    NSMutableDictionary *_eventsData;
}

- (void).cxx_destruct;
- (void)_loadCache;
- (_Bool)_validateEvent:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *eventsData; // @synthesize eventsData=_eventsData;
@property(readonly, nonatomic) AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
- (id)initWithExperimentProvider:(id)arg1;
- (void)resetCache;
- (void)resetCacheWithUserId:(id)arg1;
- (_Bool)shouldLogEvent:(id)arg1;
- (void)storeCache;

@end

