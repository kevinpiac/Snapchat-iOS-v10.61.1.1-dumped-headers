//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SCTV3CallRequest;

@protocol SCTalkRPC <NSObject>
- (void)fetchCognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 successBlock:(void (^)(id <SCTAuth>))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (void)fetchSharedARAuthForExperienceId:(NSString *)arg1 participantId:(long long)arg2 successBlock:(void (^)(id <SCTAuth>))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (void)fetchTalkAuthForConvoIds:(NSArray *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
- (void)sendPushNotification:(id <SCTV3CallRequest>)arg1 successBlock:(void (^)(NSString *, NSArray *))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
@end

