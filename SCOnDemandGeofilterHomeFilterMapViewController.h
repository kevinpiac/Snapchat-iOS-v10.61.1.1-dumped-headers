//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseViewController.h"

#import "MGLMapViewDelegate-Protocol.h"
#import "SCOnDemandGeofilterMapSearchViewDelegate-Protocol.h"

@class MGLMapView, MGLPointAnnotation, NSString, SCOnDemandGeofilterEventForwardButton, SCOnDemandGeofilterGeofenceUtil, SCOnDemandGeofilterHomeFilterMapBannerView, SCOnDemandGeofilterMapLocationPulseView, SCOnDemandGeofilterMapSearchView, SCOnDemandGeofilterPillButton;
@protocol SCMapInstance;

@interface SCOnDemandGeofilterHomeFilterMapViewController : SCOnDemandGeofilterBaseViewController <MGLMapViewDelegate, SCOnDemandGeofilterMapSearchViewDelegate>
{
    MGLMapView<SCMapInstance> *_mapView;
    SCOnDemandGeofilterMapSearchView *_searchView;
    SCOnDemandGeofilterEventForwardButton *_resetCenterBtn;
    MGLPointAnnotation *_pinAnnotation;
    SCOnDemandGeofilterPillButton *_continueButton;
    SCOnDemandGeofilterMapLocationPulseView *_locationPulseView;
    SCOnDemandGeofilterGeofenceUtil *_geofenceUtility;
    SCOnDemandGeofilterHomeFilterMapBannerView *_banner;
    _Bool _fromReviewView;
}

- (void).cxx_destruct;
- (void)_centerMap;
- (void)_continueButtonAction;
- (double)_distanceFrom:(struct CLLocationCoordinate2D)arg1 to:(struct CLLocationCoordinate2D)arg2;
- (id)_getMapViewBounds;
- (void)_presentMapPermissionAlert;
- (void)_promptForLocationAuthorizationWithSuccessAlert:(_Bool)arg1;
- (void)_removeHomePinAnnotation;
- (void)_restoreMapStatus;
- (void)_restoreSearchState;
- (void)_saveCurrentMapStatus;
- (void)_showAlertForUserLocationUpdate;
- (void)_updateBanner;
- (void)_updateHomePinAnnotation;
- (void)_updateLineItemEventViewports;
- (void)_updateSearchBarContentbasedOnCenterLocation:(id)arg1;
- (void)didFailToFindAddress:(id)arg1;
- (void)didSelectMapItem:(id)arg1;
- (void)didTapBackButton:(id)arg1;
- (void)didTapResetCenterBtn;
- (_Bool)disableLeftSwipe;
@property(nonatomic) _Bool fromReviewView; // @synthesize fromReviewView=_fromReviewView;
- (id)generateCLLocationArrayFromGeocoordinate:(id)arg1;
- (id)generateGeocoordinateArrayFromCLLocation:(id)arg1;
- (_Bool)mapView:(id)arg1 annotationCanShowCallout:(id)arg2;
- (id)mapView:(id)arg1 fillColorForPolygonAnnotation:(id)arg2;
- (id)mapView:(id)arg1 imageForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 strokeColorForShapeAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(id)arg1;
- (_Bool)shouldDisplayStatusBar;
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

