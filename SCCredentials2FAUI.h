//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCUnauthenticatedBaseView, UIButton, UILabel, UISwitch, UITextField, UIView;
@protocol SCCredentials2FAUIDelegate, SCUnauthenticatedStyleHelper;

@interface SCCredentials2FAUI : NSObject <UITextFieldDelegate>
{
    SCUnauthenticatedBaseView *_baseView;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_sendSmsInsteadButton;
    UILabel *_codeLabel;
    UITextField *_codeField;
    UILabel *_errorLabel;
    UIView *_rememberDeviceView;
    UISwitch *_rememberDeviceSwitch;
    id <SCCredentials2FAUIDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_initCodeInputField;
- (void)_initCodeLabel;
- (void)_initErrorLabel;
- (void)_initOtpToSMSButton;
- (void)_initRememberDeviceView;
- (void)_initTitle;
- (void)_initTwoFADescription;
- (void)_rememberDeviceSwitchValueChanged:(id)arg1;
- (void)_setupUI;
@property(nonatomic) __weak id <SCCredentials2FAUIDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithBaseView:(id)arg1 styleHelper:(id)arg2 delegate:(id)arg3;
- (void)otpToSmsPressed:(id)arg1;
- (void)setDescriptionLabelText:(id)arg1;
- (void)setErrorLabelHidden:(_Bool)arg1;
- (void)setErrorLabelText:(id)arg1;
- (void)setRememberDevice:(_Bool)arg1;
- (void)setSendSmsInsteadButtonHidden:(_Bool)arg1;
- (void)setSendSmsInsteadButtonTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSendSmsInsteadButtonUserInteractionEnabled:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
