//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, NSArray, SCActionToolbarButtonItem, SCActionToolbarItemView;

@interface SCActionToolbarItem : NSObject
{
    NSArray *_barItems;
    NSArray *_groupedLeftBarItems;
    NSArray *_groupedRightBarItems;
    SCActionToolbarButtonItem *_centerItem;
    SCActionToolbarButtonItem *_sticyBarItem;
    long long _motionDirection;
    SCActionToolbarItemView *_view;
    FBKVOController *_kvoController;
    long long _style;
    long long _anchor;
    double _percentVisible;
    double _percentDark;
    double _peekingWidth;
}

- (void).cxx_destruct;
- (void)_addObserversForItems:(id)arg1;
- (void)_removeObserversForItems:(id)arg1;
@property(nonatomic) long long anchor; // @synthesize anchor=_anchor;
- (struct CGPoint)anchorPoint;
@property(copy, nonatomic) NSArray *barItems; // @synthesize barItems=_barItems;
@property(retain, nonatomic) SCActionToolbarButtonItem *centerItem; // @synthesize centerItem=_centerItem;
@property(copy, nonatomic) NSArray *groupedLeftBarItems; // @synthesize groupedLeftBarItems=_groupedLeftBarItems;
@property(copy, nonatomic) NSArray *groupedRightBarItems; // @synthesize groupedRightBarItems=_groupedRightBarItems;
- (id)initWithStyle:(long long)arg1 anchor:(long long)arg2;
@property(readonly, nonatomic, getter=isToolbarPeeking) _Bool toolbarPeeking;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(readonly, nonatomic) long long motionDirection; // @synthesize motionDirection=_motionDirection;
@property(nonatomic) double peekingWidth; // @synthesize peekingWidth=_peekingWidth;
@property(nonatomic) double percentDark; // @synthesize percentDark=_percentDark;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (void)setMotionDirection:(long long)arg1;
- (void)setStickyBarItem:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) SCActionToolbarItemView *view; // @synthesize view=_view;
@property(readonly, nonatomic) SCActionToolbarButtonItem *sticyBarItem; // @synthesize sticyBarItem=_sticyBarItem;

@end
