//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class NSDictionary, SCSearchActionButton, UILabel;

@interface SCImpalaBusinessProfileCardBaseView : SCComposerView
{
}

@property(readonly, nonatomic) SCSearchActionButton *actionButton;
- (id)bundleName;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(retain, nonatomic) NSDictionary *viewModel;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)viewName;

@end

