//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol SCCPSessionDataSource <NSObject>
- (NSData *)cachedAddr;
- (double)cachedIpExpirationTime;
- (NSString *)gatewayServer;
- (_Bool)isDNSCacheValid;
- (_Bool)isValid;
- (NSDictionary *)sccpAuthDictionary;
- (NSString *)sccpHost;
- (unsigned short)sccpPort;
- (NSDictionary *)sccpServerDictionary;
- (void)updateDNSCache:(NSData *)arg1 expirationTime:(double)arg2;
- (void)updateWithAlternateSCCPServer:(NSDictionary *)arg1;
- (NSString *)username;
@end
