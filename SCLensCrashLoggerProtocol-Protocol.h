//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol SCLensCrashLoggerProtocol <NSObject>
- (void (^)(NSError *))defaultErrorHandlerWithSelector:(SEL)arg1;
- (void (^)(NSError *))handlerWithLensId:(NSString *)arg1 selector:(SEL)arg2;
- (void)logCrashError:(NSError *)arg1 lensId:(NSString *)arg2 selector:(SEL)arg3;
- (void)logCrashError:(NSError *)arg1 selector:(SEL)arg2;
@end

