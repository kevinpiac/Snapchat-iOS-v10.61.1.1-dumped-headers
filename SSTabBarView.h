//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCPagingHeaderBadgeable-Protocol.h"

@class NSArray, NSString, SSTabBarItem;
@protocol SCPagingHeaderBadgeState, SSTabBarDelegate;

@interface SSTabBarView : UIView <SCPagingHeaderBadgeable>
{
    id <SSTabBarDelegate> _delegate;
    id <SCPagingHeaderBadgeState> _badgeState;
    NSArray *_items;
    SSTabBarItem *_selectedItem;
    UIView *_backgroundView;
}

+ (id)mainTabBar;
- (void).cxx_destruct;
- (void)_addActions;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <SCPagingHeaderBadgeState> badgeState; // @synthesize badgeState=_badgeState;
@property(nonatomic) __weak id <SSTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;
@property(retain, nonatomic) SSTabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void)setPagingBadgeStateWithInfo:(id)arg1 forIndex:(long long)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

