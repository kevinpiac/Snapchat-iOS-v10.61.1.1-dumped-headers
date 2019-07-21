//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsAdPlacement-Protocol.h"

@class NSDictionary, NSString, SCSnapAdsAdErrorResponse;

@interface SCAdPlacement : NSObject <SCSnapAdsAdPlacement>
{
    NSDictionary *_targetingParams;
    SCSnapAdsAdErrorResponse *_error;
    NSString *_adRequestId;
}

- (void).cxx_destruct;
- (id)adRequestClientId;
@property(copy, nonatomic) NSString *adRequestId; // @synthesize adRequestId=_adRequestId;
- (id)adUnitId;
@property(retain, nonatomic) SCSnapAdsAdErrorResponse *error; // @synthesize error=_error;
- (id)initWithAdRequestId:(id)arg1 targetingParams:(id)arg2;
- (id)targetingParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

