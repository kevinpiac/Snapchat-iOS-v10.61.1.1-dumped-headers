//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChunkItem.h"

@class NSArray;

@interface SCChunkAdCameraItem : SCChunkItem
{
    NSArray *_lenses;
}

+ (id)_lensItems:(id)arg1;
- (void).cxx_destruct;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
- (void)saveMediaToCache;

@end

