//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSString, SCSearchFormsMapFooterViewModel;

@interface SCSearchFormsMapFooterView : UITableViewHeaderFooterView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    SCSearchFormsMapFooterViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_updateMapRegionToCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_updateMapRegionToLowerLat:(double)arg1 lowerLng:(double)arg2 upperLat:(double)arg3 upperLng:(double)arg4;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)updateViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
