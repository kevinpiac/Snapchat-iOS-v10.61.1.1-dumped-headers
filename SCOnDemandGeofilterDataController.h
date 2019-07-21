//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, SCOnDemandGeofilterDataControllerListenerAnnouncer, SCOnDemandGeofilterDataControllerNotificationListenerAnnouncer, SCPreferences, SOJUUnlockablesOndemandAssetDraftList, SOJUUnlockablesOndemandLineItem, SOJUUnlockablesOndemandLineItemList, SOJUUnlockablesOndemandOfferedInventory, SOJUUnlockablesOndemandStylizedTextList, SOJUUnlockablesOndemandTemplateCategoryList, SOJUUnlockablesOndemandUser;
@protocol SCOnDemandGeofilterNetworkingProtocol;

@interface SCOnDemandGeofilterDataController : NSObject
{
    id <SCOnDemandGeofilterNetworkingProtocol> _networkManager;
    SCOnDemandGeofilterDataControllerListenerAnnouncer *_announcer;
    SCOnDemandGeofilterDataControllerNotificationListenerAnnouncer *_notificationAnnouncer;
    SOJUUnlockablesOndemandUser *_user;
    SOJUUnlockablesOndemandOfferedInventory *_offeredInventory;
    SOJUUnlockablesOndemandLineItemList *_cachedLineItemList;
    SOJUUnlockablesOndemandTemplateCategoryList *_cachedTemplateCategoryList;
    SOJUUnlockablesOndemandTemplateCategoryList *_cachedLensTemplateCategoryList;
    SOJUUnlockablesOndemandTemplateCategoryList *_cachedHomeFilterTemplateCategoryList;
    SOJUUnlockablesOndemandStylizedTextList *_cachedStylizedTextPresetsODG;
    SOJUUnlockablesOndemandAssetDraftList *_cachedAssetDraftList;
    SOJUUnlockablesOndemandStylizedTextList *_cachedStylizedTextPresets;
    SOJUUnlockablesOndemandLineItem *_notificationLineItem;
    SCPreferences *_userPreferences;
    NSMutableDictionary *_purchasingDictionary;
    NSMutableSet *_failureToVerifyPaymentSet;
    SOJUUnlockablesOndemandLineItem *_purchasingLineItem;
}

+ (_Bool)isHomeFilterCreated:(id)arg1;
- (void).cxx_destruct;
- (id)_cachedTemplateCategoryListKeyForProductType:(long long)arg1;
- (void)_fetchLineItemWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)_fontsFromTemplateList;
- (unsigned long long)_indexOfLineItemIdValue:(id)arg1;
- (void)_insertLineItemInCachedLineItemListWithLineItem:(id)arg1;
- (id)_latestApprovedItemExpiredDateInLineItemList:(id)arg1;
- (void)_productPurchaseFailed:(id)arg1;
- (void)_productPurchased:(id)arg1;
- (void)_productPurchasing:(id)arg1;
- (id)_saveCachedLineItemList:(id)arg1;
- (void)_setCachedTemplateCategoryList:(id)arg1 withProductType:(long long)arg2;
- (void)_updateLineItemInCachedLineItemListWithLineItem:(id)arg1;
- (void)_updateLineItemInCachedLineItemListWithLineItem:(id)arg1 pendingItem:(_Bool)arg2;
- (void)_updateNotificationLineItemFromLatestItemList:(id)arg1;
- (void)addListener:(id)arg1;
- (void)addNotificationItemListener:(id)arg1;
- (id)assetDraftList;
- (id)cachedLineItemWithId:(id)arg1;
- (void)cancelGeofilterWithLineItem:(id)arg1;
- (void)checkRecentItemsInApprovedState;
- (void)completeTransactionBasedOn:(id)arg1;
- (void)createAssetDraftWithAssetDraft:(id)arg1;
- (void)createGeofilterWithLineItem:(id)arg1 emailAddress:(id)arg2 shouldPayOnSubmission:(_Bool)arg3;
- (void)createHomeFilterWithCreateHomeFilterRequest:(id)arg1 targeting:(id)arg2;
- (id)currentUserLineItemList;
- (void)deleteAssetDraft:(id)arg1;
- (void)fetchAssetDrafts;
- (void)fetchLineItemFromNotificationWithId:(id)arg1;
- (void)fetchLineItemWithId:(id)arg1;
- (void)fetchODGUser;
- (void)fetchOfferPreviewWithLineItem:(id)arg1;
- (void)fetchOfferedInventory;
- (void)fetchStylizedText;
- (void)fetchTemplatesForProductType:(long long)arg1 withFilterType:(unsigned long long)arg2;
- (void)finishTransactionBasedOnId:(id)arg1;
- (void)homeFilterAssetForAdId:(id)arg1;
- (void)homeFilterForAdId:(id)arg1;
- (_Bool)initPurchaseLineItem:(id)arg1;
- (id)initWithNetworkManager:(id)arg1 userPreferences:(id)arg2 cachedCurrentUserLineItemList:(id)arg3;
- (id)lastUsedEmail;
- (id)lineItemDraft;
- (id)lineItemDraftCreationTimestamp;
- (id)lineItemDraftNumRemindersShown;
- (id)lineItemInPurchasingDictionaryMatchingLineItem:(id)arg1;
- (_Bool)lineItemRequiresAttention;
- (id)lineItemsPendingCollection;
- (id)mobilePaymentEventWithLineItem:(id)arg1;
- (id)notificationLineItem;
- (id)offeredInventory;
- (void)removeListener:(id)arg1;
- (void)removeNotificationItemListener:(id)arg1;
- (void)resubmitCreativeWithLineItem:(id)arg1;
- (void)resubmitGeofilterWithLineItem:(id)arg1;
- (void)resyncFailAndExpiredItems;
- (void)setLineItemDraft:(id)arg1;
- (id)stylizedTextPresets;
- (id)stylizedTextStylesForODG;
- (id)templateCategoryList;
- (void)updateApprovedValidDate:(id)arg1;
- (void)updateCurrentEditingLineItem:(id)arg1 shouldUpdatePrice:(_Bool)arg2;
- (void)updateCurrentUserLineItemListWithPreloadFromCache:(_Bool)arg1;
- (void)updateCurrentUserLineItemListWithPreloadFromCache:(_Bool)arg1 pageSize:(long long)arg2;
- (void)updateFailToVerifyPaymentSet:(id)arg1;
- (void)updateHomeFilterCreated:(_Bool)arg1;
- (void)updateHomeFilterVisible:(_Bool)arg1;
- (void)updateHomeFilterWithCreateHomeFilterAssetRequest:(id)arg1;
- (void)updateHomeFilterWithUpdateHomeAddressRequest:(id)arg1;
- (void)updateHomeFilterWithUpdateHomeFilterRequest:(id)arg1;
- (void)updateLastUsedEmail:(id)arg1;
- (void)updateListenerByCurrentData:(id)arg1;
- (void)updateNotificationListenerByCurrentData;
- (id)updatePurchasingLineItems:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (void)updateUserPurchasingDictionary:(id)arg1;
- (void)uploadAssetMetadata:(id)arg1;
- (id)user;

@end

