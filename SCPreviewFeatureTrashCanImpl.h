//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureTrashCan-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCPreviewToolBarButtonItem, SCPreviewView;

@interface SCPreviewFeatureTrashCanImpl : SCFeature <SCPreviewFeatureTrashCan, SCPreviewGestureResponder>
{
    SCPreviewView *_previewView;
    SCPreviewToolBarButtonItem *_toolbarButtonItem;
}

- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
- (id)createTrashCanToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)didTouchContainerView:(id)arg1 currentTouchTarget:(id)arg2 deleteAnimationCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

