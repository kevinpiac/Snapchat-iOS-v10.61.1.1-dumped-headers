//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCSettingsOptInEntityDataStore, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCSettingsStoryNotificationsSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerViewModels;
    SCUserSession *_userSession;
    long long _dataLoadingStatus;
    SCSettingsOptInEntityDataStore *_dataStore;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureStoryNotificationsEntityCell:(id)arg1;
- (void)_reloadSection;
- (void)_reloadSectionWithContainerViewModels:(id)arg1;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithUserSession:(id)arg1 dataStore:(id)arg2;
- (CDUnknownBlockType)modelCanUpdateComparator;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

