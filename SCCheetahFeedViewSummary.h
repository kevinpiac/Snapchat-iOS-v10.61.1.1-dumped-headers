//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary;

@interface SCCheetahFeedViewSummary : NSObject
{
    NSMutableDictionary *_sectionFeedViewSummaryDict;
    _Bool _hasEnded;
    NSDate *_pageOpenTimestamp;
    NSDictionary *_closingData;
}

- (void).cxx_destruct;
- (id)_getSectionForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *closingData; // @synthesize closingData=_closingData;
- (id)feedViewDidEnd;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
- (id)initWithOpenTimestamp:(id)arg1 sections:(id)arg2;
@property(readonly, nonatomic) NSDate *pageOpenTimestamp; // @synthesize pageOpenTimestamp=_pageOpenTimestamp;
- (void)sectionFeedView:(id)arg1 initialUnreadItemCount:(long long)arg2;
- (void)sectionFeedView:(id)arg1 itemsAvailable:(id)arg2;
- (void)sectionFeedView:(id)arg1 setUncompletedStoryCount:(long long)arg2;

@end

