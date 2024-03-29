//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsSettingsTableViewCell.h"

@class NSDate, SCPaymentsMethodWrapper, UIImageView, UILabel;

@interface SCPaymentsCardTableViewCell : SCPaymentsSettingsTableViewCell
{
    UIImageView *_paymentIconImageView;
    UIImageView *_checkmarkImageView;
    UILabel *_customTextLabel;
    UILabel *_expirationDateLabel;
    _Bool _isCellSelected;
    NSDate *_today;
    SCPaymentsMethodWrapper *_paymentMethodWrapper;
}

- (void).cxx_destruct;
- (void)_setExpirationDateLabel:(id)arg1;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isCardInvalid;
- (_Bool)isCellSelected;
- (void)layoutSubviews;
@property(nonatomic) __weak SCPaymentsMethodWrapper *paymentMethodWrapper; // @synthesize paymentMethodWrapper=_paymentMethodWrapper;
- (void)setCellSelected:(_Bool)arg1;
- (void)setDeselectedLayout;
- (void)setErrorState:(_Bool)arg1;
- (void)setItem:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSelectedLayout;

@end

