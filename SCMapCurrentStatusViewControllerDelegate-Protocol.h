//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapCurrentStatusViewController, SCMapExploreMyStatus, UIView;

@protocol SCMapCurrentStatusViewControllerDelegate <NSObject>
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 didDeleteMyStatus:(SCMapExploreMyStatus *)arg2 wasMostRecentStatus:(_Bool)arg3;
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 wantsToPresentStoryForUserId:(NSString *)arg2 fromBaseView:(UIView *)arg3;
- (void)mapCurrentStatusViewController:(SCMapCurrentStatusViewController *)arg1 wantsToShowProfileForUserId:(NSString *)arg2;
- (void)mapCurrentStatusViewControllerWantsToDismiss:(SCMapCurrentStatusViewController *)arg1;
@end
