//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapAttributionInformation, UINavigationController, UIViewController;

@protocol SCLocationSharingSettingsPresenting <NSObject>
- (void)dismissWithCompletion:(void (^)(void))arg1;
- (void)presentLocationSharingSettingsOnViewController:(UIViewController *)arg1 attributionInfo:(SCMapAttributionInformation *)arg2 options:(unsigned long long)arg3 source:(long long)arg4 completion:(void (^)(void))arg5;
- (void)presentLocationSharingSettingsWithNavigationController:(UINavigationController *)arg1 attributionInfo:(SCMapAttributionInformation *)arg2 options:(unsigned long long)arg3 source:(long long)arg4;
@end

