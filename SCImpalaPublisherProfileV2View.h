//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCImpalaPublisherProfileV2ViewModel, UIView;

@interface SCImpalaPublisherProfileV2View : SCComposerView
{
}

- (id)bundleName;
@property(readonly, nonatomic) UIView *errorView;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(readonly, nonatomic) UIView *mainActionSheet;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(readonly, nonatomic) UIView *secondaryActionSheet;
@property(retain, nonatomic) SCImpalaPublisherProfileV2ViewModel *viewModel;
@property(readonly, nonatomic) UIView *tabViewSection;
- (id)viewName;

@end
