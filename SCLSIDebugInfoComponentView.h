//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCLSIDebugInfoComponentViewModel, UIView;

@interface SCLSIDebugInfoComponentView : SCComposerView
{
}

@property(readonly, nonatomic) UIView *backgroundGradient;
- (id)bundleName;
@property(readonly, nonatomic) UIView *dismissButton;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(readonly, nonatomic) UIView *pageHeader;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(retain, nonatomic) SCLSIDebugInfoComponentViewModel *viewModel;
- (id)viewName;

@end

