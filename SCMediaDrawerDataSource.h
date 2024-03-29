//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSArray, NSString, PHFetchResult, SCMediaDrawerDataSourceListenerAnnouncer;
@protocol SCMediaDrawerDataSourceDelegate, SCPerforming;

@interface SCMediaDrawerDataSource : NSObject <PHPhotoLibraryChangeObserver>
{
    id <SCPerforming> _performer;
    NSArray *_mediaList;
    _Bool _didFinishFetchingFromCameraRoll;
    SCMediaDrawerDataSourceListenerAnnouncer *_announcer;
    unsigned long long _fetchRetryAttempts;
    id <SCMediaDrawerDataSourceDelegate> _delegate;
    PHFetchResult *_phAssets;
}

+ (_Bool)isInitialized;
+ (id)shared;
- (void).cxx_destruct;
- (void)_loadMediaFromCameraRollWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mediasFromPHAssets:(id)arg1;
- (void)_resetMediaListFromPHAssets:(id)arg1;
- (void)_updatePhotoLibraryWithChange:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCMediaDrawerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)mediaList;
@property(retain) PHFetchResult *phAssets; // @synthesize phAssets=_phAssets;
- (void)photoLibraryDidChange:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)removeMedia:(id)arg1;
- (void)updateMediaListWithChangeDetails:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

