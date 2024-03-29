//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCKeyValuePersisting-Protocol.h"

@class NSString, NSURL;

@interface SCFileBasedKeyValueStore : NSObject <SCKeyValuePersisting>
{
    NSURL *_directoryURL;
}

- (void).cxx_destruct;
- (id)_fileURLWithKey:(id)arg1;
- (id)allKeys;
- (id)initWithDirectoryURL:(id)arg1;
- (id)objectForKey:(id)arg1 deserializeToClass:(Class)arg2;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

