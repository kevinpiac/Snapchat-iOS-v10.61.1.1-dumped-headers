//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SOJUCommerceProductInfo, SOJUCommerceProductVariant, SOJUCommerceStorePixelInfo;

@protocol SCCommercePixelMetricsLogger <NSObject>
- (void)logAddBillingWithItemIds:(NSArray *)arg1 pixelInfo:(SOJUCommerceStorePixelInfo *)arg2 success:(_Bool)arg3;
- (void)logAddToCartWithProduct:(SOJUCommerceProductInfo *)arg1 variant:(SOJUCommerceProductVariant *)arg2;
- (void)logViewContentWithProduct:(SOJUCommerceProductInfo *)arg1 variant:(SOJUCommerceProductVariant *)arg2;
@end

