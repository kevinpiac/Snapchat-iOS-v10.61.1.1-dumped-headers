//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, SCGalleryUserDefaults, SCGalleryUserDefaultsManagerListenerAnnouncer, SCUserSession;
@protocol SCObserving;

@interface SCGalleryUserDefaultsManager : NSObject
{
    SCUserSession *_userSession;
    SCGalleryUserDefaultsManagerListenerAnnouncer *_announcer;
    SCGalleryUserDefaults *_userDefaults;
    id <SCObserving> _observeContext;
    long long _onceToken;
    NSData *_myEyesOnlyFingerprintHash;
}

- (void).cxx_destruct;
- (void)_announceUpdateWithOldUserDefaults:(id)arg1 newUserDefaults:(id)arg2;
- (void)_setupUserDefaultsIfNeeded;
- (void)addListener:(id)arg1;
@property(nonatomic) _Bool completedImportFromCameraRoll;
- (void)dealloc;
@property(nonatomic) _Bool didInitialCloudSync;
@property(nonatomic) _Bool dismissedImportButtonBelowSnaps;
@property(nonatomic) _Bool displayedCameraRollTabIntroPopup;
@property(nonatomic) _Bool displayedInitialCreateStoryPopup;
@property(nonatomic) _Bool displayedInitialNeedsPhotoAccessPopup;
@property(nonatomic) _Bool displayedPostLongVideoToStoryPopup;
@property(nonatomic) _Bool displayedSaveOptionPrompt;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) NSDate *latestAckedBackupErrorTime;
@property(retain, nonatomic) NSData *myEyesOnlyFingerprintHash; // @synthesize myEyesOnlyFingerprintHash=_myEyesOnlyFingerprintHash;
@property(retain, nonatomic) NSString *readFeaturedStoryIds;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) NSString *viewedFeaturedStoryIds;

@end

