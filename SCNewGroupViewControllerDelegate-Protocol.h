//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCNewGroupViewController, SCSendToSelectionResult;

@protocol SCNewGroupViewControllerDelegate <NSObject>
- (void)didPressArroyoConfirmationButton:(SCSendToSelectionResult *)arg1 viewController:(SCNewGroupViewController *)arg2 headerText:(NSString *)arg3;
- (void)didPressConfirmationButton:(SCSendToSelectionResult *)arg1 viewController:(SCNewGroupViewController *)arg2 headerText:(NSString *)arg3 messageText:(NSString *)arg4 deepLinkURLPath:(NSString *)arg5 creationType:(unsigned long long)arg6;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(SCNewGroupViewController *)arg2 completion:(void (^)(void))arg3;

@optional
- (void)didPressCameraButton:(SCSendToSelectionResult *)arg1 viewController:(SCNewGroupViewController *)arg2 headerText:(NSString *)arg3 creationType:(unsigned long long)arg4;
@end

