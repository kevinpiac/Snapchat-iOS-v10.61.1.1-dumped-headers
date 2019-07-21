//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCInformationSettingsViewControllerDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, SCContactSyncPrePromptView;
@protocol SCContactSyncPrePromptViewControllerActionHandling;

@interface SCContactSyncPrePromptViewController : UIViewController <SCSnapchattersDataRequestListener, TTTAttributedLabelDelegate, SCInformationSettingsViewControllerDelegate, SCTraceEnabled>
{
    SCContactSyncPrePromptView *_contactSyncPrePromptView;
    id <SCContactSyncPrePromptViewControllerActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)_allowButtonTapped;
- (void)_denyButtonTapped;
- (void)_deviceContactAccessDenied;
- (void)_deviceContactAccessGranted;
@property(nonatomic) __weak id <SCContactSyncPrePromptViewControllerActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)dismissInformationSettingsView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

