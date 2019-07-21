//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary, SCContextMetaFeatureManager, SCStickerTagFuzzySearch;
@protocol SCPerforming;

@interface SCStickerMetadataRecommendationRanker : NSObject
{
    SCContextMetaFeatureManager *_contextMetaFeatureManager;
    SCStickerTagFuzzySearch *_stickerTagFuzzySearch;
    id <SCPerforming> _performer;
    NSCalendar *_gregorian;
    NSMutableDictionary *_tagToStickersMap;
}

- (void).cxx_destruct;
- (void)_getRecommendedStickersWithAlltags:(id)arg1 key:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_getSearchTagsFromStickerTags:(id)arg1;
- (id)initWithContextFeatureManager:(id)arg1 stickerSearch:(id)arg2;
- (id)metaStickerResult;
- (void)rank:(CDUnknownBlockType)arg1;

@end
