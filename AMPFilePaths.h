//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMPFilePaths : NSObject
{
    NSString *_storageRoot;
    NSString *_fileNamespace;
    NSString *_libraryDirectory;
    NSString *_cacheDirectory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(readonly, nonatomic) NSString *fileNamespace; // @synthesize fileNamespace=_fileNamespace;
- (id)initWithStorageRoot:(id)arg1 fileNamespace:(id)arg2;
@property(retain, nonatomic) NSString *libraryDirectory; // @synthesize libraryDirectory=_libraryDirectory;
@property(copy, nonatomic) NSString *storageRoot; // @synthesize storageRoot=_storageRoot;
- (id)v0EventsDataPath;
- (id)v0PropertyListPath;
- (id)v1EventsDataPath;
- (id)v1PropertyListPath;
- (id)v2EventListDictionaryPath;
- (id)v2EventListPlistPath;
- (id)v2SessionInfoPath;
- (id)v3BGUploadEventListDictionaryPath;
- (id)v3EventListDictionaryPath;
- (id)v3EventListPlistPath;
- (id)v3SessionInfoPath;
- (id)versionPropertyListPath;

@end

