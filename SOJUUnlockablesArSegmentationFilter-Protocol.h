//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, SOJUContextFilterSkyItem, SOJUPurikuraPatternItem;

@protocol SOJUUnlockablesArSegmentationFilter <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUPurikuraPatternItem *portrait;
@property(readonly, copy, nonatomic) NSNumber *shouldStillDisplayWithoutSegmentationMatch;
@property(readonly, copy, nonatomic) SOJUContextFilterSkyItem *sky;
@end

