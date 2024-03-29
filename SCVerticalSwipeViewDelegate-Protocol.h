//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCVerticalSwipeView, UIScrollView;

@protocol SCVerticalSwipeViewDelegate <NSObject>

@optional
- (void)bottomSubviewScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)bottomSubviewScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)bottomSubviewScrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 bottomSubviewDidBecomeVisible:(_Bool)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 didChangePageIndex:(unsigned long long)arg2;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 didScrollToOffset:(double)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(SCVerticalSwipeView *)arg1 pageDidFullyAppearForIndex:(unsigned long long)arg2 offsetEnabled:(_Bool)arg3;
@end

