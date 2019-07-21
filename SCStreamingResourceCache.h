//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingCaching-Protocol.h"

@class NSString;
@protocol SCCache;

@interface SCStreamingResourceCache : NSObject <SCStreamingCaching>
{
    id <SCCache> _cache;
}

- (void).cxx_destruct;
- (id)initWithCache:(id)arg1;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

