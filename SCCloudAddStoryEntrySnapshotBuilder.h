//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile;

@interface SCCloudAddStoryEntrySnapshotBuilder : NSObject
{
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    NSArray *_snapPlaceholders;
    NSArray *_detailPlaceholders;
    NSArray *_miniThumbnailPlaceholders;
    NSDictionary *_dataVaultEncryption;
    NSDictionary *_duplicatedSnapIds;
    SCCloudSyncTriggerUserContext *_userContext;
}

+ (id)withCloudAddStoryEntrySnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDataVaultEncryption:(id)arg1;
- (id)setDetailPlaceholders:(id)arg1;
- (id)setDuplicatedSnapIds:(id)arg1;
- (id)setEntryPlaceholder:(id)arg1;
- (id)setMiniThumbnailPlaceholders:(id)arg1;
- (id)setProfile:(id)arg1;
- (id)setSnapPlaceholders:(id)arg1;
- (id)setUserContext:(id)arg1;

@end

