//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCFastPaging, UIView;

@protocol SCFastPagingDelegate <NSObject>
- (UIView *)fastPaging:(SCFastPaging *)arg1 accessoryViewForPageAtIndex:(long long)arg2;
- (UIView *)fastPaging:(SCFastPaging *)arg1 viewForPageAtIndex:(long long)arg2;
- (void)fastPaging:(SCFastPaging *)arg1 willNavigateToPageIndex:(long long)arg2 withBounceOffset:(double)arg3;
@end

