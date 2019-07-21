//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

@class SCCameraToolbarItem, SCDisposableObserverLifecycle, SCFeatureReference, UILabel;
@protocol SCCameraToolbarButtonDelegate;

@interface SCCameraToolbarButton : SCGrowingButton
{
    _Bool _isDisappearing;
    _Bool _selected;
    SCCameraToolbarItem *_toolbarItem;
    id <SCCameraToolbarButtonDelegate> _delegate;
    UILabel *_titleLabel;
    SCDisposableObserverLifecycle *_buttonLifecycle;
    SCFeatureReference *_cameraUserActionLogger;
}

- (void).cxx_destruct;
- (void)_updateTitleFrameWithFront:(id)arg1;
@property(retain, nonatomic) SCDisposableObserverLifecycle *buttonLifecycle; // @synthesize buttonLifecycle=_buttonLifecycle;
@property(retain, nonatomic) SCFeatureReference *cameraUserActionLogger; // @synthesize cameraUserActionLogger=_cameraUserActionLogger;
@property(nonatomic) __weak id <SCCameraToolbarButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithToolbarItem:(id)arg1 cameraUserActionLogger:(id)arg2;
@property(nonatomic) _Bool isDisappearing; // @synthesize isDisappearing=_isDisappearing;
- (void)press:(id)arg1;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setTitleVisible:(_Bool)arg1;
- (void)switchToUnselected;
@property(readonly, nonatomic) SCCameraToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;

@end

