//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdTileImpressionTrack;

@protocol SOJUAdStoryImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *creativeId;
@property(readonly, copy, nonatomic) NSString *exitEvent;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn;
@property(readonly, copy, nonatomic) NSNumber *mediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *snapCount;
@property(readonly, copy, nonatomic) NSArray *snapImpressions;
@property(readonly, copy, nonatomic) SOJUAdTileImpressionTrack *tileImpression;
@property(readonly, copy, nonatomic) NSNumber *timeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *totalSwipeUps;
@property(readonly, copy, nonatomic) NSNumber *uniqueSwipeUps;
@property(readonly, copy, nonatomic) NSNumber *viewedSnapIndex;
@end

