//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol SCCacheSyncMixin <NSObject>
- (id)syncGetObjectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2;
- (id)syncGetObjectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 resetExpiration:(NSDate *)arg3 whenLessThanDelta:(double)arg4;
- (id)syncGetObjectForKey:(NSString *)arg1 dataDecoding:(id (^)(NSData *))arg2 resetExpiration:(NSDate *)arg3 whenLessThanDelta:(double)arg4 returnExpired:(_Bool)arg5;
- (_Bool)syncSetObject:(id)arg1 dataEncoding:(id (^)(NSData *))arg2 forKey:(NSString *)arg3 expiration:(NSDate *)arg4;
@end

