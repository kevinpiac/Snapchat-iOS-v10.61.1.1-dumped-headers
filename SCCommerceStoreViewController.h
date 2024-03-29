//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"
#import "SCCommerceStoreViewDelegate-Protocol.h"
#import "SCOperaLoadingLayerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCCommerceSession, SCCommerceStoreOperaLayer, SCCommerceStoreView, SCOperaLoadingLayerView, SCQueuePerformer, SCUserSession, SOJUCommerceStoreInfo;
@protocol SCCommerceOperaLayerViewControllerDismissalDelegate, SCCompositeNetworkImageDownloading;

@interface SCCommerceStoreViewController : SCOperaLayerViewController <SCCommerceStoreViewDelegate, SCOperaLoadingLayerViewDelegate, SCCommerceLoggerPageMetricsDataSource>
{
    _Bool _enablePaging;
    NSString *_displayId;
    SCQueuePerformer *_queuePerformer;
    id <SCCompositeNetworkImageDownloading> _compositeImageDownloader;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    SCCommerceStoreOperaLayer *_storeLayer;
    NSString *_storeId;
    SOJUCommerceStoreInfo *_storeInfo;
    NSMutableArray *_categoryList;
    SCOperaLoadingLayerView *_loadingLayerView;
    SCCommerceStoreView *_storeView;
    id <SCCommerceOperaLayerViewControllerDismissalDelegate> _dismissalDelegate;
}

- (void).cxx_destruct;
- (void)_hideLoadingView:(id)arg1;
- (void)_loadStoreInfo;
- (void)_parseCategories;
- (struct CGPoint)_reviewCardCartOffset;
- (void)_setupStoreView;
- (void)_showLoadingView;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
- (void)didTapCartStatusView:(id)arg1 forStoreView:(id)arg2;
- (void)didTapCloseButtonForStoreView:(id)arg1;
- (void)didTapProduct:(id)arg1 forStoreView:(id)arg2;
@property(retain, nonatomic) id <SCCommerceOperaLayerViewControllerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
- (id)displayId;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (_Bool)isRecyclable;
- (void)loadView;
@property(retain, nonatomic) SCOperaLoadingLayerView *loadingLayerView; // @synthesize loadingLayerView=_loadingLayerView;
- (void)loadingLayerViewDidPressErrorButton:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(retain, nonatomic) SCCommerceStoreOperaLayer *storeLayer; // @synthesize storeLayer=_storeLayer;
@property(retain, nonatomic) SCCommerceStoreView *storeView; // @synthesize storeView=_storeView;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

