//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSTimer, UIButton, UIView;

@interface SCCheetahLongImpressionDebugger : NSObject
{
    UIView *_debuggerView;
    UIButton *_hideButton;
    NSArray *_viewItems;
    NSMutableDictionary *_itemLoggedCountDict;
    NSTimer *_timer;
    NSMutableArray *_indicatorViews;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_hide;
- (void)_indicateLoggedItem:(id)arg1;
- (void)_show;
- (void)_updateImpressionItems:(id)arg1 viewItems:(id)arg2 date:(id)arg3 viewPort:(struct CGRect)arg4 impressionTime:(double)arg5;
- (id)init;
- (void)reset;
- (void)setupView:(struct CGRect)arg1;
- (void)updateImpressedItems:(id)arg1;
- (void)updateImpressionItems:(id)arg1 viewItems:(id)arg2 date:(id)arg3 viewPort:(struct CGRect)arg4 impressionTime:(double)arg5;

@end

