//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCButton, TTTAttributedLabel, UILabel, UIScrollView, UIView;

@interface SCRequestAddressBookAccessView : SCRegisterV2BaseView <SCTraceEnabled>
{
    unsigned long long _buttonBaseColor;
    _Bool _access;
    UIScrollView *_scrollView;
    UILabel *_descriptionTextLabel;
    UIView *_contactsNoAccessView;
    SCButton *_giveAccessButton;
    TTTAttributedLabel *_secondaryTextLabel;
    double _delayTimeLeft;
    NSString *_buttonTitle;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool access; // @synthesize access=_access;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) UIView *contactsNoAccessView; // @synthesize contactsNoAccessView=_contactsNoAccessView;
@property(nonatomic) double delayTimeLeft; // @synthesize delayTimeLeft=_delayTimeLeft;
@property(retain, nonatomic) UILabel *descriptionTextLabel; // @synthesize descriptionTextLabel=_descriptionTextLabel;
@property(retain, nonatomic) SCButton *giveAccessButton; // @synthesize giveAccessButton=_giveAccessButton;
- (id)initWithAddressBookAccess:(_Bool)arg1 continueTitle:(id)arg2 delegate:(id)arg3 buttonBaseColor:(unsigned long long)arg4;
- (void)layoutSubviews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TTTAttributedLabel *secondaryTextLabel; // @synthesize secondaryTextLabel=_secondaryTextLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

