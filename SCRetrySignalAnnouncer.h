//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, SCQueuePerformer;

@interface SCRetrySignalAnnouncer : NSObject
{
    NSHashTable *_listeners;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (void)announceSignal:(unsigned long long)arg1;
- (id)init;
- (void)removeListener:(id)arg1;

@end

