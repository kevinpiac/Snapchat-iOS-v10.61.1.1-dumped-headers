//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

@protocol SCTooltip;

@interface SCLensExplorerTooltipManager : SCOnboardingTooltipManager
{
    id <SCTooltip> _lensTooltip;
    id <SCTooltip> _swipeUpTooltip;
}

- (void).cxx_destruct;
- (id)getNextAvailableTooltip;
- (id)initWithParentView:(id)arg1 toolTipStatus:(id)arg2;
@property(readonly, nonatomic) id <SCTooltip> lensTooltip; // @synthesize lensTooltip=_lensTooltip;
@property(readonly, nonatomic) id <SCTooltip> swipeUpTooltip; // @synthesize swipeUpTooltip=_swipeUpTooltip;

@end

