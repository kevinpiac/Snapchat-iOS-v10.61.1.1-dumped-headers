//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCBetaShakeReportViewControllerDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCInformationSettingsViewControllerDelegate-Protocol.h"

@class NSString, SCCognacDataStorage;

@interface SCInSettingReportCognacActionHandler : NSObject <SCHeaderDelegate, SCBetaShakeReportViewControllerDelegate, SCInformationSettingsViewControllerDelegate, SCActionHandling>
{
    SCCognacDataStorage *_cognacDataStorage;
}

- (void).cxx_destruct;
- (void)_presentHelpCenter:(id)arg1;
- (void)_presentReportViewController:(id)arg1 reportType:(long long)arg2;
- (void)_presentSafetyCenter:(id)arg1;
- (void)_presentSupportCenterForPrivacyQuestion:(id)arg1;
- (void)dismissInformationSettingsView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)headerleftButtonPressed:(_Bool)arg1 viewController:(id)arg2;
- (id)initWithDataStorage:(id)arg1;
- (void)logSettingsSelectionEvent:(long long)arg1 actionDataModel:(id)arg2;
- (void)reportSubmitted:(id)arg1 projectName:(id)arg2 subProjectName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

