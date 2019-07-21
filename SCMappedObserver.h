//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"

@class SCObservable;
@protocol SCObserver;

@interface SCMappedObserver : NSObject <SCObserver>
{
    SCObservable *_observable;
    id <SCObserver> _observer;
    CDUnknownBlockType _mapper;
}

- (void).cxx_destruct;
- (void)complete;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 mapper:(CDUnknownBlockType)arg3;
- (void)next:(id)arg1;

@end

