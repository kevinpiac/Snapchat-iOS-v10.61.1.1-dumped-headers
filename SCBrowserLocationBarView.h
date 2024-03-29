//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCProgressView, UIImageView, UILabel;

@interface SCBrowserLocationBarView : UIView
{
    UIView *_locationView;
    UILabel *_locationUrlLabel;
    UIImageView *_httpsLockIcon;
    UIImageView *_bottomBorderShadow;
    SCProgressView *_loaderBar;
}

- (void).cxx_destruct;
- (void)_updateLayoutConstraintsForScheme:(id)arg1;
@property(retain, nonatomic) UIImageView *bottomBorderShadow; // @synthesize bottomBorderShadow=_bottomBorderShadow;
- (void)hideLocationBar;
@property(retain, nonatomic) UIImageView *httpsLockIcon; // @synthesize httpsLockIcon=_httpsLockIcon;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2 fontColor:(id)arg3;
@property(retain, nonatomic) SCProgressView *loaderBar; // @synthesize loaderBar=_loaderBar;
@property(retain, nonatomic) UILabel *locationUrlLabel; // @synthesize locationUrlLabel=_locationUrlLabel;
@property(retain, nonatomic) UIView *locationView; // @synthesize locationView=_locationView;
- (void)showLocationBar;
- (void)updateLocationBarAsText:(id)arg1;
- (void)updateLocationBarScheme:(id)arg1 host:(id)arg2;
- (void)updateProgressBar:(float)arg1;

@end

