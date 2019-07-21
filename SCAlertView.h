//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseAlertView.h"

@class SCAlertTitleView, UIImageView, UILabel;

@interface SCAlertView : SCBaseAlertView
{
    UIImageView *_topIcon;
    SCAlertTitleView *_titleView;
    UILabel *_descriptionLabel;
}

+ (id)alertViewWithIcon:(id)arg1 title:(id)arg2 description:(id)arg3 hasSeparator:(_Bool)arg4 actions:(id)arg5 configuration:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
+ (id)alertViewWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3 configuration:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;
+ (id)alertViewWithTitle:(id)arg1 description:(id)arg2 hasSeparator:(_Bool)arg3 actions:(id)arg4 configuration:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;
+ (id)alertViewWithTitle:(id)arg1 description:(id)arg2 hasSeparator:(_Bool)arg3 extraContentItems:(id)arg4 actions:(id)arg5 configuration:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
+ (id)alertViewWithTopView:(id)arg1 title:(id)arg2 description:(id)arg3 hasSeparator:(_Bool)arg4 actions:(id)arg5 configuration:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
+ (id)createAlertDescriptionView:(id)arg1 hasTitle:(_Bool)arg2 textAlignment:(long long)arg3;
+ (id)createAlertTitleView:(id)arg1 hasSeparator:(_Bool)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithIcon:(id)arg1 title:(id)arg2 description:(id)arg3 hasSeparator:(_Bool)arg4 extraContentItems:(id)arg5 actions:(id)arg6 configuration:(CDUnknownBlockType)arg7 dismissHandler:(CDUnknownBlockType)arg8;
- (id)initWithTitle:(id)arg1 description:(id)arg2 actions:(id)arg3 configuration:(CDUnknownBlockType)arg4 dismissHandler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 description:(id)arg2 hasSeparator:(_Bool)arg3 actions:(id)arg4 configuration:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 description:(id)arg2 hasSeparator:(_Bool)arg3 extraContentItems:(id)arg4 actions:(id)arg5 configuration:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
- (id)initWithTopView:(id)arg1 title:(id)arg2 description:(id)arg3 hasSeparator:(_Bool)arg4 extraContentItems:(id)arg5 actions:(id)arg6 configuration:(CDUnknownBlockType)arg7 dismissHandler:(CDUnknownBlockType)arg8;
@property(readonly, nonatomic) SCAlertTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) UIImageView *topIcon; // @synthesize topIcon=_topIcon;

@end
