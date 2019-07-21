//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryLeftSwipableViewController.h"

#import "SCGalleryCellActionMenuHelperDelegate-Protocol.h"
#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryEntryViewCellDelegate-Protocol.h"
#import "SCGalleryFooterBarDelegate-Protocol.h"
#import "SCGalleryOperaPresenterDelegate-Protocol.h"
#import "SCGallerySendControllerDelegate-Protocol.h"
#import "SCMemoriesSinglePageHeaderBarDelegate-Protocol.h"
#import "SCMergedGalleryDataSourceListener-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, SCGalleryCellActionMenuHelper, SCGalleryCollectionViewHelper, SCGalleryCollectionViewLayoutCalculator, SCGalleryCollectionViewSelectionHelper, SCGalleryDebugSyncStatusChecker, SCGalleryFooterBar, SCGalleryFooterBarActionHandler, SCGalleryOperaPresenter, SCGallerySearchResult, SCGallerySendController, SCMemoriesSinglePageHeaderBar, SCSearchContentViewControllerContext, SCUserSession, UICollectionView, UICollectionViewFlowLayout;
@protocol SCGalleryFullSearchResultViewControllerDelegate, SCKeyServiceRequest, SCStartChatDelegate;

@interface SCGalleryFullSearchResultViewController : SCGalleryLeftSwipableViewController <SCMemoriesSinglePageHeaderBarDelegate, SCGalleryFooterBarDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCGallerySendControllerDelegate, SCTraceEnabled, SCGalleryOperaPresenterDelegate, SCMergedGalleryDataSourceListener, SCSearchContentViewControlling, SCGalleryCellActionMenuHelperDelegate, SCGalleryEntryViewCellDelegate>
{
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    SCUserSession *_userSession;
    SCGallerySearchResult *_searchResult;
    NSArray *_entrySortDescriptors;
    NSMutableArray *_galleryEntries;
    NSArray *_allEntries;
    NSIndexPath *_transitionIndexPath;
    SCMemoriesSinglePageHeaderBar *_headerBar;
    long long _savedStatusStyle;
    UICollectionView *_collectionView;
    SCGalleryFooterBar *_footerBar;
    SCGalleryFooterBarActionHandler *_footerBarActionHandler;
    UICollectionViewFlowLayout *_collectionViewLayout;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryCollectionViewLayoutCalculator *_collectionViewLayoutCalculator;
    id <SCKeyServiceRequest> _makePrivateRequest;
    SCGallerySendController *_sendController;
    SCGalleryOperaPresenter *_galleryOperaPresenter;
    SCGalleryCellActionMenuHelper *_actionMenuHelper;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    id <SCGalleryFullSearchResultViewControllerDelegate> _delegate;
    id <SCStartChatDelegate> _startChatDelegate;
}

+ (CDStruct_bac8f6e9)mediaScenePathForGalleryFullSearchResultViewControllerWithIndexPath:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationWillEnterBackground;
- (void)_didUpdateEntries;
- (void)_handleLongPress:(id)arg1 item:(id)arg2 fromView:(id)arg3;
- (void)_logUserSelectionAtIndexPath:(id)arg1;
- (void)_logUserSelectionForEntry:(id)arg1;
- (void)_makeSelectedEntriesPrivate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentOperaWithIndex:(long long)arg1 fromView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setSelectionViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_sourceViewFromView:(id)arg1;
- (void)_updateMediaScenePath;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryFullSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)disableLeftSwipe;
- (void)galleryCellActionMenuHelperDidSaveFeaturedStory:(id)arg1 item:(id)arg2;
- (void)galleryCellActionMenuHelperIsSavingFeaturedStory:(id)arg1 item:(id)arg2;
- (id)galleryCellActionMenuHelperShouldUpdateSourceView:(id)arg1 item:(id)arg2 snap:(id)arg3;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2;
- (void)galleryFooterBarDidPressBoomboxButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressLockButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressSendButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressShareButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressStoryButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressTrashButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressUnlockButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)galleryFooterBarDidPressUploadButton:(id)arg1;
- (void)gallerySendControllerDidSend:(id)arg1;
- (id)initWithWithUserSession:(id)arg1 searchResult:(id)arg2;
- (void)memoriesSinglePageHeaderBarDidPressBackButton:(id)arg1;
- (void)memoriesSinglePageHeaderBarDidPressSelectBackButton:(id)arg1;
- (void)memoriesSinglePageHeaderBarDidPressSelectButton:(id)arg1;
- (void)memoriesSinglePageHeaderBarDidTapToScroll:(id)arg1;
- (id)operaPresenter:(id)arg1 didOpenViewWithItem:(id)arg2;
- (id)operaPresenter:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (void)operaPresenter:(id)arg1 didSwitchToNewCreatedItem:(id)arg2;
- (void)operaPresenterBeganDismiss:(id)arg1;
- (void)operaPresenterCancelledDismiss:(id)arg1;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)operaPresenterDidPresent:(id)arg1;
- (id)pageName;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
- (_Bool)shouldBeginInteractiveDismissalGesture;
- (_Bool)shouldDisplayStatusBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

