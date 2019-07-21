//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SIGBadgeView, SIGLabel;

@interface SIGSectionHeader : UIView
{
    SIGLabel *_titleLabel;
    SIGLabel *_subtitleLabel;
    SIGBadgeView *_badgeView;
    NSArray *_labelConstraints;
    NSArray *_trailingAccesoryViewConstraints;
    UIView *_trailingAccessoryView;
    struct UIEdgeInsets _contentInsets;
}

+ (double)heightWithSubtitle:(_Bool)arg1;
- (void).cxx_destruct;
- (void)_activateNewConstraints;
- (void)_deactivateExistingConstraints;
- (id)_rebuildLabelConstraints;
- (id)_rebuildTrailingAccessoryViewConstraints;
@property(retain, nonatomic) SIGBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setActionAccessoryWithText:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setButtonAccessoryWithText:(id)arg1 icon:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;

@end

