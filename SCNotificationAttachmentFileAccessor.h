//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNotificationAttachmentFileAccessor : NSObject
{
    NSString *_groupIdentifier;
    NSString *_folderName;
}

- (void).cxx_destruct;
- (id)_attachmentFolderPath;
- (id)_contentPath;
- (_Bool)_ensureFolderExists:(id)arg1 error:(id *)arg2;
- (id)_getAndEnsureAttachmentFolderPath;
- (id)_getAndEnsureContentFolderPath;
- (id)bitmojiFolderPathForSource:(unsigned long long)arg1;
- (void)clearFiles;
- (void)clearFilesForPath:(id)arg1;
- (id)dataForIdentifier:(id)arg1 source:(unsigned long long)arg2;
- (id)fileURLForIdentifier:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithAppGroupIdentifier:(id)arg1 folderName:(id)arg2;
- (_Bool)saveSharedData:(id)arg1 identifier:(id)arg2 error:(id)arg3;

@end
