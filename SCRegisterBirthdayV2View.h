//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCDatePickerDelegate-Protocol.h"
#import "SCTextViewDelegate-Protocol.h"

@class NSDate, NSString, SCDatePicker, SCTextView, UILabel, UIScrollView;

@interface SCRegisterBirthdayV2View : SCRegisterV2BaseView <SCTextViewDelegate, SCDatePickerDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    SCDatePicker *_agePickerView;
    UILabel *_titleLabel;
    UILabel *_birthdayLabel;
    SCTextView *_birthdayTextView;
    UIScrollView *_scrollView;
    _Bool _didEditBirthdayYear;
    _Bool _didEditBirthdayMonth;
    _Bool _didEditBirthdayDay;
    NSDate *_birthday;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
- (void)birthdayDidChange;
- (void)dateDidChange;
@property(readonly, nonatomic) NSDate *dateShownInPicker;
- (void)dateWheelIsSpinning;
@property(nonatomic) _Bool didEditBirthdayDay; // @synthesize didEditBirthdayDay=_didEditBirthdayDay;
@property(nonatomic) _Bool didEditBirthdayMonth; // @synthesize didEditBirthdayMonth=_didEditBirthdayMonth;
@property(nonatomic) _Bool didEditBirthdayYear; // @synthesize didEditBirthdayYear=_didEditBirthdayYear;
- (void)initAgePickerView;
- (void)initBirthdayField;
- (void)initBirthdayLabel;
- (void)initBirthdayTitle;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (_Bool)isInputIncomplete;
- (void)refreshContinueButtonEnabledState;
- (void)showAgePicker;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)updateBirthday;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

