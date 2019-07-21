//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SCIdleMonitorExecutionRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callbackBlock;
    _Bool _isMainThread;
    const char *_tag;
}

- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2 tag:(const char *)arg3 isMainThread:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isMainThread; // @synthesize isMainThread=_isMainThread;
- (void)perform;
@property(readonly, nonatomic) const char *tag; // @synthesize tag=_tag;

@end
