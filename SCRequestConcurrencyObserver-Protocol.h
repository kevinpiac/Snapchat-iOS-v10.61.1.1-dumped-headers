//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SCRequestConcurrencyObserver <NSObject>
- (NSDictionary *)finishRequest:(NSString *)arg1 requestType:(NSString *)arg2 requestId:(NSString *)arg3;
- (void)startReceivingDataForRequest:(NSString *)arg1 requestType:(NSString *)arg2 requestId:(NSString *)arg3;
- (void)startRequest:(NSString *)arg1 requestType:(NSString *)arg2 requestId:(NSString *)arg3;
- (void)startSendingDataForRequest:(NSString *)arg1 requestType:(NSString *)arg2 requestId:(NSString *)arg3;
@end
