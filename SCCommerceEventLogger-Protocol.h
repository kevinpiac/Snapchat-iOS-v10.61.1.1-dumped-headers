//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString;
@protocol SCCommerceCartMetricsProvider, SCCommerceCheckoutMetricsProvider, SCCommerceLoggerPageMetricsDataSource;

@protocol SCCommerceEventLogger
@property(retain, nonatomic) id <SCCommerceCartMetricsProvider> cartMetricsProvider;
@property(copy, nonatomic) NSString *comicId;
@property(readonly, nonatomic) NSString *commerceSessionId;
@property(copy, nonatomic) NSString *currentCheckoutId;
@property(readonly, nonatomic) NSString *displayId;
- (void)endCurrentPageSession;
@property(nonatomic) _Bool hasInputSearchTerms;
- (void)logAddAttachment;
- (void)logAttachmentCellDeselect;
- (void)logAttachmentCellSelect;
- (void)logButtonTap:(long long)arg1 currentCard:(long long)arg2 currentPage:(long long)arg3 jsonMetadata:(NSString *)arg4;
- (void)logCardAction:(long long)arg1 card:(long long)arg2 currentPage:(long long)arg3;
- (void)logCardClose:(long long)arg1 currentPage:(long long)arg2 metricsDataSource:(id <SCCommerceLoggerPageMetricsDataSource>)arg3;
- (void)logCardOpen:(long long)arg1 currentPage:(long long)arg2 metricsDataSource:(id <SCCommerceLoggerPageMetricsDataSource>)arg3;
- (void)logCheckoutEventWithCheckoutMetricsProvider:(id <SCCommerceCheckoutMetricsProvider>)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(NSError *)arg4;
- (void)logCommerceRestActionEventWithEndpoint:(long long)arg1 action:(long long)arg2 result:(_Bool)arg3 statusCode:(long long)arg4 latency:(long long)arg5 errorCode:(NSString *)arg6 jsonMetadata:(NSString *)arg7;
- (void)logContactDetailsEventWithSuccess:(_Bool)arg1 error:(NSError *)arg2;
- (void)logCreditCardEventWithPaymentMethodId:(NSString *)arg1 cardtype:(long long)arg2 actionType:(long long)arg3 success:(_Bool)arg4 error:(NSError *)arg5;
- (void)logDiscountEventWithDiscountCode:(NSString *)arg1 discountAmount:(NSString *)arg2 currency:(NSString *)arg3 actionType:(long long)arg4 success:(_Bool)arg5 error:(NSError *)arg6;
- (void)logOpenFromLink:(long long)arg1;
- (void)logPageClose:(long long)arg1 destinationPage:(long long)arg2 metricsDataSource:(id <SCCommerceLoggerPageMetricsDataSource>)arg3;
- (void)logPageOpen:(long long)arg1 sourcePage:(long long)arg2 metricsDataSource:(id <SCCommerceLoggerPageMetricsDataSource>)arg3 jsonMetadata:(NSString *)arg4;
- (void)logPostAttachment:(_Bool)arg1 toGroup:(_Bool)arg2 toFriend:(_Bool)arg3;
- (void)logRemoveAttachment;
- (void)logShippingAddressEventWithShippingAddressId:(NSString *)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(NSError *)arg4;
- (void)logShippingMethodEventWithCheckoutMetricsProvider:(id <SCCommerceCheckoutMetricsProvider>)arg1 actionType:(long long)arg2 success:(_Bool)arg3 error:(NSError *)arg4;
- (void)logSwipeUpOnPage:(long long)arg1;
- (void)logTapOnPage:(long long)arg1;
- (void)logTextFieldInput:(long long)arg1;
- (void)logUnlockMappingWithUnlockableId:(NSString *)arg1 unlockableType:(long long)arg2 currentPage:(long long)arg3;
- (void)logValidationFailure:(long long)arg1;
@property(readonly, nonatomic) long long originType;
- (NSString *)pageSessionId;
@property(nonatomic) long long primaryAvatarType;
@property(retain, nonatomic) NSString *productId;
@property(nonatomic) long long productItemType;
@property(readonly, nonatomic) long long productType;
@property(nonatomic) long long secondaryAvatarType;
@property(nonatomic) long long snapAttachmentType;
@property(retain, nonatomic) NSString *storeId;
@property(readonly, nonatomic) long long source;
- (void)startNewPageSession:(long long)arg1;
@end

