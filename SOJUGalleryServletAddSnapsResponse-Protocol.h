//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUGalleryServletBaseResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@protocol SOJUGalleryServletAddSnapsResponse <NSObject, NSCoding, NSCopying, SOJUGalleryServletBaseResponse>
@property(readonly, copy, nonatomic) NSNumber *backoffTime;
@property(readonly, copy, nonatomic) NSString *debugInfo;
@property(readonly, copy, nonatomic) NSNumber *lastSeqnum;
@property(readonly, copy, nonatomic) SOJUGalleryServletQuota *quota;
@property(readonly, copy, nonatomic) NSNumber *serviceStatusCode;
@property(readonly, copy, nonatomic) NSArray *snaps;
@property(readonly, copy, nonatomic) NSString *storageType;
@property(readonly, copy, nonatomic) NSNumber *totalEntryCount;
@property(readonly, copy, nonatomic) NSString *userString;
@end

