//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCGroupMapViewDelegate-Protocol.h"

@class NSString, SCEmbeddedMapViewLoggingSession, SCGroupMapView, SCUserSession;
@protocol SCActionHandling;

@interface SCGroupProfileCollectionViewMapCellV2 : SCUnifiedProfileBaseCollectionViewCell <SCGroupMapViewDelegate, SCActionable>
{
    SCGroupMapView *_groupMapView;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    SCUserSession *_userSession;
    SCEmbeddedMapViewLoggingSession *_mapLoggingSession;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_groupInvitesDidChange:(id)arg1;
- (void)_setupMapViewIfPossible;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)groupMapView:(id)arg1 didTapPlaceModel:(id)arg2;
- (void)groupMapView:(id)arg1 wantsToShowGroupOnMap:(id)arg2;
- (void)groupMapView:(id)arg1 wantsToShowPersonOnMap:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) SCEmbeddedMapViewLoggingSession *mapLoggingSession; // @synthesize mapLoggingSession=_mapLoggingSession;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

