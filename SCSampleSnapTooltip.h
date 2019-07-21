//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTooltip-Protocol.h"

@class NSString, NSTimer, SCFriendsFeedSwipeableTableViewCell, SCLoadingIndicatorLayer, SCPlayer, SCPlayerView, UITableView, UIView;

@interface SCSampleSnapTooltip : NSObject <SCTooltip>
{
    UITableView *_feedTableView;
    UIView *_shadowView;
    SCPlayerView *_videoView;
    SCPlayer *_player;
    SCFriendsFeedSwipeableTableViewCell *_cell;
    SCLoadingIndicatorLayer *_percentArcLayer;
    NSTimer *_timer;
    double _duration;
}

- (void).cxx_destruct;
- (void)_animatePercentArcLayer;
- (void)_resetPercentArcLayerStrokesWithoutAnimation;
- (void)_setUpPlayer;
- (_Bool)_shouldShow;
- (void)_startPlayingFromStart;
- (void)_updateCell;
- (void)_updatePosition;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)hide;
- (id)initWithFeedTableView:(id)arg1;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
