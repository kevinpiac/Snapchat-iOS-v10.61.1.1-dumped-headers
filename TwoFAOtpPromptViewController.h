//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

@class NSString, SCButton, SCUserSession, UILabel;

@interface TwoFAOtpPromptViewController : SCGenericSettingsViewController
{
    NSString *_pageViewName;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    SCButton *_continueButton;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
- (void)continueButtonPressed;
- (void)createContinueButton;
- (void)createHeaderRightButton;
- (id)createLabelWithText:(id)arg1 font:(id)arg2;
- (void)createLabels;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (_Bool)disableLeftSwipe;
- (id)getPageViewName;
- (id)getTitle;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 userSession:(id)arg3;
- (void)loadView;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void)presentTwoFASetupOTPView;
- (void)rightButtonPressed;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

