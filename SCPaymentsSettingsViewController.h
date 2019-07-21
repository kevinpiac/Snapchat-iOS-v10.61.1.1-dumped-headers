//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsGenericTableViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"
#import "SCPaymentsCardCreateUpdateViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCCommerceSession, SCLoadingIndicatorView, SCUserSession, UIVisualEffectView;

@interface SCPaymentsSettingsViewController : SCPaymentsGenericTableViewController <SCPaymentsCardCreateUpdateViewControllerDelegate, SCCommerceLoggerPageMetricsDataSource>
{
    UIVisualEffectView *_loadingBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    NSString *_metricsDisplayId;
    _Bool _loadingPayments;
    _Bool _loadingOrders;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    NSMutableArray *_orderList;
    long long _numberOfOrdersToShow;
    NSArray *_paymentMethods;
    NSString *_orderHistoryInfoString;
    NSMutableArray *_tableSections;
}

- (void).cxx_destruct;
- (id)_baseSettingsCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_contactInformationCellForRowAtIndexPath:(id)arg1;
- (void)_hideBlurView;
- (id)_odgCellForRowAtIndexPath:(id)arg1;
- (id)_pagenameForPageView;
- (id)_purchaseCellForRowAtIndexPath:(id)arg1;
- (id)_shippingAddressCellForRowAtIndexPath:(id)arg1;
- (void)_showBlurView;
- (id)_viewAllCellForRowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
- (void)didTapDoneButton;
- (id)displayId;
- (void)handleSelectionForPaymentsTableViewCellAtIndexPath:(id)arg1;
- (id)initWithUserSession:(id)arg1 commerceSession:(id)arg2 error:(id *)arg3;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)loadPaymentMethods;
- (void)loadPurchases;
- (void)loadView;
@property(nonatomic) _Bool loadingOrders; // @synthesize loadingOrders=_loadingOrders;
@property(nonatomic) _Bool loadingPayments; // @synthesize loadingPayments=_loadingPayments;
@property(nonatomic) long long numberOfOrdersToShow; // @synthesize numberOfOrdersToShow=_numberOfOrdersToShow;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSString *orderHistoryInfoString; // @synthesize orderHistoryInfoString=_orderHistoryInfoString;
@property(retain, nonatomic) NSMutableArray *orderList; // @synthesize orderList=_orderList;
- (id)paymentMethodWrapperForIndexPath:(id)arg1;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
- (void)paymentsCardCreationEditViewController:(id)arg1 didCreatePaymentsMethod:(id)arg2;
@property(retain) NSMutableArray *tableSections; // @synthesize tableSections=_tableSections;
- (void)setupTableView;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 paymentsTableViewCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForHeader:(id)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

