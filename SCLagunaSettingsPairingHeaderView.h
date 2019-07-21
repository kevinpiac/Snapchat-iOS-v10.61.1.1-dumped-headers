//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol SCLagunaSettingsPairingHeaderViewDelegate;

@interface SCLagunaSettingsPairingHeaderView : UIView
{
    unsigned long long _state;
    id <SCLagunaSettingsPairingHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtextLabel;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    UIButton *_infoButton;
}

- (void).cxx_destruct;
- (void)_didPressInfoButton;
- (double)_intrinsicHeightForLabel:(id)arg1 width:(double)arg2;
- (void)_refreshViewForState:(unsigned long long)arg1;
@property(nonatomic) __weak id <SCLagunaSettingsPairingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)height;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

