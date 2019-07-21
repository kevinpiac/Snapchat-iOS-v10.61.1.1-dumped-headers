//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBaseViewModelDataProvider-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCLensExplorerDataStore, SCUpdateListenerAnnouncer;

@interface SCLensExplorerLensChallengesCellViewModelDataProvider : NSObject <SCUpdateListener, SCLensExplorerBaseViewModelDataProvider>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSArray *_containerViewModels;
    SCLensExplorerDataStore *_sectionDataStore;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_loadSectionItems;
- (void)addUpdateListener:(id)arg1;
- (void)clearMemoryCache;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (_Bool)hasMoreItems;
- (id)initWithSectionIndex:(unsigned long long)arg1 sectionsDataStore:(id)arg2;
- (void)refreshCachedItems;
- (void)removeUpdateListener:(id)arg1;
- (void)updateFirstVisibleItems;
@property(readonly, copy, nonatomic) NSArray *viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
