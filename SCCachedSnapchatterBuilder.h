//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCachedSnapchatterBuilder : NSObject
{
    _Bool _exists;
    NSString *_username;
    NSString *_displayName;
    long long _lastFetchedTimestamp;
}

+ (id)withCachedSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDisplayName:(id)arg1;
- (id)setExists:(_Bool)arg1;
- (id)setLastFetchedTimestamp:(long long)arg1;
- (id)setUsername:(id)arg1;

@end

