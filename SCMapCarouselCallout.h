//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, NSMutableDictionary;
@protocol SCMapCarouselCalloutDataSource;

@interface SCMapCarouselCallout : UIView
{
    CAShapeLayer *_calloutShape;
    UIView *_contentContainer;
    CAGradientLayer *_contentMask;
    NSMutableDictionary *_viewsForIndices;
    double _index;
    id <SCMapCarouselCalloutDataSource> _dataSource;
}

- (void).cxx_destruct;
- (struct CGRect)_centerViewFrame;
- (void)_ensureViewForIndex:(long long)arg1;
- (void)_updateViewsIfNeeded;
@property(nonatomic) __weak id <SCMapCarouselCalloutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double index; // @synthesize index=_index;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;

@end

