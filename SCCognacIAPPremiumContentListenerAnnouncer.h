//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacIAPPremiumContentListener-Protocol.h"

@class NSString;

@interface SCCognacIAPPremiumContentListenerAnnouncer : NSObject <SCCognacIAPPremiumContentListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCCognacIAPPremiumContentListener>, std::__1::allocator<__weak id<SCCognacIAPPremiumContentListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionDeferred:(id)arg3;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionFailed:(id)arg3 error:(id)arg4;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionGrantFailed:(id)arg3 error:(id)arg4;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionGrantSucceeded:(id)arg3;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionGranting:(id)arg3;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionPurchased:(id)arg3;
- (void)premiumContentHandler:(id)arg1 purchaseConfig:(id)arg2 transactionPurchasing:(id)arg3;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
