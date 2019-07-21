//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SCScannableActionProviderDelegate <NSObject>
- (void)handleErrorWithResponseDictionary:(NSDictionary *)arg1 errorData:(NSString *)arg2;
- (void)handleSuccessWithScannableActions:(NSArray *)arg1 responseDictionary:(NSDictionary *)arg2 scanData:(NSString *)arg3 scannableId:(NSString *)arg4 codeType:(int)arg5 version:(int)arg6 pageType:(long long)arg7 unlockProperties:(NSDictionary *)arg8;
- (void)timeoutTimerFired;
@end

