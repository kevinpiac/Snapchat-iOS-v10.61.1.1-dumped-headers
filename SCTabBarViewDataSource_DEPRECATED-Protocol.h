//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCHovaTabBarView, UIView;

@protocol SCTabBarViewDataSource_DEPRECATED <NSObject>
- (double)tabBarView:(SCHovaTabBarView *)arg1 clampedHorizontalVisibilityForItemType:(long long)arg2;
- (struct CGRect)tabBarView:(SCHovaTabBarView *)arg1 frameForItemWithType:(long long)arg2 inView:(UIView *)arg3;
- (double)tabBarView:(SCHovaTabBarView *)arg1 horizontalVisibilityForItemType:(long long)arg2;
- (_Bool)tabBarView:(SCHovaTabBarView *)arg1 shouldKeepSpaceForItemType:(long long)arg2;
- (_Bool)tabBarView:(SCHovaTabBarView *)arg1 shouldVerticallyClipItemOfType:(long long)arg2;
- (double)tabBarView:(SCHovaTabBarView *)arg1 verticalVisibilityForItemType:(long long)arg2;
- (double)tabBarView:(SCHovaTabBarView *)arg1 visibilityForItemViewWithItemType:(long long)arg2;
- (_Bool)tabBarViewIsTransitioningToPresentedController:(SCHovaTabBarView *)arg1;
- (double)tabBarViewVerticalClippingHeight:(SCHovaTabBarView *)arg1;
- (double)tabBarViewVisibilityPercentForPresentedController:(SCHovaTabBarView *)arg1;
- (struct _NSRange)visibleRangeForTabBarView:(SCHovaTabBarView *)arg1;
@end

