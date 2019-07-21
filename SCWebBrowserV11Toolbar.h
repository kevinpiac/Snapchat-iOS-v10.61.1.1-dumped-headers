//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;
@protocol SCWebBrowserV11ToolbarDelegate;

@interface SCWebBrowserV11Toolbar : UIView
{
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_sendButton;
    UIView *_buttonsContainer;
    UIView *_divider;
    NSLayoutConstraint *_buttonContainerBottomConstraint;
    id <SCWebBrowserV11ToolbarDelegate> _delegate;
}

+ (double)fixedHeight;
- (void).cxx_destruct;
- (void)_backButtonPressed:(id)arg1;
- (void)_forwardButtonPressed:(id)arg1;
- (void)_sendButtonPressed:(id)arg1;
- (void)_shareButtonPressed:(id)arg1;
- (void)_updateBottomInset;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerBottomConstraint; // @synthesize buttonContainerBottomConstraint=_buttonContainerBottomConstraint;
@property(retain, nonatomic) UIView *buttonsContainer; // @synthesize buttonsContainer=_buttonsContainer;
@property(nonatomic) __weak id <SCWebBrowserV11ToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
- (id)initWithDelegate:(id)arg1 rightButton:(unsigned long long)arg2;
- (void)navigationChanged;
- (void)safeAreaInsetsDidChange;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;

@end
