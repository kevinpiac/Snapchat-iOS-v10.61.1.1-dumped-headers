//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseViewController.h"

#import "MGLMapViewDelegate-Protocol.h"
#import "SCOnDemandGeofilterCanvasViewDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterMapSearchViewDelegate-Protocol.h"
#import "SCOnDemandGeofilterNewUserGuidelinesViewDelegate-Protocol.h"

@class MGLAnnotationView, MGLMapView, MGLPointAnnotation, NSMutableArray, NSNumber, NSString, SCOnDemandGeofilterCanvasView, SCOnDemandGeofilterEventForwardButton, SCOnDemandGeofilterGeofenceUtil, SCOnDemandGeofilterMapBannerView, SCOnDemandGeofilterMapLocationPulseView, SCOnDemandGeofilterMapSearchView, SCOnDemandGeofilterNewUserGuidelinesView, SCOnDemandGeofilterPillButton, SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount, SOJUUnlockablesOndemandPayment, SOJUUnlockablesOndemandPriceCalculation, UIImage;
@protocol SCMapInstance;

@interface SCOnDemandGeofilterMapViewController : SCOnDemandGeofilterBaseViewController <MGLMapViewDelegate, SCOnDemandGeofilterMapSearchViewDelegate, SCOnDemandGeofilterCanvasViewDelegate, SCOnDemandGeofilterDataControllerListener, SCOnDemandGeofilterNewUserGuidelinesViewDelegate>
{
    UIImage *_bitmojiImage;
    MGLMapView<SCMapInstance> *_mapView;
    SCOnDemandGeofilterCanvasView *_canvasView;
    SCOnDemandGeofilterMapSearchView *_searchView;
    SCOnDemandGeofilterMapBannerView *_banner;
    SCOnDemandGeofilterEventForwardButton *_resetCenterBtn;
    MGLPointAnnotation *_pinAnnotation;
    MGLPointAnnotation *_bitmojiAnnotation;
    SCOnDemandGeofilterPillButton *_continueButton;
    MGLAnnotationView *_bitmojiView;
    SCOnDemandGeofilterMapLocationPulseView *_locationPulseView;
    SCOnDemandGeofilterGeofenceUtil *_geofenceUtility;
    SOJUUnlockablesOndemandPriceCalculation *_currentOffer;
    SOJUUnlockablesOndemandPayment *_currentPayment;
    SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *_currentLocalizedMonetaryAmount;
    NSMutableArray *_blackOutAnnotationArray;
    NSNumber *_startRenderingTime;
    SCOnDemandGeofilterNewUserGuidelinesView *_guidelinesView;
    _Bool _fromReviewView;
}

- (void).cxx_destruct;
- (void)_centerMap;
- (void)_checkLocationAuthorizationStatus;
- (void)_checkUserSessionLocationAuthorizationStatus;
- (void)_continueButtonAction;
- (double)_distanceFrom:(struct CLLocationCoordinate2D)arg1 to:(struct CLLocationCoordinate2D)arg2;
- (void)_fetchBitmoji;
- (void)_insertCanvasViewIntoMapView;
- (_Bool)_isWholeNumber:(float)arg1;
- (void)_navigateToReviewViewController;
- (void)_presentMapPermissionAlert;
- (void)_promptForLocationAuthorizationWithSuccessAlert:(_Bool)arg1;
- (void)_removeBitmojiAnnotation;
- (void)_restoreMapStatus;
- (void)_restoreSearchState;
- (void)_saveCurrentMapStatus;
- (void)_showAlertForUserLocationUpdate;
- (void)_updateBanner;
- (void)_updateBannerWithValidationErrors:(id)arg1;
- (void)_updateBitmojiAnnotationLocation;
- (void)_updateBitmojiAnnotationLocationWithImage:(id)arg1;
- (void)_updateBlackOutBasedOnError:(id)arg1;
- (void)_updateLineItemEventViewports;
- (void)_updatePrice;
- (void)_updateSessionLineItemWithFetchedLineItem:(id)arg1 fetchedProduct:(id)arg2;
- (void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(_Bool)arg3 validationErrors:(id)arg4;
- (void)dealloc;
- (void)didDragOnCanvasView:(id)arg1 cgPoints:(id)arg2;
- (void)didFailToFindAddress:(id)arg1;
- (void)didSelectMapItem:(id)arg1;
- (void)didSelfIntersectionHappened:(id)arg1;
- (void)didTapBackButton:(id)arg1;
- (void)didTapOnCanvasView:(id)arg1 cgPoints:(id)arg2;
- (void)didTapResetCenterBtn;
- (_Bool)disableLeftSwipe;
@property(nonatomic) _Bool fromReviewView; // @synthesize fromReviewView=_fromReviewView;
- (id)generateCLLocationArrayFromGeocoordinate:(id)arg1;
- (id)generateGeocoordinateArrayFromCLLocation:(id)arg1;
- (_Bool)mapView:(id)arg1 annotationCanShowCallout:(id)arg2;
- (id)mapView:(id)arg1 fillColorForPolygonAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 strokeColorForShapeAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(id)arg1;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)newUserGuidelinesViewWasDismissed;
- (_Bool)shouldDisplayStatusBar;
- (void)updateBannerForSelfIntersection;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

