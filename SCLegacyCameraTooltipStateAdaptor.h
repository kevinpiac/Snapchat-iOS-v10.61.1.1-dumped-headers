//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraTooltipState-Protocol.h"

@interface SCLegacyCameraTooltipStateAdaptor : NSObject <SCCameraTooltipState>
{
}

- (void)decrementLensesActivationTooltipShowCount;
- (void)incrementLensesActivationTooltipShowCount;
- (void)incrementSnapCountBeforeShowLensesActivationTooltip;
- (unsigned long long)lensesActivationTooltipShownCount;
- (void)setDidTakePictureOrVideo;
- (void)setDisplayedLensesActivationTooltipWithSuccess:(_Bool)arg1;
- (void)setHasSeenNewFriendRequestTooltip;
- (unsigned long long)snapCountBeforeShowLensesActivationTooltip;

@end

