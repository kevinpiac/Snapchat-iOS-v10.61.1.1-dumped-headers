//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapCarouselPersonRowControllerDelegate-Protocol.h"

@class NSArray, NSString, NSURL, SCMapExplorerVerticalScrollingView, SCMapPerson, SCMapReplyMessageContent, UIView;

@protocol SCMapExplorerVerticalScrollingViewDelegate <SCMapCarouselPersonRowControllerDelegate>
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsChatForPeople:(NSArray *)arg2;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToNavigateToURL:(NSURL *)arg2;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToPresentReplyCameraForUserId:(NSString *)arg2;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToPresentStoriesForPerson:(SCMapPerson *)arg2 fromSourceView:(UIView *)arg3;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToPresentStoryWithPoiId:(NSString *)arg2 fromSourceView:(UIView *)arg3;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToSendReplyMessage:(SCMapReplyMessageContent *)arg2 toUserId:(NSString *)arg3;
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsToShowMiniProfileForPerson:(SCMapPerson *)arg2;
- (void)explorerVerticalScrollingViewDidTapCard:(SCMapExplorerVerticalScrollingView *)arg1;
@end
