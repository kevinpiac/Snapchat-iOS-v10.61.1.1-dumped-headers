//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCEmbeddedMapView, SCFriendLocationSnapshotMapView, SCLRUCache, SCProfileEmbeddedMapViewContainer, SCProfileMapViewModel, SCUserSession;

@interface SCProfileMapView : UIView
{
    SCUserSession *_userSession;
    SCFriendLocationSnapshotMapView *_snapshotView;
    SCEmbeddedMapView *_embeddedMapView;
    SCProfileMapViewModel *_mapViewModel;
    SCLRUCache *_snapshotCache;
    SCProfileEmbeddedMapViewContainer *_embeddedMapViewContainer;
}

- (void).cxx_destruct;
- (id)_getOrCreateEmbeddedMapWithViewModel:(id)arg1;
- (void)_setupEmbeddedMapViewWithViewModel:(id)arg1;
- (void)_setupSnapshotViewWithViewModel:(id)arg1;
- (void)_setupViewsWithViewModel:(id)arg1;
@property(retain, nonatomic) SCProfileEmbeddedMapViewContainer *embeddedMapViewContainer; // @synthesize embeddedMapViewContainer=_embeddedMapViewContainer;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) SCProfileMapViewModel *mapViewModel; // @synthesize mapViewModel=_mapViewModel;
@property(retain, nonatomic) SCLRUCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;

@end

