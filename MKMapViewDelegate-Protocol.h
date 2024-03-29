//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKAnnotationView, MKClusterAnnotation, MKMapView, MKOverlayRenderer, MKOverlayView, MKUserLocation, NSArray, NSError, UIControl;
@protocol MKAnnotation, MKOverlay;

@protocol MKMapViewDelegate <NSObject>

@optional
- (void)mapView:(MKMapView *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)mapView:(MKMapView *)arg1 annotationView:(MKAnnotationView *)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (MKClusterAnnotation *)mapView:(MKMapView *)arg1 clusterAnnotationForMemberAnnotations:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddOverlayRenderers:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddOverlayViews:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(MKMapView *)arg1 didDeselectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didUpdateUserLocation:(MKUserLocation *)arg2;
- (void)mapView:(MKMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (MKOverlayRenderer *)mapView:(MKMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (MKAnnotationView *)mapView:(MKMapView *)arg1 viewForAnnotation:(id <MKAnnotation>)arg2;
- (MKOverlayView *)mapView:(MKMapView *)arg1 viewForOverlay:(id <MKOverlay>)arg2;
- (void)mapViewDidChangeVisibleRegion:(MKMapView *)arg1;
- (void)mapViewDidFailLoadingMap:(MKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(MKMapView *)arg1;
- (void)mapViewDidFinishRenderingMap:(MKMapView *)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewDidStopLocatingUser:(MKMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(MKMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(MKMapView *)arg1;
- (void)mapViewWillStartRenderingMap:(MKMapView *)arg1;
@end

