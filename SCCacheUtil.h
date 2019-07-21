//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCCacheUtil : NSObject
{
}

+ (_Bool)_migrateDiskCache:(id)arg1 to:(id)arg2;
+ (id)_scopedCacheURLForName:(id)arg1 baseDirectory:(id)arg2;
+ (id)cacheURLForName:(id)arg1;
+ (CDUnknownBlockType)diskCacheDeserializer;
+ (CDUnknownBlockType)diskCacheSerializer;
+ (_Bool)doesCacheExist:(id)arg1 baseDirectory:(id)arg2;
+ (void)forceUserSessionDataRemoval:(id)arg1;
+ (_Bool)migrateCache:(id)arg1 toNewName:(id)arg2 baseDirectory:(id)arg3;
+ (id)prepareDiskCacheInstance:(id)arg1 evictPolicy:(CDUnknownBlockType)arg2;
+ (id)prepareScopedDiskCacheInstance:(id)arg1 baseDirectory:(id)arg2 evictPolicy:(CDUnknownBlockType)arg3;
+ (id)rootSCCachePath;

@end
