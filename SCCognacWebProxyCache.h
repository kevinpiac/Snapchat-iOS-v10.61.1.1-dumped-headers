//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCache;

@interface SCCognacWebProxyCache : NSObject
{
    SCCache *_cache;
}

- (void).cxx_destruct;
- (void)containsDataForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dataForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithCache:(id)arg1;
- (void)removeAllDataWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 expiration:(id)arg3 block:(CDUnknownBlockType)arg4;
- (unsigned long long)sizeInBytes;

@end
