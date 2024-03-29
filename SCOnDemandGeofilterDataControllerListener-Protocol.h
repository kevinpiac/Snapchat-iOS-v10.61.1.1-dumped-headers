//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCOnDemandGeofilterDataController, SOJUUnlockablesOndemandAssetDraftList, SOJUUnlockablesOndemandAuthorizationFailure, SOJUUnlockablesOndemandGetHomeFilterAssetResponse, SOJUUnlockablesOndemandGetHomeFilterResponse, SOJUUnlockablesOndemandInputValidationErrors, SOJUUnlockablesOndemandLineItem, SOJUUnlockablesOndemandOfferedInventory, SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse, SOJUUnlockablesOndemandStylizedTextList, SOJUUnlockablesOndemandTemplateCategoryList, SOJUUnlockablesOndemandUser;

@protocol SCOnDemandGeofilterDataControllerListener <NSObject>

@optional
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchAssetDraftList:(SOJUUnlockablesOndemandAssetDraftList *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchHomeFilterAssetResponse:(SOJUUnlockablesOndemandGetHomeFilterAssetResponse *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchHomeFilterResponse:(SOJUUnlockablesOndemandGetHomeFilterResponse *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchLineItem:(SOJUUnlockablesOndemandLineItem *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchMyGeofilters:(NSArray *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchODGUser:(SOJUUnlockablesOndemandUser *)arg2 success:(_Bool)arg3 authorizationFailure:(SOJUUnlockablesOndemandAuthorizationFailure *)arg4;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchOffer:(SOJUUnlockablesOndemandLineItem *)arg2 success:(_Bool)arg3 validationErrors:(SOJUUnlockablesOndemandInputValidationErrors *)arg4;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchOfferedInventory:(SOJUUnlockablesOndemandOfferedInventory *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchOnDemandGeofilterTemplates:(SOJUUnlockablesOndemandTemplateCategoryList *)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchOnDemandGeofilterTemplates:(SOJUUnlockablesOndemandTemplateCategoryList *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFetchStylizedTextList:(SOJUUnlockablesOndemandStylizedTextList *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didFinishHomeFilterUpdate:(NSString *)arg2;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didResubmitCreativeForLineItem:(SOJUUnlockablesOndemandLineItem *)arg2 success:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didResubmitLineItem:(SOJUUnlockablesOndemandLineItem *)arg2 success:(_Bool)arg3 autoApproved:(_Bool)arg4 error:(SOJUUnlockablesOndemandInputValidationErrors *)arg5;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didSubmitGeofilterWithId:(NSString *)arg2 success:(_Bool)arg3 approved:(_Bool)arg4 error:(SOJUUnlockablesOndemandInputValidationErrors *)arg5;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didUpdateCurrentEditingLineItem:(SOJUUnlockablesOndemandLineItem *)arg2 shouldUpdatePrice:(_Bool)arg3;
- (void)dataController:(SCOnDemandGeofilterDataController *)arg1 didUploadAssetMetadata:(SOJUUnlockablesOndemandPreRenderingAssetsStructuredResponse *)arg2 success:(_Bool)arg3;
@end

