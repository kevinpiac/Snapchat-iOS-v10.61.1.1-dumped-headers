//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SOJUAdCommonSnapAdImpressionTrack;

@interface SOJUAdCollectionImpressionTrackBuilder : NSObject
{
    SOJUAdCommonSnapAdImpressionTrack *_topsnapImpression;
    NSArray *_collectionItemsTrack;
}

+ (id)withJUAdCollectionImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCollectionItemsTrack:(id)arg1;
- (id)setTopsnapImpression:(id)arg1;

@end

