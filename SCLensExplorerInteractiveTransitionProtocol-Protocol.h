//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol SCLensExplorerInteractiveTransitionProtocol <NSObject>
- (void)handleBeginDraggingFromScrollView:(UIScrollView *)arg1;
- (void)handleEndDraggingFromScrollView:(UIScrollView *)arg1;
- (void)handlePresentationCanceled;
- (void)handlePresentationEnd;
- (void)handlePresentationStart;
- (void)handlePresentationWithOffset:(double)arg1 velocity:(double)arg2;
- (void)handleScrollFromScrollView:(UIScrollView *)arg1;
@end

