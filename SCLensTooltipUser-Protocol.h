//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensTooltipUser <NSObject>
- (_Bool)lensTooltipShownAfterDismiss;
- (_Bool)seenOpenLensTooltip;
- (void)setDisplayedLensesActivationTooltipWithSuccess:(_Bool)arg1;
- (void)setDisplayedReplyOnStoryTooltip;
- (void)setDisplayedReplyToSnapTooltip;
- (void)setLensTooltipShownAfterDismiss;
- (void)setSeenOpenLensTooltip;
- (void)setUsedReplyOnStoryTooltip;
- (void)setUsedReplyToSnapTooltip;
- (void)setUserClickedToTurnOffLens;
- (_Bool)shouldDisplayReplyOnStoryTooltip;
- (_Bool)shouldDisplayReplyToSnapTooltip;
- (_Bool)userClickedToTurnOffLens;
@end

