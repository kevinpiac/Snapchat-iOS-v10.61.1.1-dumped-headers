//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCGalleryProfileBuilder : NSObject
{
    NSString *_objectID;
    NSDate *_lastBackupNotificationTime;
    NSDate *_lastFeaturedStorySyncTime;
    NSDate *_lastFullSyncTime;
    long long _lastUpdateSeqNum;
    int _snapTotalQuota;
    NSString *_syncToken;
    NSString *_userId;
}

+ (id)withGalleryProfile:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setLastBackupNotificationTime:(id)arg1;
- (id)setLastFeaturedStorySyncTime:(id)arg1;
- (id)setLastFullSyncTime:(id)arg1;
- (id)setLastUpdateSeqNum:(long long)arg1;
- (id)setObjectID:(id)arg1;
- (id)setSnapTotalQuota:(int)arg1;
- (id)setSyncToken:(id)arg1;
- (id)setUserId:(id)arg1;

@end
