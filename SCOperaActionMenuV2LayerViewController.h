//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaNotificationOptInViewDelegate-Protocol.h"
#import "SCOperaSubscribeButtonViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCOperaActionMenuV2LayerView, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface SCOperaActionMenuV2LayerViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate, SCOperaSubscribeButtonViewDelegate, SCOperaNotificationOptInViewDelegate>
{
    SCOperaActionMenuV2LayerView *_layerView;
    UITapGestureRecognizer *_tapGesture;
    UISwipeGestureRecognizer *_downSwipeGesture;
}

- (void).cxx_destruct;
- (void)_actionMenuPressWithEventName:(id)arg1;
- (id)_convertItemConfigFromActionMenuV2Option:(id)arg1;
- (void)_didSwipeDown:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_endActionMenuSession;
- (void)_headerTapped;
- (id)_parseMenuItemsWithLayer:(id)arg1;
- (void)_setupGestures;
- (void)_updateNotificationOptInViewWithIsOptedInForNotifications:(_Bool)arg1 canOptInForNotifications:(_Bool)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)loadView;
- (void)operaOptInNotificationViewDidTap:(id)arg1 isOptedIn:(_Bool)arg2;
- (void)operaSubscribeButtonViewDidPressButton:(id)arg1 isSubscribed:(_Bool)arg2;
- (void)operaSubscribeButtonViewWillAnimateToWidth:(double)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

