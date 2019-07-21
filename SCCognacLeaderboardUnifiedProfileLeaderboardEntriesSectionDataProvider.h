//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSString, SCCognacServiceCoordinator, SCCognacSnapchatterService, SCEventListenerAnnouncer;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCCognacLeaderboardUnifiedProfileLeaderboardEntriesSectionDataProvider : NSObject <SCSectionDataProviding>
{
    id <SCImageDownloading> _imageDownloader;
    SCCognacSnapchatterService *_cognacSnapchatterService;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerCellViewModels;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_getContainerCellViewModelsWithLeaderboard:(id)arg1 leaderboardEntries:(id)arg2 snapchatters:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_getFriendLeaderboardEntriesWithLeaderboard:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_getSnapchattersWithUserIds:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setDataLoadingStatus:(long long)arg1 containerCellViewModels:(id)arg2;
- (void)_updateContainerCellViewModels;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (id)initWithImageDownloader:(id)arg1 cognacSnapchatterService:(id)arg2 cognacServiceCoordinator:(id)arg3;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

