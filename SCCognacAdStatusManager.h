//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAdsListener-Protocol.h"

@class NSMutableSet, NSString, WKWebViewJavascriptBridge;
@protocol SCCognacAdsManager;

@interface SCCognacAdStatusManager : NSObject <SCCognacAdsListener>
{
    id <SCCognacAdsManager> _adsManager;
    WKWebViewJavascriptBridge *_bridge;
    NSMutableSet *_availableSlotIds;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (id)getAdStatusWithSlotId:(id)arg1;
- (id)initWithAdsManager:(id)arg1;
- (void)onAdErrorWithSlotId:(id)arg1 requestId:(id)arg2 AdRequestError:(id)arg3;
- (void)onAdRateLimitedWithSlotId:(id)arg1 requestId:(id)arg2 rateLimitTimeLeftInSec:(double)arg3;
- (void)onAdReadyWithSlotId:(id)arg1 requestId:(id)arg2;
- (void)resetAdStatusWithSlotId:(id)arg1;
- (void)setUpWithWebViewBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

