//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsGenericTableViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"

@class NSString, SCCommerceCheckoutSummaryViewModel, SCCommerceOrder, SCCommerceSession, SCUserSession, UIView;

@interface SCCommerceOrderDetailsViewController : SCPaymentsGenericTableViewController <SCCommerceLoggerPageMetricsDataSource>
{
    unsigned long long _totalRows;
    UIView *_helpView;
    NSString *_metricsDisplayId;
    SCCommerceCheckoutSummaryViewModel *_orderSummaryViewModel;
    double _orderSummaryCellHeight;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    SCCommerceOrder *_order;
    unsigned long long _theme;
}

- (void).cxx_destruct;
- (void)_configureContactsCell:(id)arg1;
- (void)_configureOrderDate:(id)arg1;
- (void)_configureOrderNumber:(id)arg1;
- (void)_configurePaymentMethodCell:(id)arg1;
- (void)_configureShippingAddressCell:(id)arg1;
- (void)_configureShippingMethodCell:(id)arg1;
- (void)_didTapMerchantEmail;
- (void)_didTapMerchantReturnPolicy;
- (void)_didTapMerchantTerms;
- (void)_didTapMerchantWebButton;
- (_Bool)_isBeingPresented;
- (id)_orderItemCellForIndexPath:(id)arg1;
- (void)_presentWebViewWithUrl:(id)arg1;
- (unsigned long long)_rowTypeForIndexPath:(id)arg1;
- (void)_setupHelpView;
- (void)_setupTableView;
- (id)_summaryViewCell;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
- (id)displayId;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 commerceSession:(id)arg2 order:(id)arg3;
- (void)leftButtonPressed;
- (void)loadView;
@property(readonly, nonatomic) SCCommerceOrder *order; // @synthesize order=_order;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (_Bool)shouldPopToRootViewControllerLater;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableViewStyle;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end
