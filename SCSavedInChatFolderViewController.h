//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCProfileChatMediaOperaBaseViewProviding-Protocol.h"
#import "SCProfileChatMediaScreenCaptureMonitorDelegate-Protocol.h"
#import "SCSavedInChatFolderHeaderBarDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSavedInChatFolderPlayerDelegate-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FBKVOController, NSArray, NSString, SCGalleryTabCollectionViewFlowLayout, SCProfileChatMediaDataSource, SCProfileChatMediaScreenCaptureMonitor, SCSavedInChatCollectionViewLayoutCalculator, SCSavedInChatFolderHeaderBar, SCUnifiedProfileLoggingService, SCUnifiedProfileSavedInChatFolderActionHandler, SCUserSession, UICollectionView;

@interface SCSavedInChatFolderViewController : SCLeftSwipableViewController <SCSavedInChatFolderHeaderBarDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SCUpdateListener, SCProfileChatMediaScreenCaptureMonitorDelegate, SCProfileChatMediaOperaBaseViewProviding, SCUnifiedProfileSavedInChatFolderPlayerDelegate, SCTraceEnabled>
{
    SCProfileChatMediaDataSource *_dataSource;
    SCUserSession *_userSession;
    SCUnifiedProfileSavedInChatFolderActionHandler *_actionHandler;
    SCSavedInChatFolderHeaderBar *_headerBar;
    SCGalleryTabCollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    SCSavedInChatCollectionViewLayoutCalculator *_collectionViewLayoutCalculator;
    FBKVOController *_observeController;
    SCProfileChatMediaScreenCaptureMonitor *_profileChatMediaCaptureMonitor;
    NSArray *_savedInChatMediaCards;
    _Bool _hasUnloadedContent;
    SCUnifiedProfileLoggingService *_loggingService;
}

- (void).cxx_destruct;
- (void)_collectionViewSizeDidUpdate;
- (void)_fetchMoreSavedInChatMediaDataModelsIfNecessary;
- (id)baseViewForChatMediaId:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (long long)holdenCellsCount;
- (id)initWithWithDataSource:(id)arg1 userSession:(id)arg2 sessionId:(id)arg3;
- (void)loadView;
@property(nonatomic) __weak SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
- (_Bool)profileChatMediaCaptureMonitorIsPresentingChatMedia:(id)arg1;
- (_Bool)profileChatMediaCaptureMonitorIsSavedAttachmentCellVisible:(id)arg1;
- (void)savedInChatFolderActionHandler:(id)arg1 didBeginPlayingChatMediaWithId:(id)arg2;
- (void)savedInChatFolderHeaderBarDidPressBackButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
