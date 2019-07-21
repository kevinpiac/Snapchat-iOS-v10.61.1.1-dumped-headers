//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@class SCFriendsFeedSwipeableTableViewCell, UITableView;

@interface SCTeamSnapchatCellTooltip : SCOnboardingTooltip
{
    UITableView *_friendsFeedTableView;
    SCFriendsFeedSwipeableTableViewCell *_cell;
    double _xPosition;
}

- (void).cxx_destruct;
- (void)_refresh;
- (void)_updateCell;
- (void)_updatePosition;
- (id)initWithView:(id)arg1 appearance:(id)arg2;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
@property(nonatomic) double xPosition; // @synthesize xPosition=_xPosition;
- (_Bool)shouldShow;
- (void)show;
- (void)willShow;

@end

