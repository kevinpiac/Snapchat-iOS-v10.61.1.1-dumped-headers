//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterHomeOrEventProductSelectionButtonDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCHeader, SCOnDemandHomeAndEventProductSelectionSubview, SOJUUnlockablesOndemandGetHomeFilterResponse, SOJUUnlockablesOndemandTemplateCategoryList, UIImageView, UIScrollView;

@interface SCOnDemandHomeOrEventProductSelectionViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDelegate, SCHeaderDataSource, UIScrollViewDelegate, SCOnDemandGeofilterHomeOrEventProductSelectionButtonDelegate, SCOnDemandGeofilterDataControllerListener>
{
    SCHeader *_header;
    UIImageView *_headerBGImageView;
    UIScrollView *_scrollView;
    SCOnDemandHomeAndEventProductSelectionSubview *_homeFilterView;
    SCOnDemandHomeAndEventProductSelectionSubview *_eventFilterView;
    SCOnDemandHomeAndEventProductSelectionSubview *_draftView;
    SCOnDemandHomeAndEventProductSelectionSubview *_lensView;
    SOJUUnlockablesOndemandTemplateCategoryList *_homeFilterCategoryList;
    SOJUUnlockablesOndemandGetHomeFilterResponse *_homeFilterResponse;
    _Bool _userSelectedHomeFilters;
    _Bool _homeFilterResponseReceived;
}

- (void).cxx_destruct;
- (void)_presentDirectlyToCreativeStudio;
- (void)_proceedToHomeFilterScreen;
- (void)_proceedToHomeFilterSettingsController:(id)arg1;
- (void)_proceedToOccasionsWithProductType:(long long)arg1;
- (void)_proceedToOnboardingController;
- (void)_proceedToTemplatesViewController;
- (double)_topLayoutOriginY;
- (id)backgroundColorForHeader;
- (void)buttonClickedWithFilterType:(unsigned long long)arg1 withSenderId:(id)arg2;
- (void)dataController:(id)arg1 didFetchHomeFilterResponse:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
- (id)fontForHeader:(id)arg1;
- (id)generateGeocoordinateArrayFromCLLocation:(id)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (void)leftButtonPressed;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)leftSwipeSucceed;
- (void)rightButtonPressed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tapDraftButton:(id)arg1;
- (void)tapEventFilterButton:(id)arg1;
- (void)tapHomeFilterButton:(id)arg1;
- (void)tapLensButton:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)viewModelForDraft:(id)arg1;
- (id)viewModelForEventFilter;
- (id)viewModelForHomeFilter;
- (id)viewModelForLens;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

