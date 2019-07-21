//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError;

@protocol SCCPSessionDelegate <NSObject>
- (void)didEndSessionWithError:(NSError *)arg1;
- (void)didFailToStartSessionWithError:(NSError *)arg1 updatedServerInfo:(NSDictionary *)arg2 gatewayReachable:(_Bool)arg3 triggerSource:(long long)arg4;
- (void)didReceiveJSONDictionary:(NSDictionary *)arg1;
- (void)didStartSession:(NSData *)arg1 triggerSource:(long long)arg2;
- (_Bool)isDNSCacheEnabled;
@end

