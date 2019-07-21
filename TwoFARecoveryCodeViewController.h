//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

@class NSString, SCButton, SCUserSession;
@protocol TwoFARecoveryCodeViewBackDelegate;

@interface TwoFARecoveryCodeViewController : SCGenericSettingsViewController
{
    _Bool _showSkip;
    _Bool _showBack;
    id <TwoFARecoveryCodeViewBackDelegate> _delegate;
    NSString *_pageViewName;
    NSString *_infoText;
    SCButton *_continueButton;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
- (void)continueButtonPressed;
- (void)createBackgroundImageView;
- (void)createContinueButton;
- (void)createHeaderRightButton;
- (void)createLabel;
@property(nonatomic) __weak id <TwoFARecoveryCodeViewBackDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)disableLeftSwipe;
- (id)getPageViewName;
- (id)getTitle;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 showSkip:(_Bool)arg3 showBack:(_Bool)arg4 userSession:(id)arg5;
- (void)leftButtonPressed;
- (void)loadView;
@property(retain, nonatomic) NSString *pageViewName; // @synthesize pageViewName=_pageViewName;
- (void)rightButtonPressed;
- (void)setIsWorking:(_Bool)arg1;
@property(nonatomic) _Bool showBack; // @synthesize showBack=_showBack;
@property(nonatomic) _Bool showSkip; // @synthesize showSkip=_showSkip;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)showTwoFARecoveryCodeGeneratedVC:(id)arg1;

@end

