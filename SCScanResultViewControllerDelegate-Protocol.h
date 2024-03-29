//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCScanCardTableViewCell, SCScanResultViewController;

@protocol SCScanResultViewControllerDelegate <NSObject>
- (void)scanResultViewControllerDidDismiss:(SCScanResultViewController *)arg1 dismissType:(unsigned long long)arg2;

@optional
- (SCScanCardTableViewCell *)scanResultViewController:(SCScanResultViewController *)arg1 cardToReplaceScanCard:(SCScanCardTableViewCell *)arg2;
- (void)scanResultViewController:(SCScanResultViewController *)arg1 didPressChatForUsername:(NSString *)arg2;
- (void)scanResultViewController:(SCScanResultViewController *)arg1 didPressSnapForUsername:(NSString *)arg2;
- (_Bool)scanResultViewController:(SCScanResultViewController *)arg1 shouldShowCard:(SCScanCardTableViewCell *)arg2;
@end

