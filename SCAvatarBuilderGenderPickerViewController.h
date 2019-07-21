//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCAvatarBuilderGenderView, SCLoadingIndicatorView, UIButton, UIView;
@protocol SCAvatarBuilderGenderPickerViewControllerDelegate, SCDownloadableContentManaging;

@interface SCAvatarBuilderGenderPickerViewController : UIViewController
{
    UIView *_backgroundColourView;
    UIButton *_feminineButton;
    UIButton *_masculineButton;
    SCAvatarBuilderGenderView *_feminineAvatarView;
    SCAvatarBuilderGenderView *_masculineAvatarView;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    SCLoadingIndicatorView *_activityIndicatorView;
    id <SCAvatarBuilderGenderPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_addAvatarGenderViewWithGender:(unsigned long long)arg1 toView:(id)arg2;
- (void)_closeTapped;
- (void)_femaleSelected;
- (void)_layoutGenderButtons;
- (void)_maleSelected;
- (void)_setAvatarGenderViewsImages;
@property(nonatomic) __weak id <SCAvatarBuilderGenderPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDownloadableContentManager:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
