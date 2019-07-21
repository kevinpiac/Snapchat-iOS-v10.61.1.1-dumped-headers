//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensChallengeStickerOnPreview-Protocol.h"

@class NSArray, NSString, SCLazy, SCLensChallengesSectionItem, SCPreviewConfiguration;
@protocol SCPreviewFeatureStickerContainer;

@interface SCFeatureLensChallengeStickerOnPreviewImpl : SCFeature <SCFeatureLensChallengeStickerOnPreview>
{
    SCLazy *_lensChallengeSchedule;
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    SCPreviewConfiguration *_configuration;
    SCLazy *_lensExplorerItemCreator;
    NSArray *_lensChallengesScheduleItems;
}

- (void).cxx_destruct;
- (void)_insertStickerForSongMetadata:(id)arg1 stickerId:(id)arg2;
- (void)activate;
- (void)attachLensChallengeStickerIfNeeded;
- (id)initWithLensChallengeSchedule:(id)arg1 stickerContainer:(id)arg2 configuration:(id)arg3 lensExplorerItemCreator:(id)arg4;
@property(readonly, nonatomic) NSString *lensChallengeName;
@property(readonly, nonatomic) SCLensChallengesSectionItem *lensChallengeScheduleItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

