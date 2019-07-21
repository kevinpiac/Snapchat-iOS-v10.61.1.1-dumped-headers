//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class CALayer, NSString, UIButton, UITextField;
@protocol SCMapCarouselInlineChatViewDelegate;

@interface SCMapCarouselInlineChatView : UIView <UITextFieldDelegate>
{
    CALayer *_topSeparatorLayer;
    UIButton *_sendButton;
    UIView *_backdropView;
    UITextField *_textField;
    UIButton *_cameraButton;
    _Bool _sendButtonEnabled;
    id <SCMapCarouselInlineChatViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_tappedCameraButton;
- (void)_tappedSendButton;
- (void)_textFieldTextChanged;
- (void)clearTextAndHideSendButtonAnimated;
@property(nonatomic) __weak id <SCMapCarouselInlineChatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusTextField;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)resignTextFieldFocus;
@property(nonatomic) _Bool sendButtonEnabled; // @synthesize sendButtonEnabled=_sendButtonEnabled;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

