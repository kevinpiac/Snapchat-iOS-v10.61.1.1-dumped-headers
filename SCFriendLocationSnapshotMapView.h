//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCFriendLocationSnapshotMapViewModel, SCLRUCache, SCMapSnapshotView, SCUserSession, UIImageView, UILabel;

@interface SCFriendLocationSnapshotMapView : UIView
{
    SCUserSession *_userSession;
    SCLRUCache *_snapshotCache;
    long long _source;
    UIImageView *_placeholderBackground;
    SCMapSnapshotView *_mapSnapshotView;
    UILabel *_centeredLabel;
    UILabel *_bottomLabel;
    UIView *_bottomLabelContainer;
    UIImageView *_standingPersonImageView;
    UIImageView *_calloutView;
    UIImageView *_standingPersonShadow;
    SCFriendLocationSnapshotMapViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)bottomLabel;
- (id)bottomLabelContainer;
- (id)calloutView;
- (id)centeredLabel;
- (id)initWithUserSession:(id)arg1 snapshotCache:(id)arg2 source:(long long)arg3;
- (id)initWithUserSession:(id)arg1 source:(long long)arg2;
- (void)layoutSubviews;
- (id)mapSnapshotView;
- (void)prepareForReuse;
@property(retain, nonatomic) SCFriendLocationSnapshotMapViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)standingPersonImageView;
- (id)standingPersonShadow;

@end

