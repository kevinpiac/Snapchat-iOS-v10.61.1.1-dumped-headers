//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCStoriesCallbackArray : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_callbacksByKey;
}

- (void).cxx_destruct;
- (void)addCallback:(id)arg1 forKey:(id)arg2;
- (id)callbacksToInvokeForKey:(id)arg1;
- (_Bool)hasPendingCallbacksForKey:(id)arg1;
- (id)initWithPerformer:(id)arg1;

@end
