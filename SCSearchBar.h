//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCPlaceholderTextField, UIButton, UIImage, UIImageView;
@protocol SCSearchBarDelegate;

@interface SCSearchBar : UIView <UITextFieldDelegate>
{
    _Bool _needsTopBorder;
    _Bool _needsBottomBorder;
    _Bool _enteredText;
    id <SCSearchBarDelegate> _delegate;
    UIImage *_searchIconImage;
    UIImage *_xButtonImage;
    SCPlaceholderTextField *_inputTextField;
    UIImageView *_searchIconView;
    UIButton *_xButton;
    UIView *_topBorderView;
    UIView *_bottomBorderView;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) __weak id <SCSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enteredText; // @synthesize enteredText=_enteredText;
- (id)font;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCPlaceholderTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isFirstResponder;
- (void)keyboardWillHide:(id)arg1;
@property(nonatomic) _Bool needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(nonatomic) _Bool needsTopBorder; // @synthesize needsTopBorder=_needsTopBorder;
- (id)placeholder;
- (_Bool)resignFirstResponder;
@property(retain, nonatomic) UIImage *searchIconImage; // @synthesize searchIconImage=_searchIconImage;
@property(retain, nonatomic) UIImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
- (void)setPlaceholder:(id)arg1;
- (void)setSearchIconLeftOffset:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextContentInsets:(struct UIEdgeInsets)arg1;
- (void)setTintColor:(id)arg1;
@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UIImage *xButtonImage; // @synthesize xButtonImage=_xButtonImage;
- (id)text;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)xButtonPressed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

