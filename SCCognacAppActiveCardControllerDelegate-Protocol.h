//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCognacAppActiveCardController;

@protocol SCCognacAppActiveCardControllerDelegate <NSObject>
- (void)cognacAppActiveCardController:(SCCognacAppActiveCardController *)arg1 didDismissAppActiveCardForAppId:(NSString *)arg2;
- (void)cognacAppActiveCardController:(SCCognacAppActiveCardController *)arg1 didPressJoinButtonForAppId:(NSString *)arg2;
- (void)cognacAppActiveCardController:(SCCognacAppActiveCardController *)arg1 didPressNotNowButtonForAppId:(NSString *)arg2;
- (void)cognacAppActiveCardController:(SCCognacAppActiveCardController *)arg1 didShowAppActiveCardForAppId:(NSString *)arg2;
@end

