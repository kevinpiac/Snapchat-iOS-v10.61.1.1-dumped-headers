//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCGroupStoryMapView, SCLoadingIndicatorView;
@protocol SCGroupStoryMapCellDelegate;

@interface SCGroupStoryMapCell : UITableViewCell
{
    SCGroupStoryMapView *_mapView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    id <SCGroupStoryMapCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_setupLoadingIndicatorViewIfNecessary;
- (void)_setupMapViewWithUserSession:(id)arg1 tintColor:(id)arg2;
@property(nonatomic) __weak id <SCGroupStoryMapCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUserSession:(id)arg1 tintColor:(id)arg2 reuseIdentifier:(id)arg3;
- (void)updateWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 isFindingLocation:(_Bool)arg2;

@end

