//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString, SCCommercePaymentCardDataModel;
@protocol OS_dispatch_queue;

@protocol SCCommercePaymentInfoMutating
- (void)addPaymentMethod:(SCCommercePaymentCardDataModel *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSString *, NSError *))arg3;
- (void)deletePaymentMethod:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)updatePaymentMethod:(SCCommercePaymentCardDataModel *)arg1 paymentIdentifier:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(NSString *, NSError *))arg4;
@end

