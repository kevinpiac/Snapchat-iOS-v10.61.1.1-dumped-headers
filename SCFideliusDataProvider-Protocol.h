//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCEllipticCurveCrypto, SCFideliusServiceProvider, SCFideliusUserDatabaseManager, SCUserSession;

@protocol SCFideliusDataProvider <NSObject>
- (_Bool)isBetaReady:(NSString *)arg1;
- (_Bool)isReady:(NSString *)arg1;
- (NSString *)loadingStatus;
- (SCEllipticCurveCrypto *)myBeta;
- (void)reInitialize;
- (SCFideliusServiceProvider *)services;
- (SCFideliusUserDatabaseManager *)userDbManager;
- (SCUserSession *)userSession;
@end

