//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, SOJUAdOpportunityRequestIds;

@protocol SOJUUnlockablesGtqUnlockablesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *assetPrecachedFilters;
@property(readonly, copy, nonatomic) NSArray *bitmojiFilters;
@property(readonly, copy, nonatomic) NSArray *checksumResponseList;
@property(readonly, copy, nonatomic) NSArray *filters;
@property(readonly, copy, nonatomic) NSArray *invalidFilterIds;
@property(readonly, copy, nonatomic) NSArray *lenses;
@property(readonly, copy, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds;
@property(readonly, copy, nonatomic) NSArray *prefetchLenses;
@property(readonly, copy, nonatomic) NSArray *previewCaptionStyles;
@property(readonly, copy, nonatomic) NSArray *purposes;
@property(readonly, copy, nonatomic) NSArray *stickers;
@end

