//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCMapPassportAchievementAlertViewModel;
@protocol SCMapPassportAchievementAlertViewActionHandler;

@interface SCMapPassportAchievementAlertView : SCComposerView
{
}

@property(nonatomic) __weak id <SCMapPassportAchievementAlertViewActionHandler> actionHandler;
- (id)bundleName;
- (id)init;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
@property(readonly, nonatomic) SCMapPassportAchievementAlertView *root;
@property(retain, nonatomic) SCMapPassportAchievementAlertViewModel *viewModel;
- (id)viewName;

@end

