//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface SCGCDBlockTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 callbackQueue:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3 repeats:(_Bool)arg4;
- (void)invalidate;

@end

