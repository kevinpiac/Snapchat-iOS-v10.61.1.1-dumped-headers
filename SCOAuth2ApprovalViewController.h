//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOAuth2ContentViewDelegate-Protocol.h"

@class NSArray, NSString, SCLoadingIndicatorView, SCSnapKitLogger, SCUserSession;

@interface SCOAuth2ApprovalViewController : UIViewController <SCOAuth2ContentViewDelegate>
{
    NSString *_approvalToken;
    NSString *_clientId;
    NSString *_oauth2ClientName;
    NSString *_redirectUrl;
    _Bool _isConnected;
    NSString *_appIconUrl;
    NSArray *_scopesRequested;
    SCUserSession *_userSession;
    SCSnapKitLogger *_logger;
    SCLoadingIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
- (id)_createCellViewModels;
- (id)_createViewModel;
- (void)_didConfirmAuthorizationWithPermissions:(id)arg1;
- (void)_didDenialAuthorizationWithPermissions:(id)arg1;
- (void)_goToOAuth2ClientAppWithRedirectUrl:(id)arg1 authCode:(id)arg2 state:(id)arg3 isSuccess:(_Bool)arg4;
- (id)_largeBitmojiNetworkImage;
- (void)_sendApprovalRequestWithPermissions:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)_sendDenialRequestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_showErrorMessage:(id)arg1;
- (id)_smallBitmojiNetworkImage;
- (void)_snapKitConnectWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_startLoadingIndicator;
- (void)_stopLoadingIndicator;
- (void)didPressContinueButton:(id)arg1 view:(id)arg2 permissions:(id)arg3;
- (void)didPressOtherButton:(id)arg1 view:(id)arg2 permissions:(id)arg3;
- (id)initWithDataModel:(id)arg1 userSession:(id)arg2 logger:(id)arg3;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
