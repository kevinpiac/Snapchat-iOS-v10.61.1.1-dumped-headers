//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class SCComposerTextFieldDelegate;
@protocol SCComposerAction;

@interface SCComposerTextField : UITextField
{
    SCComposerTextFieldDelegate *_composerTextFieldDelegate;
    id <SCComposerAction> _onEditBegin;
    id <SCComposerAction> _onChange;
    id <SCComposerAction> _onEditEnd;
}

+ (id)_composerPlaceholderComponents;
+ (void)bindAttributes:(id)arg1;
+ (id)measurePlaceholderView;
- (void).cxx_destruct;
- (id)_textFieldDelegate;
- (_Bool)composer_setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (_Bool)composer_setAutocapitalization:(id)arg1;
- (_Bool)composer_setAutocorrection:(_Bool)arg1;
- (_Bool)composer_setCharacterLimit:(long long)arg1;
- (_Bool)composer_setClosesWhenReturnKeyPressed:(_Bool)arg1;
- (_Bool)composer_setFocused:(_Bool)arg1;
- (_Bool)composer_setFont:(id)arg1;
- (_Bool)composer_setImmutablePrefix:(id)arg1;
- (_Bool)composer_setKeyboardAppearance:(id)arg1;
- (void)composer_setOnChange:(id)arg1;
- (void)composer_setOnEditBegin:(id)arg1;
- (void)composer_setOnEditEnd:(id)arg1;
- (_Bool)composer_setPlaceholder:(id)arg1 color:(id)arg2;
- (_Bool)composer_setReturnKeyText:(id)arg1;
- (_Bool)composer_setSelectTextOnFocus:(_Bool)arg1;
- (_Bool)composer_setTextColor:(id)arg1;
- (_Bool)composer_setTintColor:(id)arg1;
- (_Bool)composer_setValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onChange;
- (void)onEditBegin;
- (void)onEditEnd;
- (_Bool)willEnqueueIntoComposerPool;

@end
