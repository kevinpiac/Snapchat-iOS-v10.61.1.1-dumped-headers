//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol SCContextV2UserInfoProvider <NSObject>
- (NSString *)fetchDisplayFirstNameForUsername:(NSString *)arg1;
- (void)fetchMentionStatisticsForUsernames:(NSSet *)arg1 andUserIds:(NSSet *)arg2 completion:(void (^)(struct))arg3;
- (void)fetchUserAgeWithCompletion:(void (^)(_Bool, long long))arg1;
- (NSString *)userCountryCode;
@end

