//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"

@class NSDictionary, NSString;
@protocol SCNetworkingRankingUserInfoProvider, SCPerforming;

@interface SCNetworkingRanking : NSObject <SCEventListener>
{
    id <SCPerforming> _queuePerformer;
    NSDictionary *_userProfileMap;
    NSDictionary *_rankingModelMap;
    NSDictionary *_feedRankingRecords;
    id <SCNetworkingRankingUserInfoProvider> _userinfoProvider;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)calculateScoreWithContext:(id)arg1 contextScore:(unsigned long long)arg2 userInitiated:(_Bool)arg3 type:(id)arg4 networkCondition:(id)arg5 feedRankingScore:(id)arg6 isRunning:(_Bool)arg7;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain) NSDictionary *feedRankingRecords; // @synthesize feedRankingRecords=_feedRankingRecords;
- (id)feedRankingScore:(id)arg1;
- (id)init;
- (_Bool)isModelAvailable;
- (id)modelVersion;
@property(retain) NSDictionary *rankingModelMap; // @synthesize rankingModelMap=_rankingModelMap;
- (void)reset;
@property(retain) NSDictionary *userProfileMap; // @synthesize userProfileMap=_userProfileMap;
@property(nonatomic) __weak id <SCNetworkingRankingUserInfoProvider> userinfoProvider; // @synthesize userinfoProvider=_userinfoProvider;
- (void)updateUserProfileMap:(id)arg1;
- (id)username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
