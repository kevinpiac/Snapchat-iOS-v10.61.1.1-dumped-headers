//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCloudFSFileAttributesBuilder : NSObject
{
    long long _storageSize;
    int _level;
    long long _order;
    _Bool _isSynced;
    _Bool _isExpired;
    NSString *_entityName;
    double _evictionTime;
}

+ (id)withCloudFSFileAttributes:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEntityName:(id)arg1;
- (id)setEvictionTime:(double)arg1;
- (id)setIsExpired:(_Bool)arg1;
- (id)setIsSynced:(_Bool)arg1;
- (id)setLevel:(int)arg1;
- (id)setOrder:(long long)arg1;
- (id)setStorageSize:(long long)arg1;

@end

