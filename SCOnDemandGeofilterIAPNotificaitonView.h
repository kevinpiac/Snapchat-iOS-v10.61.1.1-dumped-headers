//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, SCOnDemandGeofilterIAPNotificaitonViewActionHandler, SOJUUnlockablesOndemandLineItem, UIButton, UILabel, UIStackView;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterIAPNotificaitonView : UIView <TTTAttributedLabelDelegate>
{
    UIButton *_confirmButton;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIStackView *_contentView;
    SOJUUnlockablesOndemandLineItem *_notificationOnDemandLineItem;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    long long _viewState;
    SCOnDemandGeofilterIAPNotificaitonViewActionHandler *_actionHandler;
}

- (void).cxx_destruct;
- (void)_productPurchaseFailed:(id)arg1;
- (void)_productPurchased:(id)arg1;
- (id)cameraNotificationEventWithLineItem:(id)arg1;
- (void)didTapIAPNotification;
- (id)initWithNotificationItem:(id)arg1 actionHandler:(id)arg2;
- (void)layoutSubviews;
- (void)updateConfirmButtonBasedOnViewState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

