//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;
@protocol SCPerforming;

@interface SCDDMLFriendRankingAppManager : NSObject
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_featuresFromFeedFeatureManager:(id)arg1 feedId:(id)arg2 rankingFeatures:(id)arg3;
- (void)_handleClientSideSignal:(id)arg1 featureDictionary:(id)arg2;
- (void)_handleServerSideSignal:(id)arg1 featureDictionary:(id)arg2;
- (float)getFeedClickedProb:(id)arg1 rankingFeatures:(id)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)refreshModels;
- (id)transform:(id)arg1 rankingFeatures:(id)arg2;

@end

