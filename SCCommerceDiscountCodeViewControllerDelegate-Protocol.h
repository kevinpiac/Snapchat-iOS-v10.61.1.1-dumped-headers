//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCommerceDiscountCodeViewController;

@protocol SCCommerceDiscountCodeViewControllerDelegate <NSObject>
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didAddDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didRemoveDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

