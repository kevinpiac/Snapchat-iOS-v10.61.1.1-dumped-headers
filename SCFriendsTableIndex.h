//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol FriendsTableIndexDelegate;

@interface SCFriendsTableIndex : UIView <UIGestureRecognizerDelegate>
{
    NSArray *_sections;
    NSString *_quickAddString;
    _Bool _lightColorSchemeEnabled;
    _Bool _selected;
    UIView *background;
    id <FriendsTableIndexDelegate> _delegate;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _indexStyle;
}

+ (id)getTitleDictWithStyle:(long long)arg1 quickAddString:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *background; // @synthesize background;
- (BOOL)charForIndex:(long long)arg1;
@property(nonatomic) __weak id <FriendsTableIndexDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getSectionKeyAndTitleMapper;
- (id)getTitleForSection:(id)arg1;
- (long long)indexCount;
@property(nonatomic) long long indexStyle; // @synthesize indexStyle=_indexStyle;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 lightColorSchemeEnabled:(_Bool)arg3;
- (void)layoutSubviews;
- (void)longPress:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)setQuickAddString:(id)arg1;
- (void)setupGestureRecognizers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

