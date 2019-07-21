//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, SCFeatureSettingsManager, SCFeedHeaderPromptV2ProtoSettingsEntity, SCFeedHeaderPromptV2ProtoSyncStatesEntity;
@protocol SCObserving, SCPerforming;

@interface SCFeedHeaderPromptDataCoordinator : NSObject
{
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCPerforming> _performer;
    SCFeedHeaderPromptV2ProtoSettingsEntity *_settingsEntity;
    NSArray *_rankedPromptV2ProtoSettings;
    id <SCObserving> _promptSettingsObserveContext;
    SCFeedHeaderPromptV2ProtoSyncStatesEntity *_syncStatesEntity;
    NSMutableDictionary *_promptV2ProtoSyncStates;
    id <SCObserving> _promptSyncStatesObserveContext;
}

- (void).cxx_destruct;
- (void)_expireExistingPromptsIfNecessary;
- (void)_fetchAndObservePromptSettingsIfNecessary;
- (void)_fetchAndObservePromptSyncStatesIfNecessary;
- (void)_fetchPromptDataWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_markPromptAsDisplayedWithProtoPromptType:(int)arg1 displayedTimeInSecs:(double)arg2;
- (void)_markPromptAsSeenWithProtoPromptType:(int)arg1 seenTimeInSecs:(double)arg2;
- (void)_observePromptSettingsChanges;
- (void)_observePromptSyncStatesChanges;
- (void)_updatePromptSettingsWithSettings:(id)arg1;
- (void)_updatePromptSyncStatesWithSyncStates:(id)arg1;
- (void)_updateSyncStatesEntityToFeatureSettings;
- (void)fetchPromptDataWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithFeatureSettingsManager:(id)arg1;
- (void)markPromptAsDisplayedWithProtoPromptType:(int)arg1 displayedTimeInSecs:(double)arg2;
- (void)markPromptAsSeenWithProtoPromptType:(int)arg1 seenTimeInSecs:(double)arg2;

@end

