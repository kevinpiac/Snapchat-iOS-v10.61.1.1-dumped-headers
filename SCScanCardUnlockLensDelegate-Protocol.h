//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SCDeeplinkShareController, SCLens, SCReportPageViewController;

@protocol SCScanCardUnlockLensDelegate <NSObject>
- (void)reportLensWithController:(SCReportPageViewController *)arg1;
- (void)sendLensURLWithController:(SCDeeplinkShareController *)arg1 lens:(SCLens *)arg2;
- (void)shareLensURL:(NSURL *)arg1;
@end

