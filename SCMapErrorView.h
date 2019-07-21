//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol SCMapErrorViewDelegate;

@interface SCMapErrorView : UIView
{
    id <SCMapErrorViewDelegate> _delegate;
    UIButton *_backButton;
    UILabel *_headerLabel;
    UILabel *_subtextLabel;
}

- (void).cxx_destruct;
- (void)_didTapBackButton;
- (void)_setupView;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <SCMapErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;

@end
