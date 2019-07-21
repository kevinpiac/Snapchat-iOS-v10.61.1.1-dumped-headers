//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsGenericTableViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"

@class NSArray, NSError, NSMutableArray, NSString, SCCommerceSession, SCLoadingIndicatorView, SCPaymentsShippingAddress, SCUserSession, UIFont, UIVisualEffectView;
@protocol SCPaymentsSelectEditListViewControllerDelegate;

@interface SCPaymentsSelectEditListViewController : SCPaymentsGenericTableViewController <SCCommerceLoggerPageMetricsDataSource>
{
    NSMutableArray *_itemList;
    Class _tableViewCellClass;
    UIFont *_defaultFont;
    unsigned long long _selectedItemIndex;
    NSArray *_shippingAddressList;
    NSString *_initiallySelectedItemId;
    _Bool _isSelectedItemInvalid;
    NSError *_selectedItemError;
    UIVisualEffectView *_loadingBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    NSString *_metricsDisplayId;
    _Bool _canRemoveEditableItem;
    unsigned long long _mode;
    unsigned long long _itemType;
    id <SCPaymentsSelectEditListViewControllerDelegate> _delegate;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    SCPaymentsShippingAddress *_checkoutShippingAddress;
    unsigned long long _theme;
}

- (void).cxx_destruct;
- (long long)_getPageType;
- (void)_hideBlurView;
- (_Bool)_itemIsValid:(id)arg1;
- (void)_loadItems;
- (_Bool)_paymentMethodIsValid:(id)arg1;
- (void)_returnToPreviousScreen;
- (_Bool)_shouldAllowEditingInvalidItem:(id)arg1;
- (void)_showBlurView;
- (void)_tappedOnItem:(id)arg1;
- (void)_tappedOnNewOrEditableItem:(id)arg1;
- (void)_updateSelectedItemIndex;
- (_Bool)_updateSelectionForIndex:(id)arg1;
@property(nonatomic) _Bool canRemoveEditableItem; // @synthesize canRemoveEditableItem=_canRemoveEditableItem;
@property(retain, nonatomic) SCPaymentsShippingAddress *checkoutShippingAddress; // @synthesize checkoutShippingAddress=_checkoutShippingAddress;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(nonatomic) __weak id <SCPaymentsSelectEditListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)displayId;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 itemList:(id)arg3 selectedItemId:(id)arg4 withUserSession:(id)arg5 withCommerceSession:(id)arg6;
- (id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 selectedItemId:(id)arg3 selectedItemError:(id)arg4 withUserSession:(id)arg5 withCommerceSession:(id)arg6;
- (id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 withUserSession:(id)arg3 withCommerceSession:(id)arg4;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void)loadView;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (void)setupTableView;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (void)showErrorRetryCancelDialogWithTitle:(id)arg1 message:(id)arg2 retryActionHandler:(CDUnknownBlockType)arg3 cancelActionHandler:(CDUnknownBlockType)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

