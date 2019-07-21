//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDiscoverFeedInteractionEventFloatType;

@interface SCCheetahCorpusInteractionHistoryBuilder : NSObject
{
    unsigned int _corpus;
    SCDiscoverFeedInteractionEventFloatType *_numSnapViews;
    SCDiscoverFeedInteractionEventFloatType *_watchTime;
    SCDiscoverFeedInteractionEventFloatType *_impressionTime;
    SCDiscoverFeedInteractionEventFloatType *_qualifiedImpressionTime;
    SCDiscoverFeedInteractionEventFloatType *_shortImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_longImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_qualifiedLongImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_shortViewScore;
    SCDiscoverFeedInteractionEventFloatType *_longViewScore;
    unsigned int _numHides;
    unsigned int _numSubscribes;
}

+ (id)cheetahCorpusInteractionHistory;
+ (id)cheetahCorpusInteractionHistoryFromExistingCheetahCorpusInteractionHistory:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withCorpus:(unsigned int)arg1;
- (id)withImpressionTime:(id)arg1;
- (id)withLongImpressionScore:(id)arg1;
- (id)withLongViewScore:(id)arg1;
- (id)withNumHides:(unsigned int)arg1;
- (id)withNumSnapViews:(id)arg1;
- (id)withNumSubscribes:(unsigned int)arg1;
- (id)withQualifiedImpressionTime:(id)arg1;
- (id)withQualifiedLongImpressionScore:(id)arg1;
- (id)withShortImpressionScore:(id)arg1;
- (id)withShortViewScore:(id)arg1;
- (id)withWatchTime:(id)arg1;

@end
