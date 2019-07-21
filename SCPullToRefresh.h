//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SCPullToRefreshDelegate;

@interface SCPullToRefresh : NSObject
{
    NSArray *_items;
    long long _state;
    double _triggerOffset;
    double _shookOffset;
    id <SCPullToRefreshDelegate> _delegate;
}

+ (id)defaultPullToRefresh;
+ (id)loadingSpinnerPullToRefresh;
- (void).cxx_destruct;
- (void)beginRefreshing;
@property(readonly, nonatomic) double defaultItemHeight;
@property(nonatomic) __weak id <SCPullToRefreshDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endRefreshing;
- (id)initWithPullToRefreshItems:(id)arg1;
- (id)itemForItemType:(long long)arg1;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)pullingOffsetDidChange:(double)arg1 isTracking:(_Bool)arg2;
@property(nonatomic) double shookOffset; // @synthesize shookOffset=_shookOffset;
- (void)setState:(long long)arg1;
@property(nonatomic) double triggerOffset; // @synthesize triggerOffset=_triggerOffset;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;

@end
