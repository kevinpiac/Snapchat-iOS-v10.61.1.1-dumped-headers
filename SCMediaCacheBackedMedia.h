//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachableMedia-Protocol.h"

@class NSString, SCCache;

@interface SCMediaCacheBackedMedia : NSObject <SCCachableMedia>
{
    SCCache *_cache;
    NSString *_cacheKey;
}

- (void).cxx_destruct;
- (void)dataFromCacheCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCacheKey:(id)arg1;
- (void)saveDataToCache:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

