//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString, SCCognacAdsPersistenceService;

@interface SCCognacGetUnconsumedAdsRequestOperation : SCCognacWVJBRequestOperation
{
    NSString *_appId;
    SCCognacAdsPersistenceService *_persistenceService;
}

- (void).cxx_destruct;
- (void)_handleAdItemLookupCompletionWithItems:(id)arg1;
- (_Bool)_validateState;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacAdsPersistenceService *persistenceService; // @synthesize persistenceService=_persistenceService;
- (void)run;
- (void)teardown;

@end

