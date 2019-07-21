//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCDiscoverFeedScrollTrackerDelegate;

@interface SCDiscoverFeedScrollTracker : NSObject
{
    NSMutableDictionary *_trackingDict;
    id <SCDiscoverFeedScrollTrackerDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)_gestForScrollAxis:(long long)arg1 startingContentOffset:(double)arg2 endingContentOffset:(double)arg3;
@property(nonatomic) __weak id <SCDiscoverFeedScrollTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)scrollDidEndWithIdentifier:(id)arg1 feedType:(id)arg2 endingContentOffset:(double)arg3 endScrollingTimestamp:(id)arg4;
- (void)scrollStartedWithIdentifier:(id)arg1 scrollAxis:(long long)arg2 startingContentOffset:(double)arg3 startScrollingTimestamp:(id)arg4;

@end
