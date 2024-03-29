//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCCharmsDataCoordinator, SCCharmsViewingDataCoordinator, SCEventListenerAnnouncer, SCFriendUnifiedProfileDataSource, SCSnapchatter;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCFriendUnifiedProfileCharmsSectionDataProvider : NSObject <SCUpdateListener, SCDataCoordinatorListener, SCSectionDataProviding>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCCharmsDataCoordinator *_charmsDataCoordinator;
    SCCharmsViewingDataCoordinator *_charmsViewingDataCoordinator;
    id <SCImageDownloading> _imageDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSnapchatter *_user;
    SCSnapchatter *_friend;
    NSArray *_charms;
    unsigned long long _hiddenCharmsCount;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_rankCharms:(id)arg1;
- (void)_syncCharms;
- (void)_updateRankedCharms:(id)arg1 hiddenCharmsCount:(unsigned long long)arg2 friend:(id)arg3;
- (id)_valueOfDescriptionVariable:(id)arg1;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUser:(id)arg1 dataSource:(id)arg2 charmsDataCoordinator:(id)arg3 charmsViewingDataCoordinator:(id)arg4 imageDownloader:(id)arg5;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (id)supplementaryViewModels;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

