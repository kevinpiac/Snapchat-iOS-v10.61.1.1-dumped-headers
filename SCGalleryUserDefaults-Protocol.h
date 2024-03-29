//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCGalleryUserDefaults <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool completedImportFromCameraRoll;
@property(readonly, nonatomic) _Bool didInitialCloudSync;
@property(readonly, nonatomic) _Bool dismissedImportButtonBelowSnaps;
@property(readonly, nonatomic) _Bool displayedCameraRollTabIntroPopup;
@property(readonly, nonatomic) _Bool displayedInitialCreateStoryPopup;
@property(readonly, nonatomic) _Bool displayedInitialNeedsPhotoAccessPopup;
@property(readonly, nonatomic) _Bool displayedPostLongVideoToStoryPopup;
@property(readonly, nonatomic) _Bool displayedSaveOptionPrompt;
@property(readonly, copy, nonatomic) NSDate *latestAckedBackupErrorTime;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, copy, nonatomic) NSString *readFeaturedStoryIds;
@property(readonly, copy, nonatomic) NSString *viewedFeaturedStoryIds;
@end

