//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@interface SCCheetahTooltipGroupStory : SCOnboardingTooltip
{
    _Bool _complete;
}

- (id)_textForStoryName:(id)arg1 storyType:(long long)arg2 source:(long long)arg3;
- (id)_tooltipAppearanceForStoryName:(id)arg1 storyType:(long long)arg2 source:(long long)arg3;
- (id)initWithAvatarView:(id)arg1 storyName:(id)arg2 storyType:(long long)arg3 source:(long long)arg4;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)willShow;

@end
