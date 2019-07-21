//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCognacAdRules, SCCognacAdSDKInfo, SCCognacAdWatchInfo, UIViewController;
@protocol SCCognacAdsListener, SCCognacAdsManagerDelegate;

@protocol SCCognacAdsManager <NSObject>
- (void)addListener:(id <SCCognacAdsListener>)arg1;
- (void)clearAds;
- (void)initializeAdsWithRules:(SCCognacAdRules *)arg1 sdkInfo:(SCCognacAdSDKInfo *)arg2;
- (double)rateLimitTimeLeft;
- (void)removeListener:(id <SCCognacAdsListener>)arg1;
- (void)setDelegate:(id <SCCognacAdsManagerDelegate>)arg1;
- (void)watchAdWithPresentingViewController:(UIViewController *)arg1 watchInfo:(SCCognacAdWatchInfo *)arg2;
@end
