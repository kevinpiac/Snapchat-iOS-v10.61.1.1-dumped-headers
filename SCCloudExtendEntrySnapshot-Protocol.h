//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@protocol SCCloudExtendEntrySnapshot <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *autosaveTimeUtc;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption;
@property(readonly, copy, nonatomic) NSArray *detailPlaceholders;
@property(readonly, copy, nonatomic) NSDictionary *duplicatedSnapIds;
@property(readonly, copy, nonatomic) NSString *entryId;
@property(readonly, copy, nonatomic) NSArray *miniThumbnailPlaceholders;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
@property(readonly, copy, nonatomic) NSArray *snapPlaceholders;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext;
@end

