//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface SCActionFooterItem : NSObject
{
    NSArray *_items;
    long long _interfaceStyle;
    UIView *_actionButton;
    long long _selectedIndex;
}

- (void).cxx_destruct;
- (void)_updateItems;
@property(retain, nonatomic) UIView *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;

@end

