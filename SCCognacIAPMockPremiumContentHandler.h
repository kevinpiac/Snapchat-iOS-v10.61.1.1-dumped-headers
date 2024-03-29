//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString, SCCognacIAPMockDataStorage, SCCognacIAPMockPremiumContentListenerAnnouncer, SCCognacServiceCoordinator;

@interface SCCognacIAPMockPremiumContentHandler : NSObject <SCUserSessionScoped>
{
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacIAPMockDataStorage *_mockDataStorage;
    _Bool _invalidated;
    NSMutableDictionary *_purchaseConfigs;
    SCCognacIAPMockPremiumContentListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_didPressBuyButtonWithMockProduct:(id)arg1;
- (void)_grantWithMockProduct:(id)arg1;
- (id)_makeWindowToShowAlert;
- (void)_showConfirmationAlertWithMockProduct:(id)arg1;
- (void)_showSuccessAlert;
- (void)addListener:(id)arg1;
- (void)fetchMockPremiumContentProductsWithProductIds:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithCognacServiceCoordinator:(id)arg1 mockDataStorage:(id)arg2;
- (void)invalidate;
- (_Bool)purchaseMockPremiumContentWithPurchaseConfig:(id)arg1 error:(id *)arg2;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

