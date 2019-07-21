//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString;

@protocol SCGalleryEntry <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *autosaveTimeUtc;
@property(readonly, copy, nonatomic) NSString *bitmojiComicId;
@property(readonly, copy, nonatomic) NSDate *createTimeUtc;
@property(readonly, copy, nonatomic) NSString *creatorUserId;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption;
@property(readonly, copy, nonatomic) NSDate *duplicateTimeUtc;
@property(readonly, copy, nonatomic) NSDate *earliestSnapCreateTimeUtc;
@property(readonly, copy, nonatomic) NSString *entryId;
@property(readonly, nonatomic) int entrySource;
@property(readonly, copy, nonatomic) NSString *externalId;
@property(readonly, copy, nonatomic) NSDate *featuredExpirationTimeUtc;
@property(readonly, nonatomic) int galleryType;
@property(readonly, nonatomic) _Bool isAutoClusterPrototype;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isTemporary;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) int pendingSyncs;
@property(readonly, copy, nonatomic) NSString *retryFromEntryId;
@property(readonly, copy, nonatomic) NSString *saverUserId;
@property(readonly, nonatomic) long long seqNum;
@property(readonly, copy, nonatomic) NSString *snapsHash;
@property(readonly, copy, nonatomic) NSDictionary *snapsInfo;
@property(readonly, nonatomic) int sources;
@property(readonly, copy, nonatomic) NSDate *syncedAutosaveTimeUtc;
@property(readonly, nonatomic) _Bool syncedIsPrivate;
@property(readonly, copy, nonatomic) NSString *syncedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) int viewType;
@end
