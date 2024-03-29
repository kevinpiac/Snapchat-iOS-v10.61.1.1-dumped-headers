//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSFileHandle, NSString, SCSpectaclesCache;

@interface SCSpectaclesFile : NSObject <NSCoding>
{
    NSString *_localFilename;
    NSString *_remoteFileName;
    long long _remoteFileSize;
    SCSpectaclesCache *_cache;
    long long _lastKnownFileSize;
    NSFileHandle *_fileHandle;
}

+ (id)_extensionForType:(unsigned long long)arg1;
+ (id)_performer;
+ (id)_suffixForType:(unsigned long long)arg1;
+ (id)contentNameFromRemoteFilename:(id)arg1;
+ (unsigned long long)fileTypeFromRemoteFilename:(id)arg1;
- (void).cxx_destruct;
- (void)_closeFile;
- (_Bool)_openFile;
- (_Bool)appendData:(id)arg1 range:(struct _NSRange)arg2;
@property(retain, nonatomic) SCSpectaclesCache *cache; // @synthesize cache=_cache;
- (id)dataFromLocalFileWithRange:(struct _NSRange)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (id)initWithCache:(id)arg1 localFilename:(id)arg2 remoteFilename:(id)arg3 remoteFileSize:(long long)arg4;
- (id)initWithCoder:(id)arg1;
@property long long lastKnownFileSize; // @synthesize lastKnownFileSize=_lastKnownFileSize;
- (id)localFilePath;
- (long long)localFileSize;
@property(copy, nonatomic) NSString *localFilename; // @synthesize localFilename=_localFilename;
@property(copy, nonatomic) NSString *remoteFileName; // @synthesize remoteFileName=_remoteFileName;
@property(nonatomic) long long remoteFileSize; // @synthesize remoteFileSize=_remoteFileSize;
- (void)removeFromDisk;

@end

